extern void fn_82FAC590(void *);
struct S { char pad[4]; int x; char pad2[4]; void *p; char pad3[0x18]; int v; };
void fn_82FA8F10(struct S *p) { p->v=0; if (p->p) fn_82FAC590(&p->x); }