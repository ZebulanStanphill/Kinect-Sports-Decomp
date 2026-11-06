void fn_82820EF8(void *p, unsigned int size)
{
    unsigned int v;
    unsigned __int64 w;
    switch (size) {
    case 2:
        *(unsigned short *)p = *(unsigned short *)p << 8 | *(unsigned short *)p >> 8;
        break;
    case 4:
        v = *(unsigned int *)p;
        *(unsigned int *)p = ((v & 0xff0000 | v >> 16) >> 8) | ((v << 16 | v & 0xff00) << 8);
        break;
    case 8:
        w = *(unsigned __int64 *)p;
        *(unsigned __int64 *)p =
            (((w & 0xff000000000000 | w >> 16) >> 16 | w & 0xff0000000000) >> 16 | w & 0xff00000000) >> 8 |
            (((w << 16 | w & 0xff00) << 16 | w & 0xff0000) << 16 | w & 0xff000000) << 8;
        break;
    }
}
