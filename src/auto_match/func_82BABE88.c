typedef struct Obj Obj;
typedef struct { void *pad[6]; void (*f)(Obj *,int,int,void *,int); } VT;
struct Obj { VT *vt; };
typedef struct { int pad; int stream, offset, pos; } Patch;
extern void fn_82BA02A8(void *,const char *,...);
void fn_82BABE88(Patch *p,int off,char *ctx) { int n=p->offset+off; Obj *o; fn_82BA02A8(ctx,"VertexPatch : stream %d offset (bytes) %d position (dwords) %d\n",p->stream,n,p->pos); o=*(Obj **)(ctx+0x5d0); o->vt->f(o,p->stream,n,ctx,p->pos); }
