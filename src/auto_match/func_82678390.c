typedef struct {
    char pad[0x58];
    unsigned int v58;
    char rest[0x130 - 0x5C];
} Buf;

extern void fn_82648AD8(int a, Buf *b);

int fn_82678390(int param_1, unsigned int *param_2)
{
    Buf buf;

    if (*(char *)(param_1 + 0x10) == '\0') {
        *param_2 = *param_2 | 0x40000;
        return 0;
    }
    param_2[2] = 0x36b;
    *param_2 = 0x8f30c;
    param_2[1] = 0x1b;
    if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
        *param_2 = 0xcf30c;
    }
    fn_82648AD8(*(int *)(param_1 + 0xd8), &buf);
    param_2[3] = buf.v58;
    return 1;
}
