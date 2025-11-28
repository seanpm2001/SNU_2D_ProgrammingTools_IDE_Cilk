void loop(int *a, int n)
{
    #pragma cilk grainsize = 100  // optional
    cilk_for (int i = 0; i < n; i++) {
        a[i] = f(a[i]);
    }
}
