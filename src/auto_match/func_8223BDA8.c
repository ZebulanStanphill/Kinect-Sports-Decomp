typedef struct Table_8223BDA8 {
    int mask;
    unsigned char *buf;
    int capacity;
} Table_8223BDA8;

typedef struct Obj_8223BDA8 {
    void *vtable;
    int field4;
    Table_8223BDA8 table;
} Obj_8223BDA8;

extern char lbl_821972AC[];
extern void fn_82240DB8(Obj_8223BDA8 *self);
extern void *fn_8265C9E0(unsigned int size);
extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void Table_init(Table_8223BDA8 *t)
{
    unsigned char *p;
    t->mask = 7;
    t->capacity = 8;
    p = (unsigned char *)fn_8265C9E0(8);
    memset(p, 0, 8);
    t->buf = p;
}

Obj_8223BDA8 *fn_8223BDA8(Obj_8223BDA8 *self)
{
    fn_82240DB8(self);
    self->vtable = lbl_821972AC;
    Table_init(&self->table);
    return self;
}
