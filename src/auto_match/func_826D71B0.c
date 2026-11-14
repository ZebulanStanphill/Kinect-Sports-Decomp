typedef struct Key_826D7098 Key_826D7098;

typedef struct {
    unsigned int type;
    Key_826D7098 *key;
} TypedKey_826D71B0;

unsigned char fn_826D7098(Key_826D7098 *x, Key_826D7098 *y);

unsigned char fn_826D71B0(unsigned int type, Key_826D7098 *key, const TypedKey_826D71B0 *other)
{
    if (type != other->type)
        return 0;
    return fn_826D7098(key, other->key);
}
