typedef struct Device_82859218 {
    char pad0[0x100];
    unsigned int x100;
} Device_82859218;

typedef struct Context_82859218 {
    Device_82859218 *device;
} Context_82859218;

typedef struct List_82859218 {
    unsigned char *start; /* 0x00 */
    unsigned int arg;     /* 0x04 */
    char pad8[4];
    unsigned int id;      /* 0x0c */
    char pad10[0x10];
    unsigned char flags[2]; /* 0x20 */
} List_82859218;

typedef void (*Callback_82859218)(Device_82859218 *, void *, unsigned int, unsigned int, unsigned char *);

typedef struct CallHeader_82859218 {
    Callback_82859218 fn;
    unsigned int user;
} CallHeader_82859218;

typedef struct Command_82859218 {
    unsigned short size;
    unsigned char op;
    unsigned char pad3;
    CallHeader_82859218 call;
} Command_82859218;

extern void (*lbl_83211304[])(Device_82859218 *, unsigned int);
extern void fn_82851B40(Context_82859218 *, unsigned int, unsigned int *);
extern void fn_82857D38(Context_82859218 *, List_82859218 *);
extern void fn_82858E98(Context_82859218 *, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned char **);
extern void __dcbt(int, const void *);

void fn_82859218(Context_82859218 *ctx, List_82859218 *list, unsigned int param)
{
    unsigned char *next = list->start;
    unsigned int arg = list->arg;
    unsigned char *p = next;
    unsigned char *flags;
    unsigned int state;

    fn_82851B40(ctx, list->id, &state);
    flags = list->flags;
    fn_82857D38(ctx, list);
    if (lbl_83211304[0] != 0) {
        lbl_83211304[0](ctx->device, ctx->device->x100);
    }
    for (;;) {
        Command_82859218 *c;
        __dcbt(0, p);
        __dcbt(0x80, p);
        __dcbt(0x100, p);
        c = (Command_82859218 *)p;
        switch (c->op) {
        case 0x19:
            p = *(unsigned char **)(p + 4);
            break;
        case 0x1d:
            return;
        case 0x20:
            {
                CallHeader_82859218 *h = &c->call;
                if (h->fn != 0) {
                    h->fn(ctx->device, h + 1, param, state, flags);
                }
            }
            p = p + c->size;
            break;
        case 0x27:
            if (flags[0] & 1) {
                p = p + c->size;
            } else {
                p = *(unsigned char **)(p + 4);
            }
            break;
        case 0x28:
            if ((flags[0] & 2) == 0) {
                return;
            }
            p = p + c->size;
            break;
        case 0x29:
            p = ((unsigned char **)p)[flags[1] + 2];
            break;
        default:
            fn_82858E98(ctx, p, param, arg, state, &next);
            p = next;
            continue;
        }
        next = p;
    }
}
