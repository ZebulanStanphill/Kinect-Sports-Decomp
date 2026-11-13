extern int fn_82E5BF90(char *p, __int64 *a, __int64 *b);

int fn_82E5C900(char *p, __int64 *a, __int64 *b)
{
    if (!*(void **)(p + 12)) return 0xc00d36b6;
    if (*(unsigned int *)(p + 0x88) & 0x80000000) {
        if (a) *a = 0;
        if (b) *b = 0;
        return 0;
    }
    return fn_82E5BF90(p, a, b);
}
