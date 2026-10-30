extern void fn_827D6C60(void *,void *,int,void *,void *,unsigned char);
typedef struct Obj Obj;
typedef struct { void *pad[23]; int (*f)(Obj *,void *); } VT;
struct Obj { VT *v; };
void fn_827D7460(void *p,void *x,int a,int *handle,int *out,void *b,unsigned char c) { fn_827D6C60(p,x,a,handle,b,c); if(*handle) *out=((Obj *)*handle)->v->f((Obj *)*handle,x); }
