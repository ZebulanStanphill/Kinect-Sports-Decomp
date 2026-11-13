typedef struct P_82ED7D48 {
    char pad[0x2d0];
    unsigned count;
    char pad2[0x1e54 - 0x2d4];
    char *ents;
} P_82ED7D48;

extern void fn_82F2ACF0(P_82ED7D48 *p, char *e, int x, int y, int notFirstI, int notFirstS, int both);

void fn_82ED7D48(P_82ED7D48 *p, unsigned a, unsigned b, int idx, int x, int y)
{
    char *e = p->ents + idx * 0x114;
    unsigned s;
    unsigned i;

    for (s = a; s < b; s++) {
        int sn = s != 0;
        for (i = 0; i < p->count; i++) {
            fn_82F2ACF0(p, e, x, y, i != 0, sn, i != 0 && sn);
            e += 0x114;
            x += 0x60;
            y += 0x600;
        }
    }
}
