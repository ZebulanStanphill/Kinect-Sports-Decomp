typedef struct Obj_83009198 Obj_83009198;
typedef struct {
    char pad[0xa4];
    void (*fn)(Obj_83009198 *self, int a, int b, float f, int c, int d);
} Vt_83009198;
struct Obj_83009198 {
    Vt_83009198 *vt;
    int pad[8];
    void *active;
};

void fn_83009198(Obj_83009198 *self, int c, int d)
{
    if (self->active == 0) {
        return;
    }
    self->vt->fn(self, 0, 0, 0.0f, c, d);
}
