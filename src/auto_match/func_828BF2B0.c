typedef struct { union { char buf[16]; void *p; } u; unsigned size,cap; } Str;
typedef struct { void *vt; char pad[76]; void *vt2; char pad2[184-84]; Str str; } Obj_828BF2B0;
extern char lbl_82025A18[], lbl_82025A10[];
extern void fn_8265CA20(void *);
extern void fn_828BDE70(void *);
static __forceinline void tidy(Str *s) { if(s->cap >= 16) fn_8265CA20(s->u.p); s->size=0; s->cap=15; s->u.buf[0]=0; }
void fn_828BF2B0(Obj_828BF2B0 *p) { p->vt=lbl_82025A18; p->vt2=lbl_82025A10; tidy(&p->str); fn_828BDE70(p); }
