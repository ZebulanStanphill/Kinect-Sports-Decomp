typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sprite_825B9718 {
    char pad0[0x10];
    __vector4 color; /* 0x10 */
    char pad20[4];
    float angle; /* 0x24 */
    char pad28[4];
    float speed; /* 0x2c */
    char pad30[8];
    float direction;        /* 0x38 */
    float elapsed;          /* 0x3c */
    float transform[16];    /* 0x40 */
    int kind;               /* 0x80 */
    unsigned char active;   /* 0x84 */
    unsigned char type;     /* 0x85 */
    unsigned char hasColor; /* 0x86 */
    unsigned char flags;    /* 0x87 */
} Sprite_825B9718;

extern Sprite_825B9718 *fn_825B9678(int id);
extern void *XMemCpy(void *dst, const void *src, unsigned int size);

Sprite_825B9718 *fn_825B9718(int id, float speed, float angle, const __vector4 *color, const float *transform)
{
    Sprite_825B9718 *sprite;

    sprite = fn_825B9678(id);
    sprite->kind = 8;
    XMemCpy(sprite->transform, transform, 0x40);
    sprite->speed = speed;
    sprite->angle = angle;
    sprite->elapsed = 0.0f;
    sprite->active = 2;
    sprite->direction = speed >= 0.0f ? 1.0f : -1.0f;
    if (color != 0) {
        sprite->color = *color;
        sprite->hasColor = 1;
    }
    return sprite;
}
