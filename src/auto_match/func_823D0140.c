typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Entry_823D0140 {
    void **items; /* 0x00 */
    char pad4[0xc];
    unsigned int current; /* 0x10 */
} Entry_823D0140;

typedef struct Table_823D0140 {
    Entry_823D0140 **entries;
} Table_823D0140;

typedef struct Anim_823D0140 {
    char pad0[0x20];
    void *player; /* 0x20 */
} Anim_823D0140;

typedef struct Value_823D0140 {
    char pad0[0x114];
    Anim_823D0140 *anim; /* 0x114 */
} Value_823D0140;

typedef struct Camera_823D0140 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0xbd0 - 0x60];
    __vector4 target; /* 0xbd0 */
    char padbe0[0xc30 - 0xbe0];
    __vector4 velocity; /* 0xc30 */
} Camera_823D0140;

typedef struct Self_823D0140 Self_823D0140;

typedef struct SelfVtbl_823D0140 {
    void *slots[50];
    int (*isActive)(Self_823D0140 *self); /* 0xc8 */
} SelfVtbl_823D0140;

struct Self_823D0140 {
    SelfVtbl_823D0140 *vt; /* 0x00 */
    int pad4;
    Table_823D0140 *table; /* 0x08 */
    char padc[0x4b0 - 0xc];
    void *hud; /* 0x4b0 */
    char pad4b4[0x4c0 - 0x4b4];
    void *replay; /* 0x4c0 */
    char pad4c4[0xe10 - 0x4c4];
    Camera_823D0140 *camera; /* 0xe10 */
};

extern void fn_8236C428(Self_823D0140 *self);
extern void fn_824FE498(Camera_823D0140 *camera, __vector4 position);
extern Value_823D0140 *fn_822ABA88(void *obj, int key);
extern void *fn_822C5180(int kind, int variant);
extern void fn_822C72E0(void *player, void *animation);
extern void fn_82369668(Self_823D0140 *self, int index, int key);
extern void fn_8236A6E8(Self_823D0140 *self, int mode, __vector4 position, __vector4 target);
extern void fn_823E69D0(Self_823D0140 *self, void *params);
extern void fn_823DBB58(void *hud);

void fn_823D0140(Self_823D0140 *self, int key, int index, int kind, int variant, void *params,
                 __vector4 position, __vector4 target)
{
    Entry_823D0140 *entry;
    void *player;
    Camera_823D0140 *camera;

    fn_8236C428(self);
    fn_824FE498(self->camera, position);
    camera = self->camera;
    camera->velocity = __VMXGetReg(77);
    camera->target = target;
    entry = self->table->entries[index];
    player = fn_822ABA88(entry->items[entry->current], key)->anim->player;
    fn_822C72E0(player, fn_822C5180(kind, variant));
    fn_82369668(self, index, key);
    fn_8236A6E8(self, 4, self->camera->position, self->camera->target);
    if (self->replay == 0) {
        fn_823E69D0(self, params);
    }
    if (self->vt->isActive(self) == 0) {
        fn_823DBB58(self->hud);
    }
}
