typedef struct Key_82930988 {
    int words[2];
} Key_82930988;

typedef struct Obj_82930988 {
    int pad0;
    int type;               /* 0x04 */
    int pad8[2];
    Key_82930988 key;       /* 0x10 */
} Obj_82930988;

extern int fn_82930800(Key_82930988 *a, Key_82930988 *b);

static __forceinline int SameType(Obj_82930988 *self, Obj_82930988 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82930988(Obj_82930988 *self, Obj_82930988 *other)
{
    if (!SameType(self, other))
        return 0;
    return fn_82930800(&self->key, &other->key) != 0;
}
