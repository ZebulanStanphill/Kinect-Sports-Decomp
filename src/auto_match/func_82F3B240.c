typedef unsigned __int64 U64;

int fn_82F3B240(int p, U64 *a, U64 *b)
{
    U64 v;
    if (*(unsigned int *)(p + 0xc) == 0) {
        return 0xc00d36b6;
    }
    v = (U64)(unsigned int)(*(unsigned int *)(p + 0x6c) * 6) + 0x38;
    if (a != 0) {
        if (*(unsigned int *)(p + 0x4c) & 1) {
            *a = v;
        } else {
            *a = 0x38;
        }
    }
    if (b != 0) {
        *b = v;
    }
    *(U64 *)(p + 0x20) = v;
    return 0;
}
