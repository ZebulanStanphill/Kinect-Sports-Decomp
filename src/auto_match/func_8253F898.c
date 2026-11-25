typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Body_8253F898 {
    char pad0[0x8];
    int shape; /* 0x008 */
    char padc[0x88];
    float friction; /* 0x094 */
    char pad98[0xc8];
    char transform[1]; /* 0x160 */
} Body_8253F898;

typedef struct Target_8253F898 {
    char pad0[0x134];
    int layer; /* 0x134 */
} Target_8253F898;

typedef struct Attachment_8253F898 {
    void *part;              /* 0x0 */
    Target_8253F898 *target; /* 0x4 */
} Attachment_8253F898;

typedef struct Collision_8253F898 {
    char pad0[0x28];
    Target_8253F898 *main; /* 0x028 */
    char pad2c[0xdc];
    unsigned int state; /* 0x108 */
    char pad10c[0x18];
    Attachment_8253F898 *first; /* 0x124 */
    Attachment_8253F898 *last;  /* 0x128 */
    char pad12c[0xc];
    unsigned int flags; /* 0x138 */
    int layer;          /* 0x13C */
} Collision_8253F898;

typedef struct Actor_8253F898 Actor_8253F898;

typedef struct Solver_8253F898 {
    char pad0[0x5c];
    int active; /* 0x5C */
} Solver_8253F898;

typedef struct Link_8253F898 {
    char pad0[0x80];
    Actor_8253F898 *actor; /* 0x080 */
    char pad84[0xa0];
    unsigned char wake; /* 0x124 */
} Link_8253F898;

struct Actor_8253F898 {
    char pad0[0x20];
    Link_8253F898 *link; /* 0x020 */
    char pad24[0xac];
    __vector4 position; /* 0x0D0 */
    char pade0[0x230];
    Solver_8253F898 solver; /* 0x310 */
    char pad370[0x10];
    Collision_8253F898 collision; /* 0x380 */
    char pad4c0[0x20];
    int material; /* 0x4E0 */
    char pad4e4[0x2dc];
    Body_8253F898 *body; /* 0x7C0 */
    char pad7c4[0x24];
    float friction; /* 0x7E8 */
    char pad7ec[0x54];
    float frictionOverride; /* 0x840 */
    char pad844[0xc];
    __vector4 velocity; /* 0x850 */
    char pad860[0x10];
    __vector4 extraVelocity; /* 0x870 */
    int addExtra;            /* 0x880 */
    int velocityDirty;       /* 0x884 */
};

extern void fn_82D8B930(Body_8253F898 *body, const __vector4 *velocity);
extern void fn_8253E598(Actor_8253F898 *self, void *arg);
extern void fn_825A7290(Actor_8253F898 *self);
extern void fn_82571BB8(Actor_8253F898 *self);
extern void fn_82571780(Collision_8253F898 *collision, void *part, Target_8253F898 *target,
                        unsigned int flags);
extern void fn_825A81F0(Actor_8253F898 *self);
extern void fn_825A5660(Solver_8253F898 *solver, int material, Body_8253F898 *body, Actor_8253F898 *self,
                        void *transform);
extern void fn_825A6940(Actor_8253F898 *self);
extern void fn_825A1FF8(Actor_8253F898 *self);
extern Actor_8253F898 *fn_82527EF0(Actor_8253F898 *self);
extern void fn_82D89BD8(Body_8253F898 *body);
extern void fn_8253FB70(Actor_8253F898 *self);

void fn_8253F898(Actor_8253F898 *self, void *arg)
{
    Body_8253F898 *body = self->body;
    Link_8253F898 *link;
    __vector4 sum;
    __vector4 velocity;
    Solver_8253F898 *solver;
    if (body != 0) {
        if (self->frictionOverride != 3.402823466e+38f) {
            body->friction = self->frictionOverride;
        } else if (body->friction != self->friction) {
            body->friction = self->friction;
        }
        if (self->addExtra != 0) {
            if (self->velocityDirty != 0) {
                sum = __vaddfp(self->velocity, self->extraVelocity);
                fn_82D8B930(body, &sum);
                self->velocityDirty = 0;
            }
        } else if (self->velocityDirty != 0) {
            velocity = self->velocity;
            fn_82D8B930(body, &velocity);
            self->velocityDirty = 0;
        }
    }
    fn_8253E598(self, arg);
    fn_825A7290(self);
    fn_82571BB8(self);
    {
        Collision_8253F898 *collision = &self->collision;
        unsigned int flags = collision->flags;
        if ((flags & 1) != 0 && (flags & 4) == 0) {
            int changed = 0;
            Attachment_8253F898 *it;
            Attachment_8253F898 *last;
            if ((int)self->body != 0 && self->body->shape != 0) {
                fn_82571780(collision, self->body, 0, flags);
                collision->main->layer = collision->layer;
                if ((collision->state & 0x40) != 0) {
                    changed = 1;
                }
            }
            it = collision->first;
            last = collision->last;
            for (; it < last; it++) {
                fn_82571780(collision, it->part, it->target, collision->flags);
                it->target->layer = collision->layer;
                if ((collision->state & 0x40) != 0) {
                    changed = 1;
                }
            }
            if (changed) {
                collision->state |= 0x40;
            } else {
                collision->state &= ~0x40;
            }
        }
    }
    fn_825A81F0(self);
    solver = &self->solver;
    if (solver->active != 0) {
        fn_825A5660(solver, self->material, self->body, self, self->body->transform);
    }
    fn_825A6940(self);
    fn_825A1FF8(self);
    if (fn_82527EF0(self) != 0) {
        self->position = fn_82527EF0(self)->position;
    }
    link = self->link;
    if (link != 0 && link->actor != 0 && link->actor->body != 0 && link->wake) {
        fn_82D89BD8(link->actor->body);
        link->wake = 0;
    }
    fn_8253FB70(self);
}
