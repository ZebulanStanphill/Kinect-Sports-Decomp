typedef struct Src_824C24B0 Src_824C24B0;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    int (*getState)(Src_824C24B0 *, int);
} SrcVt_824C24B0;
struct Src_824C24B0 { SrcVt_824C24B0 *vt; };

typedef struct {
    char pad[8];
    Src_824C24B0 *source;
} Link_824C24B0;

typedef struct State_824C24B0 State_824C24B0;
typedef struct {
    void *f0;
    void (*enter)(State_824C24B0 *, float);
    void (*update)(State_824C24B0 *, float);
} StateVt_824C24B0;
struct State_824C24B0 { StateVt_824C24B0 *vt; };

typedef struct SP_824C24B0 { State_824C24B0 *p; void *rc; } SP_824C24B0;

typedef struct Obj_824C24B0 Obj_824C24B0;
typedef struct {
    void *f0;
    void *f4;
    void (*change)(Obj_824C24B0 *, int, int);
    void (*update)(Obj_824C24B0 *, float);
} ObjVt_824C24B0;
struct Obj_824C24B0 {
    ObjVt_824C24B0 *vt;
    int pad4[4];
    int state;      /* 0x14 */
    int pending;    /* 0x18 */
    int pad1c[7];
    float time;     /* 0x38 */
    Link_824C24B0 *link;  /* 0x3c */
};

extern SP_824C24B0 *fn_824C0998(SP_824C24B0 *out, Obj_824C24B0 *self, int key);
extern void fn_822315A0(void *rc);

void fn_824C24B0(Obj_824C24B0 *self, float dt)
{
    int src = (int)self->link->source;
    int pending = self->pending;
    int next = src != 0 ? ((Src_824C24B0 *)src)->vt->getState((Src_824C24B0 *)src, pending) : pending;

    self->time = self->time + dt;
    if (next != self->state) {
        self->vt->change(self, self->state, next);
        self->pending = next;
        self->state = next;
        self->time = 0.0f;
    }
    if (self->state != 0) {
        SP_824C24B0 sp;
        int entering = self->pending == self->state || self->pending == 0;
        if (entering) {
            fn_824C0998(&sp, self, self->state);
            sp.p->vt->enter(sp.p, dt);
        } else {
            fn_824C0998(&sp, self, self->state);
            sp.p->vt->update(sp.p, dt);
        }
        if (sp.rc != 0)
            fn_822315A0(sp.rc);
    }
    self->vt->update(self, dt);
}
