struct X { char data[32]; }; struct V { struct X *a,*b,*c; }; int fn_82660740(struct V *p) { return p->b - p->a; }
