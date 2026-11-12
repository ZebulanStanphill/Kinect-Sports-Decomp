// Resets the object: target position (+0x40, inside the sub-object at +0x30) from the tuning
// floats of lbl_831C7068, owner id from the global's current player (+0xec), active flag (+0x100),
// updates the sub-object against lbl_821962C0 (fn_825622A8), and clears the tracked flag (+0x1b4)
// when the tracked entry (+0x1bc) is no longer in the manager's list.
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __lvlx(const void *base, int offset);
extern "C" __vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Tuning_82463AA8 {
    float pad0;
    float x;                // 0x04
    float y;                // 0x08
    float z;                // 0x0c
} Tuning_82463AA8;

typedef struct Player_82463AA8 {
    char pad0[4];
    int id;                 // 0x04
} Player_82463AA8;

typedef struct Globals_82463AA8 {
    char pad0[0xec];
    Player_82463AA8 *player; // 0xec
} Globals_82463AA8;

typedef struct Entry_82463AA8 {
    char pad0[0x1c];
    int value;              // 0x1c
    char pad20[0xc];
    unsigned int key;       // 0x2c
    char pad30[0x38];
} Entry_82463AA8;

typedef struct List_82463AA8 {
    char pad0[0x18];
    std::vector<Entry_82463AA8> entries; // 0x18
} List_82463AA8;

typedef struct Manager_82463AA8 {
    List_82463AA8 *list;    // 0x00
} Manager_82463AA8;

typedef struct Motion_82463AA8 {
    __vector4 position;     // 0x00
    __vector4 target;       // 0x10
} Motion_82463AA8;

typedef struct Obj_82463AA8 {
    char pad0[0x28];
    int ownerId;            // 0x28
    char pad2c[4];
    Motion_82463AA8 motion; // 0x30
    char pad50[0xb0];
    int active;             // 0x100
    char pad104[0xb0];
    int tracking;           // 0x1b4
    char pad1b8[4];
    unsigned int trackedKey; // 0x1bc
} Obj_82463AA8;

extern "C" Tuning_82463AA8 lbl_831C7068;
extern "C" Globals_82463AA8 lbl_832960A0;
extern "C" const __vector4 lbl_821962C0;

extern "C" void fn_825622A8(Motion_82463AA8 *motion, const __vector4 *reference);
extern "C" Manager_82463AA8 *fn_824BC7E8(void);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 0x4, 3);
    vz = __vrlimi(vz, vw, 0x4, 3);
    return __vrlimi(vx, vz, 0x3, 2);
}

static __forceinline int FindValue(const List_82463AA8 *list, unsigned int key)
{
    for (std::vector<Entry_82463AA8>::const_iterator it = list->entries.begin(); it != list->entries.end(); ++it) {
        if (it->key == key)
            return it->value;
    }
    return 0;
}

extern "C" void fn_82463AA8(Obj_82463AA8 *self)
{
    Motion_82463AA8 *motion;
    __vector4 target;

    target = VectorSet(lbl_831C7068.x, lbl_831C7068.y, lbl_831C7068.z, 0.0f);
    self->ownerId = lbl_832960A0.player ? lbl_832960A0.player->id : 0;
    motion = &self->motion;
    self->active = 1;
    motion->target = target;
    fn_825622A8(motion, &lbl_821962C0);
    if (self->tracking != 0) {
        Manager_82463AA8 *manager = fn_824BC7E8();
        if (FindValue(manager->list, self->trackedKey) == 0)
            self->tracking = 0;
    }
}
