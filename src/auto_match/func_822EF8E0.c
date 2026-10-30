extern void fn_822315A0(void *);
extern unsigned int lbl_821AE3FC, lbl_821AF1C8;
typedef struct { void *ref; } Ref;
typedef struct { void *vtable; int pad[6]; Ref member; } Obj;

void fn_822EF8E0(Obj *p) { p->vtable=&lbl_821AE3FC; {Ref *inline_destroy_0=(&p->member); if (inline_destroy_0->ref) fn_822315A0(inline_destroy_0->ref); } p->vtable=&lbl_821AF1C8; }
