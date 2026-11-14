typedef struct Body_82DAB8F8 {
    char pad0[8];
    void *world;
    char pad0c[0xe8 - 0xc];
    unsigned char motionType;
} Body_82DAB8F8;

typedef struct Pair_82DAB8F8 {
    char pad0[0xc];
    Body_82DAB8F8 *bodyA;
    Body_82DAB8F8 *bodyB;
    char pad14[0x27 - 0x14];
    unsigned char flags;
} Pair_82DAB8F8;

extern void fn_82DB5270(void *world, Pair_82DAB8F8 *pair, float delta);

static __forceinline char IsFixedOrKeyframed(Body_82DAB8F8 *body)
{
    char r;
    if (body->motionType == 5 || body->motionType == 4) r = 1; else r = 0;
    return r;
}

void fn_82DAB8F8(void *self, Pair_82DAB8F8 *pair, float delta)
{
    Body_82DAB8F8 *a = pair->bodyA;
    void *world = a->world;
    if ((pair->flags & 8) != 0) return;
    {
        Body_82DAB8F8 *b = pair->bodyB;
        if (IsFixedOrKeyframed(a) && IsFixedOrKeyframed(b)) return;
    }
    fn_82DB5270(world, pair, delta);
}
