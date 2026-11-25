typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Vec_82338CF8 {
    __vector4 v;
} Vec_82338CF8;

typedef struct Body_82338CF8 {
    char pad00[0x20];
    void *node; /* 0x20 */
    char pad24[0x30 - 0x24];
    int id; /* 0x30 */
} Body_82338CF8;

typedef struct Slot_82338CF8 {
    char pad00[0x40];
    struct Rig_82338CF8 *rig; /* 0x40 */
} Slot_82338CF8;

typedef struct Rig_82338CF8 {
    char pad000[0x11c];
    float limit; /* 0x11c */
    char pad120[0x1c4 - 0x120];
    Slot_82338CF8 **slots; /* 0x1c4 */
    char pad1c8[0x1d4 - 0x1c8];
    int current; /* 0x1d4 */
    char pad1d8[0x2b4 - 0x1d8];
    int locked; /* 0x2b4 */
} Rig_82338CF8;

typedef struct Team_82338CF8 {
    char pad00[0x1c];
    Slot_82338CF8 slot; /* 0x1c */
} Team_82338CF8;

typedef struct Stage_82338CF8 {
    char pad00[0xc];
    int busy; /* 0x0c */
} Stage_82338CF8;

typedef struct Scene_82338CF8 {
    char pad00[0x18];
    Stage_82338CF8 *stage; /* 0x18 */
} Scene_82338CF8;

typedef struct Player_82338CF8 {
    char pad000[0xd4];
    Scene_82338CF8 *scene; /* 0x0d4 */
    char pad0d8[0x174 - 0xd8];
    Team_82338CF8 *team; /* 0x174 */
} Player_82338CF8;

typedef struct Game_82338CF8 {
    char pad000[0xc];
    Player_82338CF8 *player; /* 0x00c */
    char pad010[0x4c - 0x10];
    float limit; /* 0x04c */
    char pad050[0x188 - 0x50];
    int active; /* 0x188 */
} Game_82338CF8;

typedef struct Self_82338CF8 {
    char pad000[0x24];
    Body_82338CF8 *body; /* 0x024 */
    char pad028[0x168 - 0x28];
    void *tracker; /* 0x168 */
    int tracking;  /* 0x16c */
    char pad170[0x1a0 - 0x170];
    Game_82338CF8 *game; /* 0x1a0 */
} Self_82338CF8;

typedef struct Manager_82338CF8 {
    char pad00[0xec];
    void *table; /* 0xec */
} Manager_82338CF8;

typedef struct Info_82338CF8 {
    char pad00[0x14];
    float scale; /* 0x14 */
    char pad18[8];
} Info_82338CF8;

extern float lbl_831C78F0[0x80];

int fn_8242E560(Player_82338CF8 *player);
unsigned char fn_8288B760(void *tracker);
int fn_824CCFC8(Body_82338CF8 *body);
void *fn_82F50D98(void *node);
__vector4 *fn_82F4EF20(__vector4 *out, void *node, unsigned char transform, unsigned char scaled);
void fn_82F50E10(Vec_82338CF8 *out, void *node);
Manager_82338CF8 *fn_8249ABC0(void);
void fn_8249CF88(__vector4 *out, void *table, int id);
int fn_82F52520(void *node, Info_82338CF8 *info);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

static __forceinline float Min(float a, float b)
{
    return b - a >= 0.0f ? a : b;
}

__vector4 *fn_82338CF8(__vector4 *result, Self_82338CF8 *self)
{
    __vector4 velocity = __VMXGetReg(77);
    Body_82338CF8 *body;
    __vector4 position;
    Vec_82338CF8 axis;
    __vector4 offset;
    __vector4 delta;
    Slot_82338CF8 *slot;
    Slot_82338CF8 *item;
    Info_82338CF8 info;
    float limit;
    float scale;
    int tracking;
    int id;
    Manager_82338CF8 *manager;

    if (self->game->active == 0)
        goto done;
    if (fn_8242E560(self->game->player) != 0)
        goto done;
    if (self->tracker != 0)
        tracking = fn_8288B760(self->tracker);
    else
        tracking = self->tracking;
    if (tracking == 0)
        goto done;
    if (self->game->player->scene->stage->busy != 0)
        goto done;
    body = self->body;
    if (body == 0)
        goto done;
    if (fn_824CCFC8(body) == 0)
        goto done;
    fn_82F4EF20(&position, fn_82F50D98(body->node), 1, 0);
    fn_82F50E10(&axis, body->node);
    id = body->id;
    manager = fn_8249ABC0();
    fn_8249CF88(&offset, manager->table, id);
    delta = __VMXGetReg(77);
    velocity = __vmulfp(offset, axis.v);
    if (fn_824CCFC8(body) != 0)
        delta = __vmulfp(__vsubfp(position, velocity), axis.v);
    slot = &self->game->player->team->slot;
    if (slot->rig->current != -1) {
        item = slot->rig->slots[slot->rig->current];
        if (item != 0) {
            limit = self->game->limit;
            if (self->game->player->team->slot.rig->locked == 0)
                limit = item->rig->limit;
            delta.vector4_f32[0] = Min(limit, Max(delta.vector4_f32[0], -limit));
        }
    }
    if (fn_82F52520(self->body->node, &info) >= 0)
        scale = info.scale;
    else
        scale = lbl_831C78F0[0];
    velocity = __vmulfp(delta, Replicate(scale));
done:
    *result = velocity;
    return result;
}
