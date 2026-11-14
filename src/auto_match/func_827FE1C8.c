typedef struct Obj_827FE1C8 {
    char pad[0x98];
    void *impl;
} Obj_827FE1C8;

extern void fn_827FD9A8(void *a, void *b, void *c, void *d, int e);

void fn_827FE1C8(Obj_827FE1C8 *a, Obj_827FE1C8 *b, Obj_827FE1C8 *c, void *d)
{
    fn_827FD9A8(a->impl, b->impl, c->impl, d, 0);
}
