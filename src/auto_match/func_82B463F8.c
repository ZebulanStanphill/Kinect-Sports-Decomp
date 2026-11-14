int strcmp(const char *a, const char *b);

typedef struct Info_82B463F8 {
    int pad0;
    int type;           /* 0x04 */
    char pad8[0x8];
    int kind;           /* 0x10 */
    int pad14;
    const char *name;   /* 0x18 */
} Info_82B463F8;

typedef struct Obj_82B463F8 {
    char pad[0x10];
    Info_82B463F8 *info; /* 0x10 */
} Obj_82B463F8;

extern const char *lbl_83160F20[23];
__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

unsigned int fn_82B463F8(void *ctx, Obj_82B463F8 *obj)
{
    Info_82B463F8 *info = obj->info;
    unsigned int i;

    if (info == 0 || info->type != 3)
        fn_82AA66A8(ctx, 0x12c1);
    if (info->kind != 9)
        fn_82AA66A8(ctx, 0x12c1);
    for (i = 0; i < 23; i++) {
        if (strcmp(lbl_83160F20[i], info->name) == 0)
            break;
    }
    return i == 23 ? 0 : i + 1;
}
