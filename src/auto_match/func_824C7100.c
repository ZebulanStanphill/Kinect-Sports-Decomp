extern void fn_822315A0(void *);
extern unsigned int lbl_821C0A44, lbl_821AF318;
typedef struct { void *ref; } Ref;
typedef struct { void *vtable; int pad[2]; Ref member; } Obj;

void fn_824C7100(Obj *p) { p->vtable=&lbl_821C0A44; {Ref *inline_destroy_0=(&p->member); if (inline_destroy_0->ref) fn_822315A0(inline_destroy_0->ref); } p->vtable=&lbl_821AF318; }
