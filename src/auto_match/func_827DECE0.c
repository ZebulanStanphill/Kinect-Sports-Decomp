typedef struct Obj_827DECE0 {
    int f0;
    void *ctx;
    int f8;
    void *s;
    unsigned int index;
} Obj_827DECE0;

extern void fn_827DA600(void *s, void *ctx, unsigned int index, void *cb);

void fn_827DECE0(Obj_827DECE0 *self, void *cb)
{
    fn_827DA600(self->s, self->ctx, self->index, cb);
}
