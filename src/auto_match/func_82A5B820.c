extern void fn_82A5C1E0(void *, int, int, int, unsigned);
extern void *memset(void *, int, unsigned int);
extern unsigned int lbl_8208DEC4;
extern unsigned int lbl_8208DEFC;

typedef struct {
    unsigned char data[0x38];
    unsigned char *cur;
} Buffer_82A5B820;

typedef struct {
    void *vt;
    int base[6];
    Buffer_82A5B820 a;
    Buffer_82A5B820 b;
    unsigned value;
} Obj_82A5B820;

Obj_82A5B820 *fn_82A5B820(Obj_82A5B820 *self, int a, int b, int c, unsigned value)
{
    fn_82A5C1E0(self->base, a, b, c, value);
    self->value = value;
    self->vt = &lbl_8208DEFC;
    *(void **)self->base = &lbl_8208DEC4;
    memset(&self->a, 0, sizeof(self->a));
    memset(&self->b, 0, sizeof(self->b));
    self->a.cur = self->a.data;
    self->b.cur = self->b.data;
    return self;
}
