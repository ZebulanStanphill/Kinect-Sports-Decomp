typedef struct Type_82953BF0 {
    int pad0;
    int kind;
    struct Type_82953BF0 *second;
    struct Type_82953BF0 *first;
    struct Type_82953BF0 *element;
    int count;
    struct Type_82953BF0 *base;
    int rows;
    int columns;
    char pad24[0x30 - 0x24];
    struct Type_82953BF0 *target;
} Type_82953BF0;

int fn_82953BF0(Type_82953BF0 *type)
{
    if (type == 0)
        return 0;
    switch (type->kind) {
    case 1:
        return fn_82953BF0(type->first) + fn_82953BF0(type->second);
    case 6:
        return fn_82953BF0(type->base);
    case 8:
        return fn_82953BF0(type->element) * type->count;
    case 9:
        return type->columns * type->rows;
    case 0xb:
        return fn_82953BF0(type->target);
    }
    return 0;
}
