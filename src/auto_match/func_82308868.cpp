typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __VMXGetReg(int n);

typedef struct Str_82308868 {
    union {
        char buf[16];
        char *ptr;
    } u;

    unsigned int size; /* 0x10 */
    unsigned int res;  /* 0x14 */
} Str_82308868;

typedef struct Anim_82308868 {
    int pad0;
    Str_82308868 name; /* 0x04 */
} Anim_82308868;

typedef struct Model_82308868 {
    char pad0[0x20];
    Anim_82308868 *anim; /* 0x20 */
    char pad24[0x28 - 0x24];
    int busy; /* 0x28 */
} Model_82308868;

struct Facing_82308868 {
    __vector4 v;

    __forceinline Facing_82308868()
    {
    }

    __forceinline Facing_82308868(__vector4 x) : v(x)
    {
    }
};

typedef struct Rig_82308868 {
    char pad0[0x10];
    int blend; /* 0x10 */
    char pad14[0x20 - 0x14];
    __vector4 offsets[2]; /* 0x20 */
    char pad40[0x54 - 0x40];
    int enabledA; /* 0x54 */
    int enabledB; /* 0x58 */
    float limit;  /* 0x5C */
    int pad60;    /* 0x60 */
    float weight; /* 0x64 */
} Rig_82308868;

typedef struct Actor_82308868 {
    char pad0[0xF4];
    Rig_82308868 *rig; /* 0xF4 */
} Actor_82308868;

typedef struct Target_82308868 Target_82308868;

typedef struct TargetVtbl_82308868 {
    void *slot0;
    void *slot4;
    char *(*GetBody)(Target_82308868 *self); /* 0x8 */
} TargetVtbl_82308868;

struct Target_82308868 {
    TargetVtbl_82308868 *vt; /* 0x0 */
};

typedef struct Player_82308868 {
    char pad0[0x24];
    Actor_82308868 *actor; /* 0x24 */
    char pad28[0x114 - 0x28];
    Model_82308868 *model; /* 0x114 */
    char pad118[0x168 - 0x118];
    Target_82308868 *target; /* 0x168 */
    char pad16C[0x254 - 0x16C];
    float heading;  /* 0x254 */
    int headingSet; /* 0x258 */
} Player_82308868;

typedef struct Team_82308868 {
    char pad0[0x42C];
    int state; /* 0x42C */
    char pad430[0xE10 - 0x430];
    void *audio; /* 0xE10 */
} Team_82308868;

typedef struct Self_82308868 {
    int pad0[3];
    Player_82308868 *player; /* 0x0C */
    Team_82308868 *team;     /* 0x10 */
    int dirty;               /* 0x14 */
    int pad18[10];
    int mode;    /* 0x40 */
    int engaged; /* 0x44 */
    int pending; /* 0x48 */
} Self_82308868;

extern "C" {
extern char *strstr(const char *s, const char *sub);
extern int fn_824CD030(Actor_82308868 *actor);
extern void fn_82308BF0(Self_82308868 *self);
extern void fn_82308D48(Self_82308868 *self);
extern __vector4 *fn_822CB020(__vector4 *out, void *src);
extern __vector4 *fn_822BD278(__vector4 *out, void *src);
extern void fn_822C8C60(Model_82308868 *model, int a, int b, __vector4 to, __vector4 from);
extern Facing_82308868 fn_822C4448(Player_82308868 *player, Team_82308868 *team, int c, int d);
extern float fn_8255A070(__vector4 v);
extern void fn_822C8C08(Model_82308868 *model, const char *name);
extern void fn_825275B0(void *audio);
}

static __forceinline const char *CStr(const Str_82308868 *s)
{
    return s->res >= 0x10 ? s->u.ptr : s->u.buf;
}

extern "C" void fn_82308868(Self_82308868 *self)
{
    Actor_82308868 *actor;
    int wasEngaged;
    int mode;
    int control;
    int engage;

    actor = self->player->actor;
    wasEngaged = self->engaged;
    mode = actor != 0 ? 2 : 1;
    if (mode != self->mode) {
        self->mode = mode;
        self->dirty = 0;
        if (actor != 0 && (int)actor->rig != 0) {
            Rig_82308868 *rig = actor->rig;
            int i;

            rig->blend = 0;
            for (i = 0; i < 2; i++) {
                rig->offsets[i] = __VMXGetReg(77);
            }
            rig->enabledA = 1;
            rig->enabledB = 1;
            rig->limit = 9999.0f;
            rig->weight = 0.0f;
        }
    }
    if (strstr(CStr(&self->player->model->anim->name), "control_") != 0 && self->player->model->busy == 0) {
        control = 1;
    } else {
        control = 0;
    }
    if (self->mode == 1) {
    } else if (self->mode == 2) {
        if (fn_824CD030(actor) != 0) {
            if (control == 0) {
                fn_82308BF0(self);
            }
            fn_82308D48(self);
        } else if (control == 0) {
            Target_82308868 *target = self->player->target;

            if (target != 0) {
                __vector4 from;
                __vector4 to;
                Model_82308868 *model = self->player->model;

                fn_822C8C60(model, 1, 0, *fn_822BD278(&to, target->vt->GetBody(target) + 0x144),
                            *fn_822CB020(&from, target->vt->GetBody(target) + 0xF0));
            }
        }
    }
    if (actor != 0 && self->engaged != 0 && wasEngaged == 0) {
        engage = 1;
    } else {
        engage = 0;
    }
    if ((self->pending != 0 && control == 0) || engage != 0) {
        if (actor != 0) {
            if (engage != 0) {
                Facing_82308868 facing = fn_822C4448(self->player, self->team, 1, 1);
                float heading = fn_8255A070(facing.v);
                Player_82308868 *player = self->player;

                player->heading = heading;
                player->headingSet = 1;
                fn_822C8C08(player->model, "msmd_norotation");
            } else {
                fn_822C8C08(self->player->model, "msmd");
            }
        }
        if (engage == 0) {
            Team_82308868 *team = self->team;

            if (team->state != 2) {
                fn_825275B0(team->audio);
            }
            team->state = 2;
        }
        self->pending = 0;
    }
}
