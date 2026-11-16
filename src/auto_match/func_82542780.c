extern const float lbl_8218C960[];

typedef struct Object_82542780 {
    char padding[0x10];
    unsigned __int64 flags; /* 0x10 */
    char padding18[0x28ec];
    float value; /* 0x2904 */
    char padding2908[0x2c];
    unsigned int state; /* 0x2934 */
} Object_82542780;

static __forceinline void SetFlags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82542780(Object_82542780 **self)
{
    Object_82542780 *object = *self;
    object->value = lbl_8218C960[7];
    SetFlags(&object->flags, 0x8000000);
    object = *self;
    object->state |= 4;
    SetFlags(&object->flags, 0x800);
}
