typedef struct Node_82AD1590 {
    unsigned int pad0 : 4;
    unsigned int kind : 3;
    unsigned int code : 8;
    unsigned int pad1 : 17;
    int unk4;
    struct Node_82AD1590 *next;
} Node_82AD1590;

typedef struct {
    int unk0;
    Node_82AD1590 *first;
    unsigned int pad0 : 26;
    unsigned int active : 1;
    unsigned int pad1 : 5;
} List_82AD1590;

static __forceinline int NotNull(const Node_82AD1590 *node)
{
    if (node)
        return 1;
    return 0;
}

unsigned char fn_82AD1590(List_82AD1590 *list)
{
    Node_82AD1590 *node;
    unsigned int code;
    if (!(unsigned char)list->active)
        return 0;
    for (node = list->first; NotNull(node); node = node->next)
        if (node->kind != 0)
            break;
    code = node->code;
    return code >= 0x20 && code <= 0x25;
}
