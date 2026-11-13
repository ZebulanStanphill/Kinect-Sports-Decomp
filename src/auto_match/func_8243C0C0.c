typedef struct Src_8243C0C0 Src_8243C0C0;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    int (*getState)(Src_8243C0C0 *, int);
} SrcVt_8243C0C0;
struct Src_8243C0C0 { SrcVt_8243C0C0 *vt; };

typedef struct {
    char pad[8];
    int source;
} Link_8243C0C0;

typedef struct Obj_8243C0C0 Obj_8243C0C0;
typedef struct {
    void *f0;
    void *f4;
    void (*change)(Obj_8243C0C0 *, int, int);
    void (*update)(Obj_8243C0C0 *, float);
} ObjVt_8243C0C0;
struct Obj_8243C0C0 {
    ObjVt_8243C0C0 *vt;
    int pad4[4];
    int state;
    int pending;
    int pad1c[7];
    float time;
    Link_8243C0C0 *link;
};

void fn_8243C0C0(Obj_8243C0C0 *self, float dt)
{
    int src = self->link->source;
    int pending = self->pending;
    int next = src != 0 ? ((Src_8243C0C0 *)src)->vt->getState((Src_8243C0C0 *)src, pending) : pending;

    self->time = self->time + dt;
    if (next != self->state) {
        self->vt->change(self, self->state, next);
        self->pending = next;
        self->state = next;
        self->time = 0.0f;
    }
    self->vt->update(self, dt);
}
