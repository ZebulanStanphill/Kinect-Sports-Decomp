typedef struct Clock_8248BCC0 Clock_8248BCC0;
typedef struct ClockVt_8248BCC0 {
    void *pad0[2];
    void (*update)(Clock_8248BCC0 *self, float dt);
} ClockVt_8248BCC0;
struct Clock_8248BCC0 {
    ClockVt_8248BCC0 *vt;
};

typedef struct Item_8248BCC0 {
    char data[0x68];
} Item_8248BCC0;

typedef struct Obj_8248BCC0 {
    int pad0;
    int f4;
    int f8;
    Clock_8248BCC0 *clock;
    int pad10;
    Item_8248BCC0 *main;
    Item_8248BCC0 *begin;
    Item_8248BCC0 *end;
} Obj_8248BCC0;

extern int fn_8248DBA8(Item_8248BCC0 *item, float dt, int arg);

static __forceinline int IsBusy(Obj_8248BCC0 *o)
{
    return o->f4 == 0 || o->f8 != 0;
}

int fn_8248BCC0(Obj_8248BCC0 *self, float dt, int arg)
{
    Item_8248BCC0 *it;
    int ok;

    if (IsBusy(self))
        return 0;
    self->clock->vt->update(self->clock, dt);
    fn_8248DBA8(self->main, dt, arg);
    ok = 1;
    for (it = self->begin; it != self->end; it++) {
        if (!fn_8248DBA8(it, dt, arg))
            ok = 0;
    }
    return ok;
}
