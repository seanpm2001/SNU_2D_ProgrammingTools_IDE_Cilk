void add1(cilk::reducer_opadd<int> &r) { r++; }
// ...
cilk::reducer_opadd<int> r(0);
cilk_spawn add1(r);
if (r == 0) { r++; }
cilk_sync;
output(r.get_value());
