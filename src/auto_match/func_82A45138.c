typedef struct Desc_82A45138 {
    int type;
    int size;
    unsigned char count;
    char pad9[3];
} Desc_82A45138;

unsigned int fn_82A45138(unsigned int n, Desc_82A45138 *descs)
{
    unsigned int header = (n * 0x60 + 0x8f) & ~0x7f;
    unsigned int i;
    unsigned int total = 0;

    for (i = 0; i < n; i++)
        total += (descs[i].size + 0x80) * descs[i].count * 2;
    return total + header;
}
