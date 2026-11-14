typedef struct Key_82766C88 Key_82766C88;

typedef struct {
    unsigned int type;
    Key_82766C88 *key;
} TypedKey_82766D68;

unsigned char fn_82766C88(Key_82766C88 *x, Key_82766C88 *y);

unsigned char fn_82766D68(unsigned int type, Key_82766C88 *key, const TypedKey_82766D68 *other)
{
    if (type != other->type)
        return 0;
    return fn_82766C88(key, other->key);
}
