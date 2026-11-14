typedef struct Sub_82B81A28 {
    char pad[0xc];
    unsigned int value; /* 0x0c */
} Sub_82B81A28;

typedef struct Info_82B81A28 {
    char pad[0x8];
    unsigned int flags;   /* 0x08 */
    char padc[0x30 - 0xc];
    Sub_82B81A28 *sub;    /* 0x30 */
} Info_82B81A28;

typedef struct Node_82B81A28 {
    unsigned int w;               /* 0x00 */
    struct Node_82B81A28 *next;   /* 0x04 */
    unsigned int pad8;
    Info_82B81A28 *info;          /* 0x0c */
} Node_82B81A28;

typedef struct Page_82B81A28 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82B81A28;

typedef struct List_82B81A28 {
    Node_82B81A28 *head;
} List_82B81A28;

__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

static __forceinline int notNull(Node_82B81A28 *p)
{
    if (p) return 1;
    return 0;
}

unsigned int fn_82B81A28(List_82B81A28 *l)
{
    Node_82B81A28 *p;
    unsigned int w;

    p = l->head;
    while (notNull(p)) {
        w = p->w;
        if ((w & 0xe000000) != 0 && (w & 8) != 0) {
            Info_82B81A28 *info = p->info;
            if ((info->flags & 0x3f80) != 0x3b00)
                fn_82AA66A8(((Page_82B81A28 *)((unsigned int)l & ~0xfff))->owner->ctx, 0x12c0);
            return info->sub->value;
        }
        p = p->next;
    }
    fn_82AA66A8(((Page_82B81A28 *)((unsigned int)l & ~0xfff))->owner->ctx, 0x12c0);
}
