typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Node_82453910 {
    char pad0[0x50];
    __vector4 position;             /* 0x50 */
} Node_82453910;

typedef struct Anchor_82453910 {
    Node_82453910 *node;            /* 0x00 */
} Anchor_82453910;

typedef struct Body_82453910 {
    char pad0[0x2c];
    unsigned char simple;           /* 0x2c */
    char pad2d[0x23];
    __vector4 position;             /* 0x50 */
    char pad60[0x20];
    __vector4 center;               /* 0x80 */
} Body_82453910;

typedef struct Target_82453910 {
    char pad0[0x4];
    Anchor_82453910 *anchor;        /* 0x04 */
    char pad8[0xc];
    Body_82453910 *body;            /* 0x14 */
    char pad18[0x4];
    int fixedValue;                 /* 0x1c */
    int fixed;                      /* 0x20 */
} Target_82453910;

typedef struct Info_82453910 {
    char pad0[0x44];
    unsigned char side;             /* 0x44 */
} Info_82453910;

typedef struct Item_82453910 {
    char pad0[0x1a0];
    Info_82453910 *info;            /* 0x1a0 */
} Item_82453910;

typedef struct Player_82453910 Player_82453910;

typedef struct Vec_82453910 {
    __vector4 v;
} Vec_82453910;

typedef struct PlayerVtbl_82453910 {
    void *slots[19];
    Vec_82453910 (*GetPosition)(Player_82453910 *self);   /* 0x4c */
} PlayerVtbl_82453910;

typedef struct Key_82453910 {
    int key;
} Key_82453910;

struct Player_82453910 {
    PlayerVtbl_82453910 *vt;        /* 0x00 */
    char pad4[0x3c];
    Key_82453910 *key;              /* 0x40 */
    Target_82453910 *target;        /* 0x44 */
};

typedef struct Result_82453910 {
    int value;
} Result_82453910;

extern const __vector4 lbl_8329EA20;
extern float lbl_831C78F0;
extern Item_82453910 *fn_8242C1B8(int key);
extern Vec_82453910 fn_82435FA8(Player_82453910 *player, float offset, unsigned char side);

static __forceinline unsigned char GetSide(Item_82453910 *item)
{
    return item->info->side;
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

Result_82453910 *fn_82453910(Result_82453910 *out, Player_82453910 *player, unsigned char useBody)
{
    Target_82453910 *target = player->target;
    Body_82453910 *body;
    Node_82453910 *node;
    __vector4 position, zero, direction, dot, len;
    float distance;
    unsigned char ahead;

    if (target->fixed != 0) {
        out->value = target->fixedValue;
        return out;
    }
    node = target->anchor->node;
    if (node != 0)
        position = node->position;
    else
        position = __VMXGetReg(77);
    body = target->body;
    if (body->simple == 0)
        position = body->center;
    else if (useBody)
        position = body->position;
    zero = __VMXGetReg(77);
    position = __vsel(position, zero, lbl_8329EA20);
    len = Length3(__vsubfp(position, player->vt->GetPosition(player).v));
    distance = len.vector4_f32[0];
    direction = fn_82435FA8(player, 0.0f, GetSide(fn_8242C1B8(player->key->key))).v;
    dot = __vmsum3fp(__vsubfp(position, player->vt->GetPosition(player).v), direction);
    ahead = dot.vector4_f32[0] > 0.0f;
    if (!ahead)
        distance = 0.0f;
    out->value = (int)(distance / lbl_831C78F0 * 100.0f);
    return out;
}
