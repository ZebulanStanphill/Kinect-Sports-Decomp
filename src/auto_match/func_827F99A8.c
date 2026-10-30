typedef struct { char pad[0x1c]; unsigned char *buf; char pad2[0x32 - 0x20]; unsigned short len; } P;

void fn_827F99A8(P *p)
{
    unsigned char *b = p->buf, *e;
    if (b == 0)
        return;
    e = b + p->len;
    for (; b < e; b++)
        *b = ~*b;
}
