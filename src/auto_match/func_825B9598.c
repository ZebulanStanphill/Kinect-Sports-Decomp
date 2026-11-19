typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Handle_825B9598 {
    void *object; /* 0x0 */
} Handle_825B9598;

typedef struct Desc_825B9598 {
    int id;       /* 0x0 */
    float x;      /* 0x4 */
    float y;      /* 0x8 */
    float width;  /* 0xc */
    float height; /* 0x10 */
} Desc_825B9598;

typedef struct Sprite_825B9598 {
    char pad0[8];
    float width;            /* 0x8 */
    float height;           /* 0xc */
    __vector4 color;        /* 0x10 */
    char pad20[8];          /* 0x20 */
    float y;                /* 0x28 */
    char pad2c[8];          /* 0x2c */
    float x;                /* 0x34 */
    char pad38[0x4e];       /* 0x38 */
    unsigned char hasColor; /* 0x86 */
} Sprite_825B9598;

extern Desc_825B9598 *fn_8251F720(Handle_825B9598 *handle, int flags);
extern void fn_8251FA58(void *desc);
extern Sprite_825B9598 *fn_825B9678(int id);

static __forceinline int IsValid(Handle_825B9598 *handle)
{
    if (handle == 0) {
        return 0;
    }
    return handle->object != 0;
}

static __forceinline void SetSize(Sprite_825B9598 *sprite, float width, float height)
{
    sprite->width = width;
    sprite->height = height;
}

static __forceinline Sprite_825B9598 *CreateSprite(int id, float x, float y)
{
    Sprite_825B9598 *sprite = fn_825B9678(id);

    sprite->x = x;
    sprite->y = y;
    return sprite;
}

Sprite_825B9598 *fn_825B9598(Handle_825B9598 *handle, __vector4 *color)
{
    Desc_825B9598 *desc;
    Sprite_825B9598 *sprite;

    if (!IsValid(handle)) {
        return 0;
    }
    desc = fn_8251F720(handle, 0);
    if (desc == 0) {
        return 0;
    }
    if (color != 0 && desc->height > 0.0f) {
        sprite = CreateSprite(desc->id, desc->x, desc->y);
        sprite->color = *color;
        sprite->hasColor = 1;
        SetSize(sprite, desc->width, desc->height);
    } else {
        sprite = CreateSprite(desc->id, desc->x, desc->y);
    }
    fn_8251FA58(desc);
    return sprite;
}
