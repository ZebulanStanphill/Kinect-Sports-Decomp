typedef struct { char pad[0x388]; void *a; char pad2[0x30]; void *b; } Inner;
typedef struct { char pad[0x48]; void *x; } Obj;
extern void fn_828279E8(Obj *, Inner **);
extern int fn_82821678(void *,char *,void *,void *,void *);
void fn_828265E0(Obj *p, char *base, void *q, char **out) { Inner *v=0; int n; fn_828279E8(p,&v); n=fn_82821678(q,base,p->x,v->a,v->b); if (n>=0) *out=base+n; else *out=0; }
