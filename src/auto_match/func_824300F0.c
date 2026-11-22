typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __VMXGetReg(int n);

typedef struct Vec_824300F0 {
    __vector4 v;
} Vec_824300F0;

typedef struct Body_824300F0 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Body_824300F0;

typedef struct Node_824300F0 {
    Body_824300F0 *body; /* 0x0 */
} Node_824300F0;

typedef struct Source_824300F0 Source_824300F0;

typedef struct SourceVtbl_824300F0 {
    void *slot0;
    void *slot4;
    void *slot8;
    Vec_824300F0 *(*GetTarget)(Vec_824300F0 *out, Source_824300F0 *self);
} SourceVtbl_824300F0;

struct Source_824300F0 {
    SourceVtbl_824300F0 *vt; /* 0x0 */
    Node_824300F0 *node;     /* 0x4 */
};

typedef struct Look_824300F0 {
    char pad0[0x38];
    Source_824300F0 *source; /* 0x38 */
    char pad3C[0x68 - 0x3C];
    int mode; /* 0x68 */
    char pad6C[0x74 - 0x6C];
    int blendHandle;       /* 0x74 */
    int scaleHandle;       /* 0x78 */
    const char *blendName; /* 0x7C */
    const char *scaleName; /* 0x80 */
    float scale;           /* 0x84 */
    float scaleIn;         /* 0x88 */
    float scaleOut;        /* 0x8C */
    float blend;           /* 0x90 */
    char pad94[0xE0 - 0x94];
    int tracking; /* 0xE0 */
    char padE4[0xF0 - 0xE4];
    __vector4 position;     /* 0xF0 */
    __vector4 lastPosition; /* 0x100 */
    __vector4 target;       /* 0x110 */
    __vector4 lastTarget;   /* 0x120 */
    char pad130[0x140 - 0x130];
    void *anims; /* 0x140 */
} Look_824300F0;

typedef struct Character_824300F0 {
    char pad0[0x8];
    char unk8; /* 0x08 */
} Character_824300F0;

typedef struct Player_824300F0 {
    char pad0[0x40];
    Character_824300F0 *character; /* 0x40 */
} Player_824300F0;

typedef struct Roster_824300F0 {
    char pad0[0x1C4];
    Player_824300F0 **players; /* 0x1C4 */
    char pad1C8[0x1D4 - 0x1C8];
    int current; /* 0x1D4 */
} Roster_824300F0;

typedef struct Team_824300F0 {
    char pad0[0x40];
    Roster_824300F0 *roster; /* 0x40 */
} Team_824300F0;

typedef struct Match_824300F0 {
    char pad0[0x174];
    char *teams; /* 0x174 */
} Match_824300F0;

typedef struct Self_824300F0 {
    char pad0[0x20];
    int owner; /* 0x20 */
    char pad24[0x220 - 0x24];
    float distance; /* 0x220 */
    char pad224[0x240 - 0x224];
    Match_824300F0 *match; /* 0x240 */
    Look_824300F0 *look;   /* 0x244 */
} Self_824300F0;

extern const __vector4 lbl_821962C0;
extern float lbl_831E4D40;
extern float lbl_831E4D44;
extern void fn_82432270(Self_824300F0 *self, float dt);
extern void fn_8242F4F8(Self_824300F0 *self, float dt);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern int fn_82570840(void *anims, const char **name, unsigned char loop, int *owner);
extern int fn_825709D8(void *anims, int handle, __vector4 *scale, float in, float out);

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

static __forceinline float Lerp(float from, float to, float t)
{
    return (to - from) * t + from;
}

static __forceinline Player_824300F0 *CurrentPlayer(Team_824300F0 *team)
{
    if (team->roster->current == -1) {
        return 0;
    }
    return team->roster->players[team->roster->current];
}

static __forceinline __vector4 SourcePosition(Source_824300F0 *source)
{
    Body_824300F0 *body = source->node->body;

    if (body != 0) {
        return body->position;
    }
    return __VMXGetReg(77);
}

static __forceinline void PlayScaled(void *anims, int handle, float size, float in, float out)
{
    __vector4 scale = __VMXGetReg(77);

    scale.vector4_f32[2] = size;
    scale.vector4_f32[1] = size;
    scale.vector4_f32[0] = size;
    fn_825709D8(anims, handle, &scale, in, out);
}

static __forceinline void PlayUniform(void *anims, int handle, float size, float in, float out)
{
    __vector4 scale = Replicate(size);

    fn_825709D8(anims, handle, &scale, in, out);
}

void fn_824300F0(Self_824300F0 *self, float dt)
{
    Player_824300F0 *player;

    player = CurrentPlayer((Team_824300F0 *)(self->match->teams + 0x1C));
    if (player != 0 && player->character->unk8 == 0 && self->look->mode != 13) {
        return;
    }
    fn_82432270(self, dt);
    if (self->look->source != 0) {
        self->look->lastPosition = self->look->position;
        self->look->lastTarget = self->look->target;
        {
            __vector4 position = SourcePosition(self->look->source);

            self->look->position = position;
        }
        {
            Vec_824300F0 result;

            self->look->target = self->look->source->vt->GetTarget(&result, self->look->source)->v;
        }
        if (self->look->tracking == 0) {
            self->look->tracking = 1;
        }
    } else {
        self->look->position = lbl_821962C0;
        self->look->lastPosition = lbl_821962C0;
        self->look->target = lbl_821962C0;
        self->look->lastTarget = lbl_821962C0;
        self->look->tracking = 0;
    }
    fn_8242F4F8(self, dt);
    self->look->blend = Lerp(
        self->look->blend, 1.0f - fn_82539560(self->distance, lbl_831E4D40, lbl_831E4D44, 0.0f, 0.9f), 0.1f);
    if (self->look->scaleHandle == -1) {
        if (self->look->scaleName != 0) {
            self->look->scaleHandle = fn_82570840(self->look->anims, &self->look->scaleName, 1, &self->owner);
        }
    } else {
        Look_824300F0 *look = self->look;

        PlayScaled(look->anims, look->scaleHandle, look->scale, look->scaleIn, look->scaleOut);
    }
    if (self->look->blendHandle == -1) {
        if (self->look->blendName != 0) {
            self->look->blendHandle = fn_82570840(self->look->anims, &self->look->blendName, 1, &self->owner);
        }
    } else {
        PlayUniform(self->look->anims, self->look->blendHandle, 1.0f, self->look->blend, 1.0f);
    }
}
