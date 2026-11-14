typedef struct Mgr_82344278 {
    char pad0[0x1c4];
    void **players;
    char pad1c8[0xc];
    int current;
} Mgr_82344278;

typedef struct Sub_82344278 {
    char pad0[0x40];
    Mgr_82344278 *mgr;
} Sub_82344278;

typedef struct Ctx_82344278 {
    char pad0[0x174];
    char *game;
} Ctx_82344278;

typedef struct Info_82344278 {
    char pad0[0xc];
    Ctx_82344278 *ctx;
} Info_82344278;

typedef struct Target_82344278 Target_82344278;
typedef struct TargetVt_82344278 {
    void *pad0[2];
    char *(*GetBase)(Target_82344278 *self);
} TargetVt_82344278;
struct Target_82344278 { TargetVt_82344278 *vt; };

typedef struct Obj_82344278 {
    char pad0[0x24];
    void *busy;
    char pad28[0x140];
    Target_82344278 *target;
    int idle;
    char pad170[0x30];
    Info_82344278 *info;
} Obj_82344278;

typedef struct State_82344278 {
    Obj_82344278 *obj;
    int kind;
} State_82344278;

typedef struct Self_82344278 {
    char pad0[0xc];
    State_82344278 *state;
    char pad10[4];
    char *data;
} Self_82344278;

extern void fn_82348D60(Self_82344278 *self);
extern void fn_82344720(Self_82344278 *self);
extern unsigned char fn_8288B760(Target_82344278 *target);
extern void fn_8233D980(char *a, char *b);

static __forceinline Obj_82344278 *GetObj(Self_82344278 *s)
{
    return s->state->obj;
}

static __forceinline void *GetCurrent(Ctx_82344278 *ctx)
{
    Sub_82344278 *s = (Sub_82344278 *)(ctx->game + 0x1c);
    if (s->mgr->current == -1)
        return 0;
    return s->mgr->players[s->mgr->current];
}

void fn_82344278(Self_82344278 *self)
{
    Obj_82344278 *obj;
    Info_82344278 *info;
    void *busy;
    int idle;

    fn_82348D60(self);
    info = GetObj(self)->info;
    busy = GetObj(self)->busy;
    if (GetCurrent(info->ctx) == 0)
        return;
    switch (self->state->kind) {
    case 2:
        if (busy == 0)
            fn_82344720(self);
        break;
    case 9:
        obj = self->state->obj;
        if (obj->target != 0)
            idle = fn_8288B760(obj->target);
        else
            idle = obj->idle;
        if (idle == 0) {
            Target_82344278 *target = self->state->obj->target;
            if (target != 0)
                fn_8233D980(target->vt->GetBase(target) + 0x534, self->data + 0x4c);
        }
        break;
    }
}
