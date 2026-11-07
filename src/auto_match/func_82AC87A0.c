typedef unsigned char bool;
typedef unsigned int uint;

extern int fn_82AC86B0(int *p);

typedef struct Obj_82AC87A0 {
    int f0;
    int f4;
    uint f8;
} Obj_82AC87A0;

typedef struct Node_82AC87A0 {
    uint flags;
    struct Node_82AC87A0 *next;
    int f8;
    Obj_82AC87A0 *obj;
} Node_82AC87A0;

typedef struct Ctx_82AC87A0 {
    char pad0[0x28];
    int f28;
    int f2c;
    uint f30;
} Ctx_82AC87A0;

typedef struct Item_82AC87A0 {
    Node_82AC87A0 *head;
    int f4;
    uint f8;
} Item_82AC87A0;

static __forceinline bool isRangeA(uint k)
{
    return k >= 0x5b && k <= 0x5e;
}

static __forceinline bool isKindA(uint k)
{
    return isRangeA(k) || k == 0x7b;
}

static __forceinline bool isNodeFlag(uint w)
{
    return (w & 0x40000000) != 0 && (w & 0x0e000000) == 0;
}

static __forceinline bool isRangeB(uint k)
{
    return k >= 0x60 && k <= 0x66;
}

static __forceinline int notNull(Node_82AC87A0 *n)
{
    if (n)
        return 1;
    return 0;
}

int fn_82AC87A0(Ctx_82AC87A0 *ctx, Item_82AC87A0 *item)
{
    int result = 0;
    uint k = (item->f8 >> 7) & 0x7f;
    int t;
    Node_82AC87A0 *n;

    if (isKindA(k)) {
        result = 1;
    } else {
        t = fn_82AC86B0((int *)item);
        if (t != 0 && t != 4 && ctx->f28 != 0 && ctx->f28 != t) {
            result = 1;
        } else if (t == 2) {
            n = item->head;
            while (notNull(n)) {
                uint w = n->flags;
                if (isNodeFlag(w) && isRangeB((n->obj->f8 >> 7) & 0x7f) &&
                    ((1 << ((w >> 13) & 0xfff)) & ctx->f30) != 0) {
                    result = 1;
                    break;
                }
                n = n->next;
            }
        }
    }
    return result;
}
