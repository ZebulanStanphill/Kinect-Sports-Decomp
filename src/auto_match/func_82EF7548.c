extern int (*lbl_8324D798)(void *,int,int,int,int);
void fn_82EF7548(void *p,int a,int b,int *out) {
    out[0]=lbl_8324D798(p,16,a,b,0xfffff);
    out[1]=lbl_8324D798(p,16,a+1,b,0xfffff);
}
