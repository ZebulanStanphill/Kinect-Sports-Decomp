extern float fn_82810280(float *,float *);
void fn_83066718(float *p,float *x,float *y,float *z,float *d) {
 *x=p[0]; *y=p[1]; *z=p[2]; *d=-fn_82810280(p,p+3);
}
