typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Body_8231EE70 {
    char pad0[0xbd0];
    __vector4 velocity;          /* 0xbd0 */
    char padbe0[0x50];
    __vector4 angular;           /* 0xc30 */
} Body_8231EE70;

typedef struct World_8231EE70 { char pad0[0x11c]; void *scene; } World_8231EE70;

typedef struct Actor_8231EE70 {
    char pad0[0x42c];
    int state;                   /* 0x42c */
    char pad430[0x570];
    World_8231EE70 *world;       /* 0x9a0 */
    char pad9a4[0x46c];
    Body_8231EE70 *body;         /* 0xe10 */
} Actor_8231EE70;

typedef struct Self_8231EE70 { char pad0[0x10]; Actor_8231EE70 *actor; } Self_8231EE70;

extern void fn_8231EF10(Self_8231EE70 *self, float dt);
extern int fn_8231F518(Self_8231EE70 *self, float dt);
extern int fn_822B6FF0(World_8231EE70 *world, Body_8231EE70 *body);
extern void fn_822B9390(void *scene, Body_8231EE70 *body, int flags);

void fn_8231EE70(Self_8231EE70 *self, float dt)
{
    fn_8231EF10(self, dt);
    if (fn_8231F518(self, dt) != 0) {
        Actor_8231EE70 *actor = self->actor;
        if (actor->state != 3) {
            World_8231EE70 *world = actor->world;
            Body_8231EE70 *body = actor->body;
            if (world != 0 && fn_822B6FF0(world, body) == 0) {
                __vector4 zero;
                fn_822B9390(world->scene, body, 0x21);
                zero = __VMXGetReg(77);
                body = actor->body;
                body->velocity = zero;
                body->angular = __VMXGetReg(77);
            }
        }
        actor->state = 3;
    }
}
