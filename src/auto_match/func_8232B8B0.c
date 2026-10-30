extern void fn_822315A0(void *);
extern unsigned int lbl_821B0650;
typedef struct { void *ref; } Ref;
typedef struct { void *vtable; int pad[6]; Ref a; int pad2; Ref b; } Obj;

void fn_8232B8B0(Obj *p) { p->vtable=&lbl_821B0650; {Ref *inline_destroy_0=(&p->b); if (inline_destroy_0->ref) fn_822315A0(inline_destroy_0->ref); } {Ref *inline_destroy_0=(&p->a); if (inline_destroy_0->ref) fn_822315A0(inline_destroy_0->ref); } }
