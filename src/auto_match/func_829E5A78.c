// Kinect Sports retail 4D5308C9, function 0x829E5A78 (56 bytes).
// Getter: copies the two words at +4 and +8 to the out-pointers; E_INVALIDARG if either is null.

typedef struct {
    int unk0;
    int a;
    int b;
} Object_829E5A78;

int fn_829E5A78(Object_829E5A78 *o, int *a, int *b)
{
    if (a == 0)
        return 0x80070057;
    if (b == 0)
        return 0x80070057;
    *a = o->a;
    *b = o->b;
    return 0;
}
