typedef struct Stamp_82DB4098 { const char *name; unsigned tick,unused; } Stamp_82DB4098;
typedef struct Tls_82DB4098 { unsigned pad; Stamp_82DB4098 *next; unsigned pad2; Stamp_82DB4098 *end; } Tls_82DB4098;
extern unsigned lbl_8323B4A0;
extern Tls_82DB4098 *KeTlsGetValue(unsigned);
extern unsigned __int64 __mftb(void);
extern int fn_82DC7820(void *);
extern void fn_82DAE1F0(void *,void *);
extern void fn_82DAD0D8(void *,void *);
static __forceinline void timer(const char *name) {
 Tls_82DB4098 *t=KeTlsGetValue(lbl_8323B4A0);
 Stamp_82DB4098 *s=t->next;
 if(s<t->end) { s->name=name; s->tick=(unsigned)__mftb(); t->next=s+1; }
}
typedef struct Body_82DB4098 { void *vt; int p; void *ctx; } Body_82DB4098;
typedef struct Obj_82DB4098 { int p[3]; void *item; int p4; Body_82DB4098 *a,*b; } Obj_82DB4098;
void fn_82DB4098(void *unused,Obj_82DB4098 *o) {
 struct { int kind; Body_82DB4098 *a,*b; int value; } args;
 void *item;
 timer("TtCollLtUtil");
 item=o->item;
 if((*(int (**)(void *))(*(unsigned *)item+32))(item)==11) {
 Body_82DB4098 *a,*b;
 args.value=fn_82DC7820(item);
 a=o->a; b=o->b;
 args.kind=2; args.a=a; args.b=b;
 fn_82DAE1F0(a->ctx,&args);
 args.kind=0;fn_82DAD0D8(a,&args);
 args.kind=1;fn_82DAD0D8(b,&args);
 }
 timer("Et");
}
