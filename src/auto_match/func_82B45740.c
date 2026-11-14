typedef struct Type_82B45740 {
    int unknown0;
    int kind;               /* 0x04 */
    int pad8;
    int pad0c;
    int format;    /* 0x10 */
    int width;              /* 0x14 */
    int height;             /* 0x18 */
    unsigned int count;             /* 0x1c */
} Type_82B45740;

typedef struct Entry_82B45740 {
    char pad0[0x14];
    Type_82B45740 *type;    /* 0x14 */
    char pad18[0x28 - 0x18];
} Entry_82B45740;

typedef struct Ctx_82B45740 {
    char pad0[0xc];
    Entry_82B45740 *entries;  /* 0x0c */
} Ctx_82B45740;

extern unsigned char fn_82B45698(Ctx_82B45740 *self, Type_82B45740 *type, int *width, int *height);

unsigned char fn_82B45740(Ctx_82B45740 *self, Type_82B45740 *type, int *width, int *height)
{
    switch (type->kind) {
    case 0xe:
        *width = type->width;
        *height = type->height;
        return 1;
    case 0xf:
        switch (type->format) {
        case 0:
        case 1:
        case 2:
        case 3:
            *width = 1;
            *height = 1;
            return 1;
        case 6:
            if (type->count == 0) {
                *width = 0;
                *height = 0;
                return 1;
            }
            return fn_82B45698(self, self->entries[type->height].type, width, height);
        }
        break;
    }
    return 0;
}
