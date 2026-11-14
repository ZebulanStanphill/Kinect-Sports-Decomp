typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct String_82411E50 { int data[7]; } String_82411E50;
typedef struct Param_82411E50 { String_82411E50 name; float value; } Param_82411E50;
typedef struct Params_82411E50 { int a; int b; int c; int pad; } Params_82411E50;

typedef struct Source_82411E50 Source_82411E50;
typedef struct SourceVt_82411E50 {
    void *slots[8];
    int *(*handle)(Source_82411E50 *self);   /* 0x20 */
} SourceVt_82411E50;
struct Source_82411E50 { SourceVt_82411E50 *vt; };

typedef struct Ref_82411E50 { int pad; Source_82411E50 *ptr; } Ref_82411E50;
typedef struct Owner_82411E50 { char pad[0x8bc]; Ref_82411E50 source; } Owner_82411E50;

typedef struct Hit_82411E50 {
    __vector4 position;          /* 0x00 */
    char pad10[0x84];
    Owner_82411E50 *owner;       /* 0x94 */
    char pad98[4];
    unsigned int flags;          /* 0x9c */
    char padA0[4];
    float strength;              /* 0xa4 */
    char padA8[0xd0 - 0xa8];
} Hit_82411E50;

typedef struct Player_82411E50 {
    char pad0[0x86c];
    float pinThreshold;          /* 0x86c */
    char pad870[0x88c - 0x870];
    float range[4];              /* 0x88c */
    char pad89C[0x8ac - 0x89c];
    int pinsEnabled;             /* 0x8ac */
    int soundEnabled;            /* 0x8b0 */
    char pad8B4[0xcc0 - 0x8b4];
    int handles[10];             /* 0xcc0 */
    char padCE8[0x14a4 - 0xce8];
    int sounds;                  /* 0x14a4 */
} Player_82411E50;

typedef struct World_82411E50 {
    char pad0[0x50];
    __vector4 position;          /* 0x50 */
    char pad60[0x380 - 0x60];
    Hit_82411E50 *hitsBegin;     /* 0x380 */
    Hit_82411E50 *hitsEnd;       /* 0x384 */
} World_82411E50;

typedef struct Found_82411E50 { char pad[0x10]; float strength; } Found_82411E50;

typedef struct Self_82411E50 {
    char pad0[8];
    int replay;                  /* 0x08 */
    char padC[0x18];
    Player_82411E50 **player;    /* 0x24 */
    World_82411E50 *world;       /* 0x28 */
} Self_82411E50;

extern Found_82411E50 *fn_8241CEB8(Player_82411E50 **player, Self_82411E50 *self, int kind);
extern void fn_824121C8(Self_82411E50 *self, float strength, __vector4 position);
extern int fn_825200A8(void *a, void *b);
extern float fn_82539560(float x, float a, float b, float c, float d);
extern void fn_82230110(String_82411E50 *s, const char *text);
extern void fn_82230300(String_82411E50 *s, int built, unsigned int newSize);
extern void fn_8236D0D0(Params_82411E50 *v, const Param_82411E50 *x);
extern void fn_824180B0(Player_82411E50 **player, int *sounds, Hit_82411E50 *hit, Params_82411E50 *params);
extern void fn_822CD140(Params_82411E50 *v);
extern int lbl_82196288;

static __forceinline int *GetHandle(Ref_82411E50 *ref)
{
    if (ref->ptr != 0) return ref->ptr->vt->handle(ref->ptr);
    return &lbl_82196288;
}

static __forceinline unsigned char IsPlayerHandle(Player_82411E50 **player, int *handle)
{
    int i;
    for (i = 0; i < 10; i++) {
        if (fn_825200A8(handle, &(*player)->handles[i]) != 0) return 1;
    }
    return 0;
}

void fn_82411E50(Self_82411E50 *self)
{
    Hit_82411E50 *hit;
    Hit_82411E50 *end;
    Found_82411E50 *found;
    int *handle;
    float volume;
    float strength;
    Params_82411E50 params;
    Param_82411E50 param;

    if (self->replay != 0) {
        found = fn_8241CEB8(self->player, self, 2);
        if (found != 0) fn_824121C8(self, found->strength, self->world->position);
        return;
    }
    hit = self->world->hitsBegin;
    end = self->world->hitsEnd;
    for (; hit < end; hit++) {
        if (hit->owner == 0) continue;
        if ((hit->flags & 1) != 0) {
            if ((*self->player)->pinsEnabled != 0 && hit->strength > (*self->player)->pinThreshold)
                fn_824121C8(self, hit->strength, hit->position);
            continue;
        }
        handle = GetHandle(&hit->owner->source);
        if (handle == 0) continue;
        if (IsPlayerHandle(self->player, handle) && (*self->player)->soundEnabled != 0
            && (strength = hit->strength) > (*self->player)->range[0]) {
            params.a = 0;
            params.b = 0;
            params.c = 0;
            volume = fn_82539560(strength, (*self->player)->range[0], (*self->player)->range[1],
                                 (*self->player)->range[2], (*self->player)->range[3]);
            fn_82230110(&param.name, "bowling_impact");
            param.value = volume;
            fn_8236D0D0(&params, &param);
            fn_82230300(&param.name, 1, 0);
            fn_824180B0(self->player, &(*self->player)->sounds, hit, &params);
            fn_822CD140(&params);
        }
    }
}
