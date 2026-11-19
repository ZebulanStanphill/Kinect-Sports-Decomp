typedef struct Value_82986C50 {
    unsigned int bits[4];
} Value_82986C50;

typedef struct Expr_82986C50 Expr_82986C50;

typedef struct ExprVtbl_82986C50 {
    void *f0;
    Expr_82986C50 *(*Clone)(Expr_82986C50 *self); /* 0x4 */
} ExprVtbl_82986C50;

struct Expr_82986C50 {
    ExprVtbl_82986C50 *vt;
};

typedef struct Item_82986C50 Item_82986C50;

struct Item_82986C50 {
    char pad0[8];
    void *value;         /* 0x8 */
    Item_82986C50 *next; /* 0xc */
};

typedef struct Node_82986C50 {
    char pad0[0x10];
    Expr_82986C50 *expr;  /* 0x10 */
    char pad14[0xc];      /* 0x14 */
    Item_82986C50 *items; /* 0x20 */
} Node_82986C50;

typedef struct Type_82986C50 {
    int pad0;
    int kind;            /* 0x4 */
    char pad8[8];        /* 0x8 */
    Expr_82986C50 *init; /* 0x10 */
    int columns;         /* 0x14 */
    int rows;            /* 0x18 */
    char pad1c[0x14];    /* 0x1c */
    char location[0x20]; /* 0x30 */
} Type_82986C50;

extern Value_82986C50 *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *block, unsigned int tag);
extern void *fn_82930318(unsigned int size);
extern int fn_829860E0(void *ctx, Type_82986C50 *type, Value_82986C50 *values);
extern Node_82986C50 *fn_82933088(void *memory, int a, int b, int c, int d, int e, char *location);
extern Item_82986C50 *fn_829304E0(void *memory, void *a, int b, const char *name);
extern void *fn_82933428(void *memory, Value_82986C50 *value, char *location);
extern void fn_82983380(void *ctx, Node_82986C50 *node);

Node_82986C50 *fn_82986C50(void *ctx, Type_82986C50 *type)
{
    unsigned int count;
    Value_82986C50 *values;
    void *memory;
    Node_82986C50 *node;
    Item_82986C50 **link;
    unsigned int i;

    if (type == 0 || type->kind != 0xe) {
        return 0;
    }
    count = type->rows * type->columns;
    values = fn_8265C940(count * sizeof(Value_82986C50), 0x24810000);
    if (values == 0 || fn_829860E0(ctx, type, values) < 0) {
        goto fail;
    }
    memory = fn_82930318(0x50);
    if (memory != 0) {
        node = fn_82933088(memory, 0, 0, 0, 0, 1, type->location);
    } else {
        node = 0;
    }
    if (node == 0) {
        goto fail;
    }
    if (type->init != 0) {
        Expr_82986C50 *expr = type->init->vt->Clone(type->init);

        node->expr = expr;
        if (expr == 0) {
            goto fail;
        }
    }
    link = &node->items;
    for (i = 0; i < count; i++) {
        Item_82986C50 *item;
        void *value;

        memory = fn_82930318(0x14);
        if (memory != 0) {
            item = fn_829304E0(memory, 0, 0, "Value");
        } else {
            item = 0;
        }
        *link = item;
        if (item == 0) {
            goto fail;
        }
        memory = fn_82930318(0x40);
        if (memory != 0) {
            value = fn_82933428(memory, &values[i], type->location);
        } else {
            value = 0;
        }
        (*link)->value = value;
        if (value == 0) {
            goto fail;
        }
        link = &(*link)->next;
    }
    fn_82983380(ctx, node);
    fn_8265C990(values, 0x24810000);
    return node;

fail:
    fn_8265C990(values, 0x24810000);
    return 0;
}
