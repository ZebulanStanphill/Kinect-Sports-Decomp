typedef struct Shape_82D535D8 {
    char pad0[0xc];
    int type;
    unsigned char flag;
    char pad11[7];
    void *a;
    char pad1c[0x18];
    void *b;
} Shape_82D535D8;

typedef struct Holder_82D535D8 {
    Shape_82D535D8 *shape;
} Holder_82D535D8;

void *fn_82D535D8(Holder_82D535D8 *self)
{
    Shape_82D535D8 *s = self->shape;
    switch (s->type) {
    case 8:
        if (s->flag == 1)
            return s->a;
        break;
    case 10:
        return s->b;
    }
    return 0;
}
