extern void fn_82837D98(void *, int, void **);

typedef struct Owner_822B98A8 {
    char pad[0xb0];
    void **slot;
} Owner_822B98A8;

typedef struct Obj_822B98A8 {
    int pad0[2];
    Owner_822B98A8 *owner;
    int padc[7];
    char *f28;
} Obj_822B98A8;

void *fn_822B98A8(Obj_822B98A8 *p)
{
    void *r;
    char *v = p->f28;
    if (v) {
        fn_82837D98(*(void **)(v + 0x14), 0, &r);
        return r;
    }
    return *p->owner->slot;
}
