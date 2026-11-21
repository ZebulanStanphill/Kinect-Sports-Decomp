typedef struct Owner_82AF62F8 {
    char pad0[0x30];
    unsigned int id; /* 0x30: low 19 bits */
} Owner_82AF62F8;

typedef struct Context_82AF62F8 {
    char pad0[0x234];
    Owner_82AF62F8 *global; /* 0x234 */
} Context_82AF62F8;

typedef struct Page_82AF62F8 {
    struct {
        char pad0[0x94];
        Context_82AF62F8 *context; /* 0x94 */
    } *heap;
} Page_82AF62F8;

typedef struct Entry_82AF62F8 {
    unsigned int pad0 : 3;
    unsigned int offset : 14;
    unsigned int index : 15;
    unsigned int pad4a : 11;
    unsigned int valid : 1;
    unsigned int pad4b : 20;
} Entry_82AF62F8;

typedef struct Node_82AF62F8 {
    char pad0[0x8];
    unsigned int pad8a : 1;
    unsigned int bound : 1;
    unsigned int pad8b : 8;
    unsigned int space : 3;
    unsigned int pad8c : 2;
    unsigned int count : 3;
    unsigned int kind : 7;
    unsigned int pad8d : 7;
    char padc[0x4];
    unsigned int order; /* 0x10: low 16 bits */
    unsigned int slot;  /* 0x14 */
    char pad18[0x4];
    Owner_82AF62F8 *owner; /* 0x1c */
    char pad20[0xc];
    unsigned int keys[1]; /* 0x2c */
} Node_82AF62F8;

extern int fn_82ABDD90(Context_82AF62F8 *context, unsigned int kind, unsigned int space, unsigned int count);
extern unsigned char fn_82B85910(Node_82AF62F8 *a, Node_82AF62F8 *b);

static __forceinline unsigned char IsSampler(unsigned int kind)
{
    if (kind == 0x7d || kind == 0x7c) {
        return 1;
    }
    return 0;
}

/* Sort order of two nodes: by owner, then by slot, sampler kind, entry or key. */
int fn_82AF62F8(Node_82AF62F8 *a, Node_82AF62F8 *b)
{
    Context_82AF62F8 *context;
    unsigned int kindA;
    unsigned int kindB;

    if (a == b)
        return 0;
    if (a->owner != b->owner)
        return (a->owner->id & 0x7ffff) - (b->owner->id & 0x7ffff);
    context = ((Page_82AF62F8 *)((unsigned int)a & ~0xfff))->heap->context;
    if (a->owner == context->global && b->owner == context->global) {
        if (!a->bound || !b->bound)
            goto byCallback;
        return (a->slot >> 3) - (b->slot >> 3);
    }
    kindA = a->kind;
    if (IsSampler(kindA)) {
        unsigned char samplerB;

        kindB = b->kind;
        samplerB = IsSampler(kindB);
        if (!samplerB) {
        } else {
            if (kindA == 0x7c) {
                if (kindB == 0x7c) {
                    Entry_82AF62F8 *entryA;
                    Entry_82AF62F8 *entryB;
                    int diff;

                    entryA =
                        (Entry_82AF62F8 *)((char *)a - 8 + fn_82ABDD90(context, a->kind, a->space, a->count));
                    entryB =
                        (Entry_82AF62F8 *)((char *)b - 8 + fn_82ABDD90(context, b->kind, b->space, b->count));
                    if (!entryA->valid || !entryB->valid)
                        goto byCallback;
                    diff = entryA->index - entryB->index;
                    if (diff != 0)
                        return diff;
                    return entryA->offset - entryB->offset;
                }
            } else {
                unsigned int countA;
                unsigned int countB;
                unsigned int i;

                if (kindB == 0x7c)
                    return -1;
                countA = a->count;
                countB = b->count;
                if (countA != countB)
                    return countA - countB;
                for (i = 0; i < countA; i++) {
                    int diff = a->keys[i] - b->keys[i];

                    if (diff != 0)
                        return diff;
                }
                goto byCallback;
            }
        }
        return 1;
    byCallback:
        return fn_82B85910(a, b) ? 1 : -1;
    }
    if (IsSampler(b->kind))
        return -1;
    return (int)(a->order & 0xffff) - (int)(b->order & 0xffff);
}
