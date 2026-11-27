typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Player_8244C360 Player_8244C360;

typedef struct Vec_8244C360 {
    __vector4 v;
} Vec_8244C360;

typedef struct Transform_8244C360 {
    char reserved00[0x50];
    __vector4 position; /* 0x50 */
} Transform_8244C360;

typedef struct Body_8244C360 {
    int reserved00;
    Transform_8244C360 *transform; /* 0x04 */
} Body_8244C360;

typedef struct Owner_8244C360 {
    char reserved00[0x174];
    Body_8244C360 *body; /* 0x174 */
} Owner_8244C360;

typedef struct Info_8244C360 {
    float startTime; /* 0x00 */
} Info_8244C360;

typedef struct Item_8244C360 {
    char reserved00[0x24];
    void *curve; /* 0x24 */
    char reserved28[0x178];
    Info_8244C360 *info; /* 0x1a0 */
} Item_8244C360;

typedef struct PlayerVtbl_8244C360 {
    void *slots00[7];
    Vec_8244C360 *(*GetPointAt)(Vec_8244C360 *out, Player_8244C360 *self, float time, int flags); /* 0x1c */
} PlayerVtbl_8244C360;

struct Player_8244C360 {
    PlayerVtbl_8244C360 *vt; /* 0x00 */
    char reserved04[0x3c];
    Owner_8244C360 **owner; /* 0x40 */
};

extern float fn_824E17D8(void *curve);
extern Vec_8244C360 *fn_82435FA8(Vec_8244C360 *out, Player_8244C360 *player, float offset, int side);
extern float lbl_831C78F0;

float fn_8244C360(Player_8244C360 *self, Item_8244C360 *item)
{
    Vec_8244C360 point;
    Vec_8244C360 dir;
    __vector4 from;
    __vector4 origin;
    __vector4 dot;
    float startTime = item->info->startTime;
    float progress = fn_824E17D8(item->curve);

    self->vt->GetPointAt(&point, self, progress * 0.8f + startTime, 0);
    from = point.v;
    origin = (*self->owner)->body->transform->position;
    fn_82435FA8(&dir, self, 0.0f, 0);
    dot = __vmsum3fp(__vsubfp(from, origin), dir.v);
    return dot.vector4_f32[0] / lbl_831C78F0;
}
