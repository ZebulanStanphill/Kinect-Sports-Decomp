typedef struct Env_82478D90 {
    char reserved000[0x358];
    void *task; /* 0x358 */
} Env_82478D90;

typedef struct World_82478D90 {
    char reserved000[0x844];
    Env_82478D90 *env; /* 0x844 */
} World_82478D90;

typedef struct Model_82478D90 {
    char reserved000[0x7c];
    unsigned char *shadow; /* 0x7c */
    char reserved080[4];
    unsigned char *body; /* 0x84 */
} Model_82478D90;

typedef struct Actor_82478D90 {
    char reserved000[0x14];
    Model_82478D90 *model; /* 0x14 */
    char reserved018[0xde];
    unsigned char active; /* 0xf6 */
    char reserved0f7[0x35];
    unsigned char resetPending; /* 0x12c */
    char reserved12d[3];
    float timer; /* 0x130 */
    int counter; /* 0x134 */
    char reserved138[0x24];
    World_82478D90 *world; /* 0x15c */
    void *effect;          /* 0x160 */
    char reserved164[0x1c];
    void *handler; /* 0x180 */
    int state;     /* 0x184 */
} Actor_82478D90;

struct Obj_82478D90;

typedef struct ObjVt_82478D90 {
    void *slot00[8];
    int (*getMode)(struct Obj_82478D90 *self); /* 0x20 */
} ObjVt_82478D90;

typedef struct Obj_82478D90 {
    ObjVt_82478D90 *vt;
    char reserved004[0xc];
    Actor_82478D90 actor; /* 0x10 */
    char reserved198[0x24];
    void *sound; /* 0x1bc */
} Obj_82478D90;

extern void fn_8255B0D8(Env_82478D90 *env);
extern void fn_82476E30(Actor_82478D90 *actor, int a, int b);
extern void fn_82529320(void *effect, int flags);
extern void fn_822848B8(void *sound);
extern char lbl_831C6928[];

void fn_82478D90(Obj_82478D90 *self)
{
    int isFinished = self->vt->getMode(self) == 5;
    Actor_82478D90 *actor = &self->actor;
    Model_82478D90 *model;
    unsigned char *body;
    unsigned char *shadow;

    if (self->actor.world->env->task != 0) {
        fn_8255B0D8(self->actor.world->env);
    }
    actor->active = 1;
    model = actor->model;
    body = model->body;
    shadow = model->shadow;
    if (body != 0) {
        if (shadow != 0) {
            shadow[0x148] = 0;
        }
        body[0xb0] = 0;
        fn_82476E30(actor, 0, 0);
    }
    if (actor->effect != 0) {
        fn_82529320(actor->effect, 0);
        actor->effect = 0;
    }
    if (isFinished) {
        actor->resetPending = 1;
        actor->counter = 0;
        actor->state = 0xe;
        actor->handler = lbl_831C6928;
        actor->timer = 0.0f;
    }
    if (self->sound != 0) {
        fn_822848B8(self->sound);
        self->sound = 0;
    }
}
