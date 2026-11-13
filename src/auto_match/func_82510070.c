typedef struct Msg_82510070 {
    int type;
    int size;
    float value;
    int zero;
    int a;
    int b;
} Msg_82510070;

typedef struct Src_82510070 {
    int a;
    float value;
    int b;
} Src_82510070;

typedef struct Target_82510070 Target_82510070;
typedef struct TargetVt_82510070 {
    void *f0, *f4, *f8;
    void (*Send)(Target_82510070 *self, Msg_82510070 *msg);
} TargetVt_82510070;
struct Target_82510070 {
    TargetVt_82510070 *vt;
};

typedef struct Obj_82510070 {
    int f0;
    Target_82510070 *target;
} Obj_82510070;

extern void fn_82A1EFC0(void *dst, int value, unsigned int size);

void fn_82510070(Obj_82510070 *self, Src_82510070 *src)
{
    Msg_82510070 m;
    fn_82A1EFC0(&m.value, 0, 0x10);
    m.type = 0xa;
    m.size = 0x18;
    m.value = src->value;
    m.zero = 0;
    m.a = src->a;
    m.b = src->b;
    self->target->vt->Send(self->target, &m);
}
