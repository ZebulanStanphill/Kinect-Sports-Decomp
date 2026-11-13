typedef struct Vec2_8226A898 {
    float x, y;
} Vec2_8226A898;

typedef struct Obj_8226A898 {
    char pad0[0x24];
    Vec2_8226A898 dir;
    float speed;
    char pad30[8];
    Vec2_8226A898 pos;
    float d;
} Obj_8226A898;

static __forceinline Vec2_8226A898 Scale(const Vec2_8226A898 *v, float s)
{
    Vec2_8226A898 r;
    r.x = v->x * s;
    r.y = v->y * s;
    return r;
}

static __forceinline void Add(Vec2_8226A898 *out, const Vec2_8226A898 *a, const Vec2_8226A898 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
}
static __forceinline float Dot(const Vec2_8226A898 *a, const Vec2_8226A898 *b)
{
    return a->x * b->x + a->y * b->y;
}

void fn_8226A898(Obj_8226A898 *o, float dt)
{
    Vec2_8226A898 t = Scale(&o->dir, o->speed * dt);
    Add(&o->pos, &o->pos, &t);
    o->d = -Dot(&o->dir, &o->pos);
}
