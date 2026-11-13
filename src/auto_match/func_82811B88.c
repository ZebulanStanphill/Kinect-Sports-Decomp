extern float fn_82809558(float);
float fn_82811B88(float *a, float *b) {
 float x = a[0] - b[0];
 float y = a[1] - b[1];
 return fn_82809558(x*x + y*y);
}
