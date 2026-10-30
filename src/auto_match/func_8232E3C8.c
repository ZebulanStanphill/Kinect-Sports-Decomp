extern void fn_822315A0(void *);
extern unsigned int lbl_821B0800, lbl_821AF1C8;
typedef struct { void *ref; } Ref;
typedef struct { void *vtable; int pad[6]; Ref member; } Obj;

void fn_8232E3C8(Obj *p) { p->vtable=&lbl_821B0800; {Ref *inline_destroy_0=(&p->member); if (inline_destroy_0->ref) fn_822315A0(inline_destroy_0->ref); } p->vtable=&lbl_821AF1C8; }
