extern void fn_82CE6820(void *,int,int);
extern void fn_82DD9BD0(void *,void *,void *,void *,void *,void *,int);
void fn_82D75990(char *p,int a,int b,int c,int d){struct {char x[8],y[24];struct {int a,b,zero,c,value;char pad[12]; char buf[104];} s;} frame;
int v=*(int *)(p+8);frame.s.a=a;frame.s.b=b;frame.s.zero=0;frame.s.c=c;frame.s.value=v;fn_82CE6820(frame.s.buf,*(int *)(a+8),*(int *)(b+8));fn_82DD9BD0(&frame.s,frame.x,frame.y,p+12,p+0x30,p+0x20,d);}
