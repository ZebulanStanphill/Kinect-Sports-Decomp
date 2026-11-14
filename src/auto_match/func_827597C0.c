typedef struct Key_82759708 Key_82759708;

typedef struct {
    unsigned int type;
    Key_82759708 *key;
} TypedKey_827597C0;

unsigned char fn_82759708(Key_82759708 *x, Key_82759708 *y);

unsigned char fn_827597C0(unsigned int type, Key_82759708 *key, const TypedKey_827597C0 *other)
{
    if (type != other->type)
        return 0;
    return fn_82759708(key, other->key);
}
