typedef struct Table_8223C138 {
    int mask;
    unsigned char *buf;
    int capacity;
} Table_8223C138;

typedef struct Obj_8223C138 {
    void *vtable;
    int field4;
    Table_8223C138 table;
} Obj_8223C138;

extern char lbl_821972BC[];
extern void fn_82240DB8(Obj_8223C138 *self);
extern void *fn_8265C9E0(unsigned int size);
extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void Table_init(Table_8223C138 *t)
{
    unsigned char *p;
    t->mask = 7;
    t->capacity = 16;
    p = (unsigned char *)fn_8265C9E0(16);
    memset(p, 0, 16);
    t->buf = p;
}

Obj_8223C138 *fn_8223C138(Obj_8223C138 *self)
{
    fn_82240DB8(self);
    self->vtable = lbl_821972BC;
    Table_init(&self->table);
    return self;
}
