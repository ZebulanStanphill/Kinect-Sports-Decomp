typedef struct Node_82B458E0 {
    int unused;
    int kind;
    struct Node_82B458E0 *child;
    unsigned int count;

    union {
        struct Node_82B458E0 *type;
        int valueKind;
    } info;

    unsigned int width;

    union {
        double real;
        int integer;
        unsigned int word;

        struct {
            unsigned int first;
            int second;
        } pair;
    } value;
    struct Node_82B458E0 *expression;
} Node_82B458E0;

extern double lbl_82005710;
extern __declspec(noreturn) void fn_82AA66A8(void *self, unsigned int error, ...);

int fn_82B458E0(void *self, Node_82B458E0 *node, unsigned int *out)
{
    unsigned char allowNegative;
    unsigned char allowFraction;
    Node_82B458E0 *type;
    Node_82B458E0 *expression;
    unsigned int value;
    if (node == 0) {
        goto fail;
    }
    if (node->kind != 14 && node->value.pair.second != 0) {
        goto fail;
    }
    if (node->width != 1) {
        goto fail;
    }
    if (node->value.word != 1) {
        goto fail;
    }
    allowNegative = 0;
    allowFraction = 0;
    type = node->info.type;
    if (type == 0 || type->kind != 9) {
        fn_82AA66A8(self, 0x12c1);
    }
    switch ((int)type->width) {
    case 1:
    case 6:
        allowNegative = 1;
    case 2:
        allowFraction = 1;
        break;
    case 10:
        break;
    default:
    fail:
        return 0;
    }
    expression = node->expression;
    if (expression->kind != 1 || expression->count != 0) {
        goto fail;
    }
    expression = expression->child;
    if (expression->kind != 15) {
        goto fail;
    }
    switch (expression->info.valueKind) {
    case 1:
        if (!allowNegative && expression->value.integer < 0) {
            goto fail;
        }
    case 2:
        value = expression->value.word;
        break;
    case 3:
        if (!allowNegative && expression->value.real < lbl_82005710) {
            goto fail;
        }
        value = (unsigned int)expression->value.real;
        if (!allowFraction) {
            int flag;
            flag = (float)value == expression->value.real;
            if (flag) {
            } else {
                goto fail;
            }
        }
        break;
    default:
        goto fail;
    }
    *out = value;
    return 1;
}
