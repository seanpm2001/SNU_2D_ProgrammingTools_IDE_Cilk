static void recursion(int *a, int start, int end)
{
    if (end - start <= 100) {  // The 100 here is the grainsize.
        for (int i = start; i < end; i++) {
            a[i] = f(a[i]);
        }
    }
    else {
        int midpoint = start + (end - start) / 2;
        cilk_spawn recursion(a, start, midpoint);
        recursion(a, midpoint, end);
        cilk_sync;
    }
}

void loop(int *a, int n)
{
    recursion(a, 0, n);
}
