typedef struct Stamp_82DB4198 { const char *name; unsigned tick,unused; } Stamp_82DB4198;
typedef struct Tls_82DB4198 { unsigned pad; Stamp_82DB4198 *next; unsigned pad2; Stamp_82DB4198 *end; } Tls_82DB4198;
extern unsigned lbl_8323B4A0;
extern Tls_82DB4198 *KeTlsGetValue(unsigned);
extern unsigned __int64 __mftb(void);
extern int fn_82DC7820(void *);
extern void fn_82DAE2C8(void *,void *);
extern void fn_82DAD1B0(void *,void *);
static __forceinline void timer(const char *name) {
 Tls_82DB4198 *t=KeTlsGetValue(lbl_8323B4A0);
 Stamp_82DB4198 *s=t->next;
 if(s<t->end) { s->name=name; s->tick=(unsigned)__mftb(); t->next=s+1; }
}
typedef struct Body_82DB4198 { void *vt; int p; void *ctx; } Body_82DB4198;
typedef struct Obj_82DB4198 { int p[3]; void *item; int p4; Body_82DB4198 *a,*b; } Obj_82DB4198;
void fn_82DB4198(void *unused,Obj_82DB4198 *o) {
 struct { int kind; Body_82DB4198 *a,*b; int value; } args;
 void *item;
 timer("TtCollLfUtil");
 item=o->item;
 if((*(int (**)(void *))(*(unsigned *)item+32))(item)==11) {
 Body_82DB4198 *a,*b;
 args.value=fn_82DC7820(item);
 a=o->a; b=o->b;
 args.kind=2; args.a=a; args.b=b;
 fn_82DAE2C8(a->ctx,&args);
 args.kind=0;fn_82DAD1B0(a,&args);
 args.kind=1;fn_82DAD1B0(b,&args);
 }
 timer("Et");
}
