extern void fn_8234C320(int, void *);
typedef struct Sub { char data[0x18]; int value; } Sub;
typedef struct Mid { char pad[0x118]; Sub a; char pad3[0x10]; Sub b; } Mid;
typedef struct Obj { char pad[0x150]; Mid m; } Obj;


void fn_822B8700(Obj *p, int v) { {Mid *inline_both_0=(&p->m); int inline_both_1=(v); {Sub *inline_set_0=(&inline_both_0->a); int inline_set_1=(inline_both_1); if(inline_set_0->value != inline_set_1) fn_8234C320(inline_set_1,inline_set_0); } {Sub *inline_set_0=(&inline_both_0->b); int inline_set_1=(inline_both_1); if(inline_set_0->value != inline_set_1) fn_8234C320(inline_set_1,inline_set_0); } } }
