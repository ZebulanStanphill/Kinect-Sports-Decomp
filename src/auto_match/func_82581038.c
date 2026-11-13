typedef struct Res_82581038 {
    char pad[0x14];
    void *texture;
} Res_82581038;

typedef struct Obj_82581038 {
    void *vt;
    int owner;
    char a[0x7c];
    char b[0x58];
    int fdc;
    int fe0;
    Res_82581038 *res;
    unsigned int noise;
    int fec;
    int param;
} Obj_82581038;

extern char lbl_821C5F0C[];
extern void *fn_82A1EFC0(void *dst, int value, unsigned int size);
extern void fn_82520158(const char *name, unsigned int *id, int flag);
extern Res_82581038 *fn_8251F720(unsigned int *id, int flags);
extern void fn_82837D98(void *texture, int b, unsigned int *out);

Obj_82581038 *fn_82581038(Obj_82581038 *self, int owner, int param)
{
    unsigned int id;

    self->owner = owner;
    self->vt = lbl_821C5F0C;
    fn_82A1EFC0(self->a, 0, 0x7c);
    fn_82A1EFC0(self->b, 0, 0x58);
    self->param = param;
    self->fdc = 0;
    self->fe0 = 0;
    self->fec = 0;
    fn_82520158("fx2DNoiseTexture", &id, 0);
    self->res = fn_8251F720(&id, 0);
    fn_82837D98(self->res->texture, 0, &id);
    self->noise = id;
    return self;
}
