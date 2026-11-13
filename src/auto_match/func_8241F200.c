typedef struct {
    int f0;
    int f4;
    int pad08[2];
    int f10[11];
    int pad3c[6];
    unsigned char block1[0xa4];
    unsigned char block2[0xa4];
} Desc_8241F200;

typedef struct Sink_8241F200 Sink_8241F200;
typedef struct {
    void *f[4];
    void (*Submit)(Sink_8241F200 *self, Desc_8241F200 *desc);
} SinkVtbl_8241F200;
struct Sink_8241F200 { SinkVtbl_8241F200 *vt; };

typedef struct {
    int f0;
    Sink_8241F200 *sink;
} Obj_8241F200;

extern void fn_82A1EFC0(void *dst, int value, unsigned int size);

void fn_8241F200(Obj_8241F200 *self, Desc_8241F200 *desc)
{
    desc->f4 = 0;
    desc->f10[0] = 0;
    desc->f10[1] = 0;
    desc->f10[2] = 0;
    desc->f10[3] = 0;
    desc->f10[4] = 0;
    desc->f10[5] = 0;
    desc->f10[6] = 0;
    desc->f10[7] = 0;
    desc->f10[8] = 0;
    desc->f10[9] = 0;
    desc->f10[10] = 0;
    fn_82A1EFC0(desc->block1, 0, sizeof(desc->block1));
    fn_82A1EFC0(desc->block2, 0, sizeof(desc->block2));
    self->sink->vt->Submit(self->sink, desc);
}
