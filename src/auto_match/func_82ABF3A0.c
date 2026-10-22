typedef struct Info {
    char pad[0x4c];
    unsigned int flags;
} Info;

typedef struct Item {
    char pad[0x1c];
    Info *info;
    char pad20[0x4];
    unsigned int link;
} Item;

typedef struct Node {
    char pad[0x8];
    unsigned int kind;
} Node;

extern void fn_82A9F7E0(unsigned int a, int b, int c, int d, int e, int f, unsigned char g);
extern unsigned int *fn_82ABDD90(int ctx, int id, int x, int y);
extern unsigned char fn_82ABDE58(int ctx, void *p, int *a, int *b);
extern int fn_82ABDEC0(int ctx, unsigned int n);
extern void *fn_82D7E470(int ctx, Item *item, int x);

static unsigned int *attr(int ctx, char *node)
{
    return (unsigned int *)((char *)fn_82ABDD90(ctx, 0x75, 0, 0) + (int)(node - 0x10));
}

void fn_82ABF3A0(int ctx, int b, int c, unsigned int d, Item *item)
{
    void *p;
    int v1;
    int v2;
    unsigned int n;
    int v;
    int flag;
    unsigned int link;
    char *node;

    if (d != 0) {
        p = fn_82D7E470(ctx, item, 1);
        if (p != 0) {
            if (fn_82ABDE58(ctx, p, &v1, &v2)) {
                n = item->info->flags & 0x7ffff;
                if (n == 0)
                    v = -1;
                else
                    v = fn_82ABDEC0(ctx, n);
                flag = 0;
                link = ((Item *)((unsigned int)item & ~1u))->link;
                if ((link & 1) == 0) {
                    node = (char *)(link & ~1u) - 0x28;
                    if (node != 0 && (((Node *)node)->kind & 0x3f80) == 0x3a80) {
                        flag = (*attr(ctx, node) & 7) == 3;
                    }
                }
                fn_82A9F7E0(d, b, c, v1, v2, v, flag);
            }
        }
    }
}
