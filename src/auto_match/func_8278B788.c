extern unsigned int fn_8268AF70(const char *, unsigned int, unsigned int);

unsigned int fn_8278B788(char *self)
{
    unsigned int values[4];
    unsigned int hash;
    int index = 16;
    unsigned int first;
    unsigned int second;
    unsigned int tagged;

    values[0] = *(unsigned int *)(self + 0x40);
    values[1] = *(unsigned int *)(self + 0x44);
    values[2] = *(unsigned int *)(self + 0x48);
    values[3] = *(unsigned char *)(self + 0x4c);
    hash = 0x1505;
    do {
        hash = ((unsigned char *)values)[--index] + hash * 0x1003f;
    } while (index != 0);
    tagged = *(unsigned int *)(self + 0x38);
    first = fn_8268AF70((char *)(tagged & ~3u) + 8, *(unsigned int *)(tagged & ~3u) & 0x7fffffff, 0x1505);
    first ^= hash;
    tagged = *(unsigned int *)(self + 0x3c);
    second = fn_8268AF70((char *)(tagged & ~3u) + 8, *(unsigned int *)(tagged & ~3u) & 0x7fffffff, 0x1505);
    return second ^ first;
}
