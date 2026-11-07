typedef struct S_827EF9F8 {
    char pad0[0x32];
    unsigned short count;
    char pad1[0x84 - 0x34];
    char *base;
} S_827EF9F8;

extern S_827EF9F8 *fn_827F3C28(int p);

int *fn_827EF9F8(int p, unsigned short idx)
{
    int off = (fn_827F3C28(p)->count * 12 + idx) * 4;
    return (int *)(fn_827F3C28(p)->base + off);
}
