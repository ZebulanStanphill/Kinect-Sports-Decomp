typedef struct Token_82B53DA8 {
    struct Token_82B53DA8 *next;
    unsigned int count;
    unsigned int unused[2];
    void *value;
} Token_82B53DA8;

typedef struct FreeList_82B53DA8 {
    char padding[0x20];
    Token_82B53DA8 *head;
} FreeList_82B53DA8;

typedef struct Parser_82B53DA8 {
    char padding[0x3cc];
    FreeList_82B53DA8 freeList;
} Parser_82B53DA8;

typedef struct Flags_82B53DA8 {
    int unused;
    unsigned int flags;
} Flags_82B53DA8;

extern Token_82B53DA8 *fn_82AE7110(Parser_82B53DA8 *, void *, int, int);
extern unsigned char fn_82B50AA8(Token_82B53DA8 *);
extern int fn_82B50B00(Token_82B53DA8 *);
extern void fn_82B52E60(Parser_82B53DA8 *, Flags_82B53DA8 *, void *, void *, void *, int);

static __forceinline unsigned char Empty_82B53DA8(Token_82B53DA8 *token)
{
    return token->count == 0 && !fn_82B50AA8(token);
}

static __forceinline void Push_82B53DA8(FreeList_82B53DA8 *list, Token_82B53DA8 *token)
{
    token->next = list->head;
    list->head = token;
}

void fn_82B53DA8(Parser_82B53DA8 *self, Flags_82B53DA8 *flags, void *context, void *input, void *out)
{
    Token_82B53DA8 *token = fn_82AE7110(self, input, 0, 0);
    int kind;
    while (!Empty_82B53DA8(token)) {
        kind = fn_82B50B00(token);
        switch (kind) {
        default:
            if (token->value != 0) {
                fn_82B52E60(self, flags, context, token->value, out, 1);
            }
            break;
        case 0x21:
            flags->flags |= 8;
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
            flags->flags = (flags->flags & ~0x70) | 0x30;
            break;
        }
        token->count = 0;
    }
    Push_82B53DA8(&self->freeList, token);
}
