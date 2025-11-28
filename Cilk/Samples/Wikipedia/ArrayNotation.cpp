 // y ← α x + y
 void axpy(int n, float alpha, const float *x, float *y)
 {
     for (int i = 0; i < n; i++) {
         y[i] += alpha * x[i];
     }
 }
