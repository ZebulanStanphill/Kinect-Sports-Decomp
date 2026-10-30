typedef struct State { char pad[4]; int index; char pad2[0x18]; char *items; } State;
void fn_827E5A30(State *p) { void *o=*(void **)(p->items+p->index*0x28+0x74); ((void (*)(void *))(*(void ***)o)[3])(o); }
