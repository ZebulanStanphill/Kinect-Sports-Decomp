// Spawns an effect (fn_82594298 on the emitter at +0x48) at the item's position (fn_825934E8,
// w cleared) or, without a positioned item, at the actor's position (+0x50), with the item's id
// (+0x30) or the actor's (+0x1c4). Skipped while the emitter is busy (+0x4c) and the id is -1,
// or when the actor's state (+0x4c) is hidden (+0x5c) or still fading (+0x6c > 0).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_826127C8 {
    float x, y, z;
} Float3_826127C8;

typedef struct Item_826127C8 {
    unsigned int flags;     // 0x00
    char pad04[0x2c];
    int id;                 // 0x30
} Item_826127C8;

typedef struct State_826127C8 {
    char pad00[0x5c];
    int hidden;             // 0x5c
    char pad60[0xc];
    float fade;             // 0x6c
} State_826127C8;

typedef struct Actor_826127C8 {
    char pad00[0x4c];
    State_826127C8 *state;  // 0x4c
    __vector4 position;     // 0x50
    char pad60[0x164];
    int id;                 // 0x1c4
} Actor_826127C8;

typedef struct Self_826127C8 {
    char pad00[0x48];
    char emitter[4];        // 0x48
    int busy;               // 0x4c
} Self_826127C8;

extern const float lbl_821CA45C[2];

Float3_826127C8 *fn_825934E8(Item_826127C8 *item);
void fn_82594298(void *emitter, const __vector4 *position, float scale, int id);

static __forceinline __vector4 LoadFloat3(const Float3_826127C8 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline int ItemId(const Item_826127C8 *item)
{
    if (item->flags & 0x80)
        return item->id;
    return -1;
}

void fn_826127C8(Self_826127C8 *self, Item_826127C8 *item, Actor_826127C8 *actor)
{
    __vector4 position;
    __vector4 v, zero, mask;
    int id;

    if (item != 0 && (item->flags & 1)) {
        v = LoadFloat3(fn_825934E8(item));
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        position = __vsel(v, zero, mask);
    } else {
        position = actor->position;
    }
    if (item != 0 && (item->flags & 0x80))
        id = (item->flags & 0x80) > 0 ? item->id : -1;
    else
        id = actor->id;
    if (self->busy != 0 && id == -1)
        return;
    if (actor->state->hidden != 0 || actor->state->fade > 0.0f)
        return;
    fn_82594298(self->emitter, &position, lbl_821CA45C[1], id);
}
