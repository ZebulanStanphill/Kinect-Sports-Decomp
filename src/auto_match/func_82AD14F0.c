typedef struct Decl_82AD14F0 { unsigned int pad0; unsigned int pad4; unsigned int bits; } Decl_82AD14F0;
typedef struct Item_82AD14F0 { unsigned int pad0; unsigned int pad4; struct Item_82AD14F0 *next; unsigned int padc; Decl_82AD14F0 *decl; } Item_82AD14F0;
typedef struct Group_82AD14F0 { unsigned int pad0; Item_82AD14F0 *first; } Group_82AD14F0;
typedef struct Node_82AD14F0 { unsigned int flags; unsigned int pad4; struct Node_82AD14F0 *next; unsigned int padc; Group_82AD14F0 *group; } Node_82AD14F0;
typedef struct List_82AD14F0 { unsigned int pad0; Node_82AD14F0 *first; } List_82AD14F0;

extern void fn_82AA66A8(void *ctx, int code);

static __forceinline int NotNull(const void *p)
{
    if (p)
        return 1;
    return 0;
}

void fn_82AD14F0(void *ctx, List_82AD14F0 *list, Decl_82AD14F0 **outA, Decl_82AD14F0 **outB)
{
    Node_82AD14F0 *node;
    Item_82AD14F0 *item;
    Decl_82AD14F0 *decl;
    unsigned int kind;

    for (node = list->first; NotNull(node); node = node->next) {
        if (node->group != 0 && (node->flags & 0xe000000) != 0) {
            for (item = node->group->first; NotNull(item); item = item->next) {
                decl = item->decl;
                if (decl != 0) {
                    kind = (decl->bits >> 7) & 0x7f;
                    if (kind == 0x40) {
                        if (*outB != 0) {
                            fn_82AA66A8(ctx, 0x12c0);
                            return;
                        }
                        *outB = decl;
                    } else if (kind == 0x3f) {
                        if (*outA != 0) {
                            fn_82AA66A8(ctx, 0x12c0);
                            return;
                        }
                        *outA = decl;
                    }
                }
            }
        }
    }
}
