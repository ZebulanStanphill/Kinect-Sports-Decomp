extern int fn_8267C4C8(unsigned int p);
extern int fn_8267C4F0(unsigned int p);
extern int fn_826EA040();
extern int fn_826EA050();
extern int fn_826EA110();
extern int fn_826EA1E8();
extern int jpeg_resync_to_restart();

typedef struct Obj_826EA2B8 {
    unsigned int f0;
    unsigned int f4;
    void *cb8;
    void *cbC;
    void *cb10;
    void *cb14;
    void *cb18;
    unsigned int ref;
    unsigned char flag;
} Obj_826EA2B8;

Obj_826EA2B8 *fn_826EA2B8(Obj_826EA2B8 *self, unsigned int p)
{
    self->ref = 0;
    if (p != 0) {
        fn_8267C4C8(p);
    }
    if (self->ref != 0) {
        fn_8267C4F0(self->ref);
    }
    self->ref = p;
    self->flag = 1;
    self->f4 = 0;
    self->f0 = 0;
    self->cb8 = (void *)fn_826EA040;
    self->cbC = (void *)fn_826EA110;
    self->cb10 = (void *)fn_826EA1E8;
    self->cb14 = (void *)jpeg_resync_to_restart;
    self->cb18 = (void *)fn_826EA050;
    return self;
}
