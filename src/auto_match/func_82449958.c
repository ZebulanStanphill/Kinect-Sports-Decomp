typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, int element);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Vec_82449958 {
    __vector4 v;
} Vec_82449958;

typedef struct Transform_82449958 {
    char pad00[0x40];
    __vector4 position; /* 0x40 */
} Transform_82449958;

typedef struct Body_82449958 {
    int pad00;
    Transform_82449958 *transform; /* 0x04 */
} Body_82449958;

typedef struct Owner_82449958 {
    char pad00[0x174];
    Body_82449958 *body; /* 0x174 */
} Owner_82449958;

typedef struct Info_82449958 {
    char pad00[0x44];
    unsigned char side; /* 0x44 */
} Info_82449958;

typedef struct Item_82449958 {
    char pad00[0x1a0];
    Info_82449958 *info; /* 0x1a0 */
} Item_82449958;

typedef struct Settings_82449958 {
    int pad00;
    float distance; /* 0x04 */
} Settings_82449958;

typedef struct Player_82449958 {
    char pad00[0x40];
    Owner_82449958 **owner; /* 0x40 */
    char pad44[4];
    Settings_82449958 *settings; /* 0x48 */
} Player_82449958;

extern Item_82449958 *fn_8242C1B8(Owner_82449958 *owner);
extern Vec_82449958 *fn_82435FA8(Vec_82449958 *out, Player_82449958 *player, float offset,
                                 unsigned char side);

Vec_82449958 *fn_82449958(Vec_82449958 *out, Player_82449958 *self)
{
    __vector4 origin;
    Item_82449958 *item;
    Vec_82449958 dir;
    float scale;

    origin = (*self->owner)->body->transform->position;
    item = fn_8242C1B8(*self->owner);
    fn_82435FA8(&dir, self, 0.0f, item->info->side);
    scale = -self->settings->distance;
    out->v = __vmaddfp(dir.v, __vspltw(__lvlx(&scale, 0), 0), origin);
    return out;
}
