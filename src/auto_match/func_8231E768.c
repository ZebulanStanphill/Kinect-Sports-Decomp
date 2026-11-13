typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct String_8231E768 {
    char data[0x1c];
} String_8231E768;

typedef struct Anim_8231E768 {
    char pad0[0xc0];
    void *idleSet;
} Anim_8231E768;

typedef __declspec(align(16)) struct Owner_8231E768 {
    char pad0[0x80];
    __vector4 pos;              /* 0x80 */
    __vector4 dir;              /* 0x90 */
    char padA0[0x114 - 0xa0];
    Anim_8231E768 *anim;        /* 0x114 */
} Owner_8231E768;

typedef struct State_8231E768 {
    char pad0[0x58];
    unsigned int mode;          /* 0x58 */
} State_8231E768;

typedef struct Obj_8231E768 {
    char pad0[0xc];
    Owner_8231E768 *owner;      /* 0x0c */
    State_8231E768 *state;      /* 0x10 */
    int pad14;
    int a;                      /* 0x18 */
    int b;                      /* 0x1c */
    __vector4 pos;              /* 0x20 */
    __vector4 dir;              /* 0x30 */
} Obj_8231E768;

extern void fn_82230110(String_8231E768 *s, const char *text);
extern void fn_82230300(String_8231E768 *s, int a, int b);
extern void fn_822FB198(void *set, String_8231E768 *name);

void fn_8231E768(Obj_8231E768 *self)
{
    Owner_8231E768 *owner = self->owner;
    State_8231E768 *state = self->state;
    String_8231E768 name;

    self->a = 3;
    self->b = 8;
    self->pos = owner->pos;
    self->dir = owner->dir;
    if (state->mode == 0x15 || state->mode == 3) {
        fn_82230110(&name, "idleset_standready");
        fn_822FB198(self->owner->anim->idleSet, &name);
        fn_82230300(&name, 1, 0);
    }
}
