typedef struct Tmp_82B46830 {
    unsigned int w[16];
} Tmp_82B46830;

typedef struct Value_82B46830 {
    unsigned int id;
    unsigned int type;
    unsigned int pad[2];
    unsigned int kind;
    unsigned int pad2;
    double value;
} Value_82B46830;

typedef struct Item_82B46830 {
    unsigned int id;
    unsigned int type;
    void *value;
    struct Item_82B46830 *next;
    const char *name;
} Item_82B46830;

extern Value_82B46830 *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_829333E0(Tmp_82B46830 *);
extern Item_82B46830 *fn_82B467D8(void *ctx, void *value, Item_82B46830 *next, const char *name);

Item_82B46830 *fn_82B46830(void *ctx, const float *values, unsigned int count)
{
    Item_82B46830 *head = 0;
    Item_82B46830 **link = &head;
    unsigned int i;
    for (i = 0; i < count; i++) {
        Tmp_82B46830 t;
        unsigned int id;
        Item_82B46830 *item;
        Value_82B46830 *v = fn_82AC6560(ctx, 0x40, 0x13);
        fn_829333E0(&t);
        id = t.w[0];
        v->type = 0xf;
        v->kind = 3;
        v->id = id;
        v->value = values[i];
        item = fn_82B467D8(ctx, v, 0, "Values");
        *link = item;
        link = &item->next;
    }
    return head;
}
