typedef int (*F)();
extern unsigned char fn_828C4240(int);
extern int fn_828B2BF8(void);
extern void fn_828B2848(int,int *);
extern void fn_828AA3B0(int,int *,int);
extern void fn_8289F478(int,int *);
void fn_828AA8F8(int *p) { int q; unsigned char c; q=(*(F *)(*p+4))(p); q+=0x1ec;
c=((unsigned char (*)(int))*(int *)(*(int *)q+0x3c))(q);
if(c==0) { if(fn_828C4240(p[4])==0) fn_828B2848(fn_828B2BF8(),p);
q=(*(F *)(*p+4))(p);q+=0x198;
{ int r=(*(F *)(*(int *)q+0x3c))(q);
fn_828AA3B0(p[4],p,r); }fn_8289F478(*(int *)(p[0xd]+0x38),p);}}
