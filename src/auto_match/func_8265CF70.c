struct X { char data[4]; }; struct V { struct X *a,*b,*c; }; int fn_8265CF70(struct V *p) { return p->b - p->a; }
