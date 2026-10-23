typedef struct {
    char pad0[0x178];
    int state;
    char pad17c[0x1e4 - 0x17c];
    void *f1e4;
    char pad1e8[0x240 - 0x1e8];
    int f240;
    char pad244[0x260 - 0x244];
    unsigned int flags;
    char pad264[0x2dc - 0x264];
    void *f2dc;
} Game;

typedef struct {
    char pad0[8];
    Game *game;
} Owner;

typedef struct {
    char pad0[8];
    char sub[0x28];
} Thing;

typedef struct {
    char pad0[8];
    Owner *owner;
    Thing *thing;
    int f10;
} Self;

extern void fn_822C16B8(void *p);
extern void fn_82396230(Game *g);
extern void fn_8239FF60(void *p, int n);
extern Thing *fn_823B3908(void *mem, void *arg);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);

static void Helper(Game *g)
{
    if (g->state != 0)
        fn_8239FF60(g->f2dc, 0xc);
}

void fn_823A47A8(Self *self)
{
    void *arg;
    void *mem;
    Thing *t;
    Thing *old;

    self->owner->game->flags |= 1;
    arg = self->owner->game->f1e4;
    mem = fn_8265C9E0(0x30);
    t = mem ? fn_823B3908(mem, arg) : 0;
    old = self->thing;
    if (t != old) {
        if (old != 0) {
            fn_822C16B8(old->sub);
            fn_8265CA20(old);
        }
        self->thing = t;
    }
    self->f10 = 0;
    if (self->owner->game->state == 1)
        Helper(self->owner->game);
    if (self->owner->game->state == 0) {
        Game *g = self->owner->game;
        g->f240 = 0;
        fn_82396230(g);
    }
}
