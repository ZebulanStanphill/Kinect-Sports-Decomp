typedef void (*F)(void *); typedef struct { char pad[16]; void *q; } Sub; typedef struct { char pad[0x50]; Sub sub; } Obj;

void fn_82234CF0(Obj *p) { Sub *s=&p->sub; if(s->q) {Sub *inline_go_0=(s); ((F *)(*(void **)inline_go_0->q))[1](inline_go_0->q); } }
