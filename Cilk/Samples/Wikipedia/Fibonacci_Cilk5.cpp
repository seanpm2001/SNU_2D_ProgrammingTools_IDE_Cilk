thread fib(cont int k, int n)
{
    if (n < 2) {
        send_argument(k, n);
    }
    else {
        cont int x, y;
        spawn_next sum(k, ?x, ?y);
        spawn fib(x, n - 1);
        spawn fib(y, n - 2);
    }
}

thread sum(cont int k, int x, int y)
{
     send_argument(k, x + y);
}
