typedef struct { int kind; int buffer[5]; int a[2]; int b[2]; int pad[2]; } Descriptor_829EBED0;
typedef struct { char pad[36]; int enabled; char more[12]; char a[132]; char b[296]; } Context_829EBED0;
extern void fn_829EB688(Context_829EBED0 *);
extern int fn_829EA810(Descriptor_829EBED0 *,unsigned,unsigned);
extern int fn_829EE540(void *,Descriptor_829EBED0 *);
extern int fn_829EBB98(Context_829EBED0 *,int,int,unsigned *,int,int,int,int);
extern void fn_829EB780(Context_829EBED0 *);
extern void fn_829E9CB0(void *);
extern void fn_829EABB8(void *);
int fn_829EBED0(int p,int q,unsigned *rect) {
 Descriptor_829EBED0 a,b; Context_829EBED0 c; unsigned x,y; int result;
 a.kind=0; a.buffer[0]=0; a.buffer[1]=0; a.buffer[2]=0; a.buffer[3]=0; a.buffer[4]=1; a.a[0]=0; a.a[1]=0; a.b[0]=0; a.b[1]=0;
 b.kind=0; b.buffer[0]=0; b.buffer[1]=0; b.buffer[2]=0; b.buffer[3]=0; b.buffer[4]=1; b.a[0]=0; b.a[1]=0; b.b[0]=0; b.b[1]=0;
 fn_829EB688(&c); x=*(unsigned *)(p+16);y=*(unsigned *)(p+20);
 if(rect) {x=rect[2]-rect[0];y=rect[3]-rect[1];}
 result=fn_829EA810(&a,x,*(unsigned *)(q+16));
 if(result>=0) {result=fn_829EA810(&b,y,*(unsigned *)(q+20));
 if(result>=0) {c.enabled=1;result=fn_829EE540(c.a,&a);
 if(result>=0) {c.enabled=1;result=fn_829EE540(c.b,&b);
 if(result>=0) result=fn_829EBB98(&c,p,q,rect,2,2,0,0); }}}
 fn_829EB780(&c);fn_829E9CB0(b.a);fn_829EABB8(b.buffer);fn_829E9CB0(a.a);fn_829EABB8(a.buffer);return result;
}
