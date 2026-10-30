struct S { int a; char pad[0x4db0]; unsigned b; }; void fn_82635A38(struct S *p,unsigned x){p->b = (p->b & ~0xf8) | (x & 0xf9); p->a=x&1;}
