typedef struct Fx_82396230 {
    char pad00[0x58];
    int active; /* 0x58 */
} Fx_82396230;

typedef struct A_82396230 {
    char pad00[0x14];
    int busy; /* 0x14 */
} A_82396230;

typedef struct B_82396230 {
    char pad00[0xc];
    int busy; /* 0x0c */
} B_82396230;

typedef struct Scene_82396230 {
    char pad00[0xc];
    Fx_82396230 *fx; /* 0x0c */
    char pad10[4];
    A_82396230 *a; /* 0x14 */
    B_82396230 *b; /* 0x18 */
} Scene_82396230;

typedef struct Obj_82396230 {
    char pad00[0x54];
    unsigned int mode; /* 0x54 */
    char pad58[0xd4 - 0x58];
    Scene_82396230 *scene; /* 0xd4 */
    char padd8[0x240 - 0xd8];
    int enabled; /* 0x240 */
} Obj_82396230;

extern void fn_8229F5A8(Fx_82396230 *fx);
extern void fn_8229F618(Fx_82396230 *fx);

static __forceinline int ShouldShow(Obj_82396230 *self)
{
    if (self->enabled != 0) {
        Scene_82396230 *scene = self->scene;
        int allowed = 1;
        unsigned int mode = self->mode;
        int a = scene->a->busy;
        int b = scene->b->busy;
        if (mode < 4 || mode == 7 || mode == 0x10)
            allowed = 0;
        if (a == 0 && b == 0 && allowed)
            return 1;
    }
    return 0;
}

/* Hides or shows the effect; both tests of `hidden` are in the source. */
static __forceinline void SetHidden(Scene_82396230 *scene, int hidden)
{
    if (hidden && scene->fx->active != 0)
        fn_8229F618(scene->fx);
    else if (!hidden && scene->fx->active == 0)
        fn_8229F5A8(scene->fx);
}

void fn_82396230(Obj_82396230 *self)
{
    SetHidden(self->scene, !ShouldShow(self));
}
