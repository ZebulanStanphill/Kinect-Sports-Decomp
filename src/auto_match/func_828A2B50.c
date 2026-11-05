typedef struct { union { char buf[16]; void *p; } u; unsigned size,cap; } Str;
typedef struct { void *vt; char pad[76]; void *vt2; char pad2[168-84]; Str str; } Obj_828A2B50;
extern char lbl_82024198[], lbl_82024190[];
extern void fn_8265CA20(void *);
extern void fn_828BDE70(void *);
static __forceinline void tidy(Str *s) { if(s->cap >= 16) fn_8265CA20(s->u.p); s->size=0; s->cap=15; s->u.buf[0]=0; }
void fn_828A2B50(Obj_828A2B50 *p) { p->vt=lbl_82024198; p->vt2=lbl_82024190; tidy(&p->str); fn_828BDE70(p); }
