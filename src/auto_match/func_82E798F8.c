typedef struct Obj_82E798F8 {
    char pad0[0x150];
    unsigned char base;
    char pad151[0x178 - 0x151];
    char list[0x1e0 - 0x178];
    unsigned int count;
} Obj_82E798F8;

extern unsigned int fn_82E76C40(Obj_82E798F8 *self);
extern int fn_82E78690(void *list, unsigned int index, char **out);

static __forceinline char *GetLast(Obj_82E798F8 *self)
{
    char *e;
    return fn_82E78690(self->list, self->count - 1, &e) ? e : 0;
}

unsigned int fn_82E798F8(Obj_82E798F8 *self)
{
    unsigned int r = fn_82E76C40(self) + self->base;
    if (self->count != 0) {
        char *p = GetLast(self);
        if (p != 0) {
            r = *(unsigned int *)(p + 0x17) + *(unsigned int *)(p + 0x13);
        }
    }
    return r;
}
