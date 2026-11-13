typedef struct Obj_82F94210 {
    int pad[4];
    void *f10;
    unsigned char f14;
    char pad15[3];
    char sub[1];
} Obj_82F94210;
extern void fn_82F91548(void *, void *);
void fn_82F94210(Obj_82F94210 *self, void *a, void *b)
{
    self->f10 = a;
    self->f14 = 1;
    fn_82F91548(self->sub, b);
}
