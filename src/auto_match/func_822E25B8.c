typedef struct Actor_822E25B8 Actor_822E25B8;

typedef struct ActorVtable_822E25B8 {
    void *slots[8];
    void (*Finish)(Actor_822E25B8 *self); /* 0x20 */
} ActorVtable_822E25B8;

typedef struct World_822E25B8 {
    unsigned char pad0[0x168];
    unsigned int handle; /* 0x168 */
    int enabled;         /* 0x16c */
    unsigned char pad170[0x2e0 - 0x170];
    int level; /* 0x2e0 */
} World_822E25B8;

typedef struct Target_822E25B8 {
    unsigned char pad0[0x84];
    char *body; /* 0x84 */
} Target_822E25B8;

struct Actor_822E25B8 {
    ActorVtable_822E25B8 *vtable; /* 0x00 */
    unsigned char pad4[0xc];
    Target_822E25B8 *target; /* 0x10 */
    World_822E25B8 *world;   /* 0x14 */
    unsigned char pad18[0x2c - 0x18];
    float timer; /* 0x2c */
    unsigned char pad30[4];
    int state; /* 0x34 */
    unsigned char pad38[4];
    float elapsed; /* 0x3c */
};

extern unsigned char fn_8288B760(unsigned int handle);
extern int fn_823830A0(char *body);
extern void fn_822E26D0(Actor_822E25B8 *self);
extern void fn_822E27C8(Actor_822E25B8 *self);
extern void fn_822E28C0(Actor_822E25B8 *self);
extern const float lbl_8218EC10;

void fn_822E25B8(Actor_822E25B8 *self, float dt)
{
    int enabled;

    if (self->world->handle != 0) {
        enabled = fn_8288B760(self->world->handle);
    } else {
        enabled = self->world->enabled;
    }
    if (enabled == 0) {
        return;
    }
    if (self->target->body != 0 && fn_823830A0(self->target->body) == 0 && self->state != 1) {
        return;
    }
    self->elapsed = dt + self->elapsed;
    switch ((unsigned int)self->state) {
    case 0:
        if (self->world->level < 0x18) {
            self->vtable->Finish(self);
        }
        break;
    case 1:
        fn_822E26D0(self);
        break;
    case 2:
        self->timer = self->timer - dt;
        if (self->timer < lbl_8218EC10) {
            fn_822E27C8(self);
        }
        break;
    case 5:
        fn_822E28C0(self);
        break;
    }
}
