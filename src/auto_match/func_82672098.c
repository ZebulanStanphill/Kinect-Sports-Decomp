extern int fn_826718E8(int,int,int);
typedef struct { int pad; int a; int pad2[3]; int b,c; } S;
unsigned char fn_82672098(S *p){ int a=p->a; int c=p->c; int b=p->b; int v=fn_826718E8(a,b,c); return v ? 0 : 2; }
