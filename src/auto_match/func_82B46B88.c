typedef struct Type_82B46B88 {
    char pad0[4];
    int kind;               /* 0x04 */
    char pad08[8];
    unsigned int cls;       /* 0x10 */
    int cols;               /* 0x14 */
    unsigned int rows;      /* 0x18 */
    unsigned int size;      /* 0x1c */
} Type_82B46B88;

typedef struct Node_82B46B88 {
    char pad0[4];
    int kind;                       /* 0x04 */
    char pad08[8];
    union {
        struct Node_82B46B88 *sub;  /* 0x10: element type of an array */
        int cls;                    /* 0x10 */
    } u;
    char pad14[8];
    unsigned int count;             /* 0x1c */
    unsigned int size;              /* 0x20 */
    int flags;                      /* 0x24 */
} Node_82B46B88;

typedef struct Decl_82B46B88 {
    char pad0[0x30];
    Node_82B46B88 *type;    /* 0x30 */
} Decl_82B46B88;

typedef struct Symbol_82B46B88 {
    char pad0[0x10];
    Decl_82B46B88 *decl;    /* 0x10 */
    char pad14[0x14];
} Symbol_82B46B88;

typedef struct Compiler_82B46B88 {
    char pad0[0xc];
    Symbol_82B46B88 *symbols;   /* 0x0c */
} Compiler_82B46B88;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern int fn_82B46050(Compiler_82B46B88 *self, Type_82B46B88 *type, void *out);

unsigned int fn_82B46B88(Compiler_82B46B88 *self, Type_82B46B88 *type)
{
    char scratch[8];
    Node_82B46B88 *n;
    Node_82B46B88 *s;
    Decl_82B46B88 *d;

    switch (type->kind) {
    case 0xe:
        return type->rows * type->cols;
    case 0xf:
        switch (type->cls) {
        case 0:
        case 1:
        case 2:
        case 3:
            return 1;
        case 6:
            return type->size;
        }
        break;
    case 0x1c:
        d = self->symbols[fn_82B46050(self, type, scratch)].decl;
        if (d->type->kind == 8) {
            if (type->rows == 0)
                break;
            s = d->type->u.sub;
            if (s->kind != 9)
                s = 0;
        } else {
            n = d->type;
            if (n == 0 || n->kind != 9)
                fn_82AA66A8(self, 0x12c1);
            s = n;
        }
        if (s == 0)
            break;
        if (s->u.cls == 2) {
            if (s->flags & 0x400)
                return s->size;
            return s->count;
        }
        if (s->count != 1)
            break;
        return s->size;
    }
    fn_82AA66A8(self, 0x12c1);
}
