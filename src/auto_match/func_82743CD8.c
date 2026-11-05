typedef struct { char b[16]; } Value_82743CD8;
extern double fn_826972E0(Value_82743CD8 *,int);
extern void fn_82696330(Value_82743CD8 *);
void fn_82743CD8(int a,int b,double *out) {
 Value_82743CD8 vals[2]; int n; Value_82743CD8 *p; unsigned *key=(unsigned *)(b+120);
 for(n=0;n<2;n++) vals[n].b[0]=0;
 (*(void (**)(int,unsigned *,unsigned,Value_82743CD8 *))(*(int *)(a+16)+44))(a+16,key,*key+492,&vals[0]);
 (*(void (**)(int,unsigned *,unsigned,Value_82743CD8 *))(*(int *)(a+16)+44))(a+16,key,*key+496,&vals[1]);
 { double x=fn_826972E0(&vals[1],b); double y=fn_826972E0(&vals[0],b);out[0]=y;out[1]=x; }
 p=vals+2; n=1; do { --p; fn_82696330(p); } while(--n>=0);
}
