/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Vec3_82310C68 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vec3_82310C68;

typedef struct Owner_82310C68 {
    char pad000[0x3e0];
    __vector4 target; /* 0x3e0 */
    char pad3F0[0x9c];
    int mode; /* 0x48c */
} Owner_82310C68;

/* One of the three blocks that fn_82310D68 resets. */
typedef struct Slot_82310C68 {
    char data[0xb0];
} Slot_82310C68;

typedef struct State_82310C68 {
    __vector4 position;     /* 0x000 */
    Vec3_82310C68 velocity; /* 0x010 */
    __vector4 direction;    /* 0x020 */
    Vec3_82310C68 offset;   /* 0x030 */
    float weights[8];       /* 0x03c */
    char pad05C[4];         /* 0x05c */
    Slot_82310C68 slots[3]; /* 0x060 */
    __vector4 target;       /* 0x270 */
    char pad280[0x10];      /* 0x280 */
    float blend[4];         /* 0x290 */
} State_82310C68;

extern void fn_82310D68(Owner_82310C68 *owner, Slot_82310C68 *out, int id, int mode);

static __forceinline Vec3_82310C68 MakeVec3(float x, float y, float z)
{
    Vec3_82310C68 v;

    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void fn_82310C68(Owner_82310C68 *owner, State_82310C68 *state, __vector4 target)
{
    state->position = __VMXGetReg(77);
    state->velocity = MakeVec3(0.0f, 0.0f, 0.0f);
    state->direction = __VMXGetReg(77);
    state->offset = MakeVec3(0.0f, 0.0f, 0.0f);
    state->weights[0] = 0.0f;
    state->weights[1] = 0.0f;
    state->weights[2] = 0.0f;
    state->weights[3] = 0.0f;
    state->weights[4] = 0.0f;
    state->weights[5] = 0.0f;
    state->weights[6] = 0.0f;
    state->weights[7] = 0.0f;
    owner->target = target;
    state->blend[0] = 0.0f;
    state->blend[1] = 0.0f;
    state->blend[2] = 0.0f;
    state->blend[3] = 0.0f;
    state->target = target;
    fn_82310D68(owner, &state->slots[0], 0, owner->mode == 0);
    fn_82310D68(owner, &state->slots[1], 1, owner->mode == 0);
    fn_82310D68(owner, &state->slots[2], 2, owner->mode);
}
