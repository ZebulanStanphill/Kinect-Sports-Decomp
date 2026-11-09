typedef struct Table_8223B068 {
    int mask;
    unsigned char *buf;
    int capacity;
} Table_8223B068;

typedef struct Obj_8223B068 {
    void *vtable;
    int field4;
    Table_8223B068 table;
} Obj_8223B068;

extern char lbl_821971A0[];
extern void fn_82240DB8(Obj_8223B068 *self);
extern void *fn_8265C9E0(unsigned int size);
extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void Table_init(Table_8223B068 *t)
{
    unsigned char *p;
    t->mask = 7;
    t->capacity = 25;
    p = (unsigned char *)fn_8265C9E0(25);
    memset(p, 0, 25);
    t->buf = p;
}

Obj_8223B068 *fn_8223B068(Obj_8223B068 *self)
{
    fn_82240DB8(self);
    self->vtable = lbl_821971A0;
    Table_init(&self->table);
    return self;
}
