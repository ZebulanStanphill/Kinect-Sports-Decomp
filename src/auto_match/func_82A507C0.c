typedef struct Target_82A507C0 Target_82A507C0;
typedef struct {
    void *slots[10];
    int (*Call)(Target_82A507C0 *self, int a, int b, int countC, int *c, int countD, int *d, unsigned int magic, int e);
} TargetVt_82A507C0;
struct Target_82A507C0 {
    TargetVt_82A507C0 *vt;
};
typedef struct {
    char pad[0xb0];
    Target_82A507C0 *target;
} Inner_82A507C0;
typedef struct {
    char pad[0x30];
    Inner_82A507C0 *inner;
} Obj_82A507C0;
extern void fn_82A40238(int *hr);

int fn_82A507C0(Obj_82A507C0 *self, int a, int b, int c, int d, int e)
{
    Target_82A507C0 *t = self->inner->target;
    int hr = t->vt->Call(t, a, b, 1, &c, 1, &d, 0x1337f001, e);
    fn_82A40238(&hr);
    return hr;
}
