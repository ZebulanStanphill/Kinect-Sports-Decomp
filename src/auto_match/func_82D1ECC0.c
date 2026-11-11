typedef struct Points_82D1ECC0 { int pad[2]; char *a,*b,*c; } Points_82D1ECC0;
extern int fn_82D1EB20(void *, void *, void *, void *, void *, unsigned char);
int fn_82D1ECC0(void *o, Points_82D1ECC0 *p, void *a, unsigned char b) {
 return fn_82D1EB20(o,p->a+16,p->b+16,p->c+16,a,b);
}
