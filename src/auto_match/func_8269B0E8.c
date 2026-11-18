typedef struct Info_8269B0E8 {
    void *ptr; /* 0x00 */
    int pad4[15];
    int status; /* 0x40 */
    int pad44[2];
} Info_8269B0E8;

typedef struct Item_8269B0E8 {
    char pad0[0x66];
    unsigned char flags; /* 0x66 */
} Item_8269B0E8;

typedef struct Owner_8269B0E8 {
    char pad0[0x68];
    char list[4]; /* 0x68 */
} Owner_8269B0E8;

typedef struct Loader_8269B0E8 {
    char pad0[0x10];
    int kind; /* 0x10 */
    char pad14[0x1c - 0x14];
    float scale;           /* 0x1c */
    Owner_8269B0E8 *owner; /* 0x20 */
    char name[0x20];       /* 0x24 */
    float rect[6];         /* 0x44 */
    char pad5c[0x64 - 0x5c];
    unsigned short id; /* 0x64 */
} Loader_8269B0E8;

extern void *fn_826BD928(char *list);
extern void fn_82681BF8(Info_8269B0E8 *info, int *kind, int size, unsigned char hasName, const void *name,
                        unsigned char hasRect, const float *rect, float scale, unsigned short id,
                        unsigned char flag, int extra);
extern Item_8269B0E8 *fn_826D2B68(void *context, Info_8269B0E8 *info, void *ref, int a, int b, int c, int d,
                                  int e, Loader_8269B0E8 *loader);
extern void fn_8267C498(void *p);

Item_8269B0E8 *fn_8269B0E8(Loader_8269B0E8 *self, void *ref, int size, int mode)
{
    void *context;
    int kind;
    Info_8269B0E8 info;
    Item_8269B0E8 *item;
    Item_8269B0E8 *result;

    context = fn_826BD928(self->owner->list);
    if (context != 0 && size >= 0 && size <= 0x7efffffd) {
        kind = self->kind;
        fn_82681BF8(&info, &kind, size, 1, self->name, 1, self->rect, self->scale, self->id, 0, 0);
        item = fn_826D2B68(context, &info, ref, 0, mode, -1, 1, 0, self);
        if (item != 0) {
            result = (item->flags & 0x80) ? item : 0;
            if (info.ptr != 0) {
                fn_8267C498(info.ptr);
            }
            return result;
        }
        if (info.ptr != 0) {
            fn_8267C498(info.ptr);
        }
    }
    return 0;
}
