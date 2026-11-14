typedef struct Obj_827FE1F0 {
    char pad[0x98];
    void *impl;
} Obj_827FE1F0;

extern void fn_827FD758(void *a, void *b, void *c, void *d, void *e, int f);

void fn_827FE1F0(Obj_827FE1F0 *a, Obj_827FE1F0 *b, Obj_827FE1F0 *c, void *d, void *e)
{
    fn_827FD758(a->impl, b->impl, c->impl, d, e, 0);
}
