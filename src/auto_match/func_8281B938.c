char *strcpy(char *dst, const char *src);

typedef struct Color_8281B938 {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color_8281B938;

typedef struct Vec3_8281B938 {
    int x;
    int y;
    int z;
} Vec3_8281B938;

/* What the callback is given: a copy of the stored description whose name and
   list live in the caller's frame. */
typedef struct Params_8281B938 {
    Color_8281B938 color; /* 0x00 */
    Vec3_8281B938 vector; /* 0x04 */
    char *name;           /* 0x10 */
    unsigned int *list;   /* 0x14 */
    int unk18;            /* 0x18 */
    int unk1C;            /* 0x1c */
    int unk20;            /* 0x20 */
} Params_8281B938;

typedef struct Info_8281B938 {
    char pad00[0xc];
    int unk0C;            /* 0x0c */
    Color_8281B938 color; /* 0x10 */
    int unk14;            /* 0x14 */
    Vec3_8281B938 vector; /* 0x18 */
    char *name;           /* 0x24 */
    unsigned int *list;   /* 0x28: ends with a zero entry */
    int unk2C;            /* 0x2c */
    int unk30;            /* 0x30 */
} Info_8281B938;

typedef struct Target_8281B938 {
    char pad00[0xc];
    unsigned int flags; /* 0x0c */
    char pad10[0x68];
    int border; /* 0x78 */
} Target_8281B938;

typedef void (*Callback_8281B938)(Target_8281B938 *target, int position, int size, Params_8281B938 *params);

void fn_8281B938(Callback_8281B938 callback, Target_8281B938 *target, int position, int size,
                 Info_8281B938 *info, int mode)
{
    Params_8281B938 params;
    unsigned int list[0x40];
    char name[260];
    int i;
    int start;
    int length;

    start = position;
    length = size;
    if (target != 0 && (target->flags & 4) != 0 && mode != 1) {
        start += target->border;
        length -= target->border * 2;
    }
    if (info != 0) {
        params.color.r = info->color.r;
        params.color.g = info->color.g;
        params.color.b = info->color.b;
        params.color.a = info->color.a;
        params.vector.x = info->vector.x;
        params.vector.y = info->vector.y;
        params.vector.z = info->vector.z;
        strcpy(name, info->name);
        params.name = name;
        if (info->list != 0) {
            for (i = 0; i < 0x40; i++) {
                list[i] = info->list[i];
                if (info->list[i] == 0) {
                    break;
                }
            }
        } else {
            list[0] = 0;
        }
        params.list = list;
        params.unk18 = info->unk0C;
        params.unk1C = info->unk2C;
        params.unk20 = info->unk30;
        if (callback != 0) {
            callback(target, start, length, &params);
        }
    } else {
        if (callback != 0) {
            callback(target, start, length, 0);
        }
    }
}
