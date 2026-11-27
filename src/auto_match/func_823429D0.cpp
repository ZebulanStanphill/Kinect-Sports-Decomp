/* Discus pickup: plays the left or right pickup animation, sets the "hold_discus" pose on the
   holding hand, stores the hand's discus offset in the matching body entry and, when there is a
   target, reports the hand position. */

#include "xdk/vectorintrinsics.h"

typedef struct String_823429D0 {
    char data[0x1c];
} String_823429D0;

typedef struct Hand_823429D0 {
    char pad0[0x10];
    int *holder; /* 0x10 */
    int right;   /* 0x14 */
} Hand_823429D0;

typedef struct BodyEntry_823429D0 {
    unsigned int key; /* 0x00 */
    char pad4[0x1c];
    __vector4 offset; /* 0x20 */
    char pad30[0x10];
} BodyEntry_823429D0;

typedef struct Body_823429D0 {
    char pad0[0x10];
    BodyEntry_823429D0 entries[2]; /* 0x10 */
} Body_823429D0;

extern "C" void fn_8243D2D8(int obj, const char *name, int a, int b);
extern "C" void fn_8234C320(int a, void *slot);
extern "C" void *fn_82230110(String_823429D0 *s, const char *text);
extern "C" void fn_82230300(String_823429D0 *s, int a, int b);
extern "C" void fn_8234C258(int poses, int index, String_823429D0 *name);
extern "C" __vector4 *fn_82F512E8(__vector4 *out, int skeleton, int joint, int space);
extern "C" float fn_82F52348(int skeleton, int joint);
extern "C" void fn_822613B0(int sessionId, int playerId, int rightHandUsed, __vector4 handPos,
                            __vector4 playerPos);

#define W(p, o) (*(int *)((p) + (o)))

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline int IsLeft(int player)
{
    Hand_823429D0 *hand = (Hand_823429D0 *)W(player, 0x1a0);
    if (hand->holder != 0 && hand->right == 0) {
        return 1;
    }
    return 0;
}

static __forceinline void SetHandOffset(Body_823429D0 *body, unsigned int key, const __vector4 &offset)
{
    __vector4 value = offset;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (body->entries[i].key == key) {
            body->entries[i].offset = value;
            break;
        }
    }
}

extern "C" void fn_823429D0(int self)
{
    int player;
    int index;
    int slot;
    String_823429D0 name;
    int current;
    Hand_823429D0 *hand;
    int holder;
    unsigned int target;
    int joint;
    __vector4 handPos;

    player = W(W(self, 0xc), 0);
    fn_8243D2D8(W(W(W(player, 0x1a0), 0xc), 0x174) + 8,
                IsLeft(player) ? "sportsman_discus_pickup_left" : "sportsman_discus_pickup_right", 0, 0);
    index = !IsLeft(player);
    slot = W(player, 0x118) + (index + 0xe) * 0x2c;
    if (W(slot, 0x18) != 1) {
        fn_8234C320(1, (void *)slot);
    }
    fn_82230110(&name, "hold_discus");
    fn_8234C258(W(player, 0x118) + 0x150, index, &name);
    fn_82230300(&name, 1, 0);

    current = W(W(self, 0xc), 0);
    hand = (Hand_823429D0 *)W(current, 0x1a0);
    holder = (int)hand->holder;
    if (holder != 0) {
        SetHandOffset((Body_823429D0 *)W(current, 0x11c), *(unsigned int *)W(holder, 4),
                      hand->right == 0 ? VectorSet(0.04f, 0.0f, 0.0f, 0.0f)
                                       : VectorSet(-0.04f, 0.0f, 0.0f, 0.0f));
    }

    target = (unsigned int)W(W(W(self, 0xc), 0), 0x24);
    if (target != 0) {
        __vector4 playerPos;
        __vector4 tmp;

        joint = IsLeft(player) ? 0x10 : 0xb;
        handPos = *fn_82F512E8(&tmp, W(target, 0x20), joint, 2);
        fn_82F52348(W(target, 0x20), joint);
        playerPos = *(__vector4 *)(W(W(self, 0xc), 0) + 0x80);
        fn_822613B0(W(W(W(W(W(player, 0x1a0), 0xc), 0x174), 0x5c), 0x1ec), W(target, 0x2c), !IsLeft(player),
                    handPos, playerPos);
    }
}
