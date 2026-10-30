typedef struct { char pad[0x78]; int flag; } Sub;
typedef struct { char pad[0xf4]; Sub *sub; } Obj;
typedef struct { int pad; int *value; } Out;
void fn_8236D708(Out *a, Obj *b) {
 if (b->sub) *a->value = *a->value || b->sub->flag;
}
