typedef struct StringNode_826A6AC0 {
    char *data; /* 0x00 */
    int pad04;
    int refCount; /* 0x08 */
    int pad0c;
    unsigned int size; /* 0x10 */
} StringNode_826A6AC0;

typedef struct String_826A6AC0 {
    StringNode_826A6AC0 *node; /* 0x0 */
} String_826A6AC0;

typedef struct FnCall_826A6AC0 {
    int pad00;
    int result; /* 0x04 */
    char pad08[0x10];
    int env;      /* 0x18 */
    int argCount; /* 0x1c */
} FnCall_826A6AC0;

extern int fn_826957D0(FnCall_826A6AC0 *call, int index);
extern void fn_82696D38(String_826A6AC0 *out, int value, int env, int precision, int flags);
extern int fn_82697610(int value, int env);
extern int fn_82F6A3E8(const char *text, char **end, int radix);
extern double fn_826BC950(void);
extern void fn_82681898(int result, double value);
extern void fn_8269A1F0(int result, int value);
extern void fn_826944C8(StringNode_826A6AC0 *node);

void fn_826A6AC0(FnCall_826A6AC0 *call)
{
    String_826A6AC0 text;
    char *end;
    int radix;
    int skip;
    int value;
    char *start;
    int env;
    unsigned int size;
    StringNode_826A6AC0 *node;
    int argument;

    if (call->argCount < 1)
        return;
    env = call->env;
    radix = 10;
    argument = fn_826957D0(call, 0);
    fn_82696D38(&text, argument, env, -1, 0);
    skip = 0;
    size = text.node->size;
    if (call->argCount >= 2) {
        radix = fn_82697610(fn_826957D0(call, 1), call->env);
        if (radix < 2 || radix > 36)
            goto not_a_number;
    } else if (size > 1 && text.node->data[0] == '0') {
        skip = 1;
        radix = 8;
        if (text.node->data[1] == 'x' || text.node->data[1] == 'X') {
            radix = 16;
            skip = 2;
        }
    }
    start = text.node->data;
    end = 0;
    value = fn_82F6A3E8(text.node->data + skip, &end, radix);
    if (start + skip == end && radix != 8) {
    not_a_number:
        fn_82681898(call->result, fn_826BC950());
    } else {
        fn_8269A1F0(call->result, value);
    }
    node = text.node;
    if (--node->refCount == 0)
        fn_826944C8(node);
}
