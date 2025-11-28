// Compute ∑ foo(i) for i from 0 to N, in parallel.
cilk::reducer_opadd<float> result(0);
cilk_for (int i = 0; i < N; i++)
    result += foo(i);

