typedef struct Key_8278ACC8 Key_8278ACC8;

typedef struct {
    unsigned int type;
    Key_8278ACC8 *key;
} TypedKey_8278ADA0;

unsigned char fn_8278ACC8(Key_8278ACC8 *x, Key_8278ACC8 *y);

unsigned char fn_8278ADA0(unsigned int type, Key_8278ACC8 *key, const TypedKey_8278ADA0 *other)
{
    if (type != other->type)
        return 0;
    return fn_8278ACC8(key, other->key);
}
