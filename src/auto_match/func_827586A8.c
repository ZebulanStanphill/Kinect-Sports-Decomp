struct A { char pad[0x60]; void *p; }; struct B { char pad[8]; struct A *a; char pad2[8]; void *p; };
unsigned char fn_827586A8(struct B *p) { return p->a->p == 0 || p->p == 0; }