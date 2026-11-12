// Sets the "facing away" state when the player is in one of the run/turn modes and the
// direction at owner+0xbd0 points behind the object's forward vector; otherwise clears the
// state (calling fn_8236BCD8 on the player when its current action has a handler).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Target_82309768 {
    char pad000[0xbd0];
    __vector4 direction;           // 0xbd0
} Target_82309768;

typedef struct Action_82309768 {
    char pad00[0x30];
    int handler;                   // 0x30
} Action_82309768;

typedef struct Player_82309768 {
    char pad000[0x41c];
    int mode;                      // 0x41c
    char pad420[0x4b0 - 0x420];
    Action_82309768 *action;       // 0x4b0
    char pad4b4[0xe10 - 0x4b4];
    Target_82309768 *target;       // 0xe10
} Player_82309768;

typedef struct Body_82309768 {
    char pad000[0x120];
    int locked;                    // 0x120
} Body_82309768;

typedef struct Self_82309768 {
    char pad00[0xc];
    Body_82309768 *body;           // 0x0c
    Player_82309768 *player;       // 0x10
    char pad14[0x60 - 0x14];
    unsigned char notify;          // 0x60
    char pad61[0x70 - 0x61];
    int notified;                  // 0x70
    char pad74[0xd0 - 0x74];
    int facingAway;                // 0xd0
} Self_82309768;

extern __vector4 *fn_822B69A0(__vector4 *out, const Body_82309768 *obj);
extern void fn_8236BCD8(void *p);

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline int IsBehind(Self_82309768 *self, __vector4 direction)
{
    __vector4 n, forward, dot;

    n = Normalize3(direction);
    dot = __vmsum3fp(n, *fn_822B69A0(&forward, self->body));
    return dot.vector4_f32[0] < 0.0f;
}

void fn_82309768(Self_82309768 *self)
{
    __vector4 direction = self->player->target->direction;
    Player_82309768 *player;
    int mode;
    int behind;

    behind = self->body->locked == 0 && IsBehind(self, direction);
    player = self->player;
    mode = player->mode;
    if ((mode == 2 || mode == 8 || mode == 9 || mode == 6 || mode == 7) && behind != 0) {
        if (self->notify != 0) {
            self->notified = 1;
        }
        self->facingAway = 1;
    } else if (self->facingAway != 0) {
        if ((player->action != 0 ? player->action->handler : 0) != 0) {
            fn_8236BCD8(player);
        }
        self->facingAway = 0;
    }
}
