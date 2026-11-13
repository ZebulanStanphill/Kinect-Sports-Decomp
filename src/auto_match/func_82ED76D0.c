extern unsigned char *lbl_8324E3B0;

void fn_82ED76D0(int unused, unsigned char *d, short *s, int ds, int ss)
{
    int i;
    for (i = 0; i < 8; i++) {
        d[0] = lbl_8324E3B0[d[0] + s[0]];
        d[1] = lbl_8324E3B0[d[1] + s[1]];
        d[2] = lbl_8324E3B0[d[2] + s[2]];
        d[3] = lbl_8324E3B0[d[3] + s[3]];
        d += ds;
        s += ss;
    }
}
