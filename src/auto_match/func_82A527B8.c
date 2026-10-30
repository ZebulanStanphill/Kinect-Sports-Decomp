typedef struct { char pad[0x58]; unsigned int n; char pad2[0x6e - 0x5c]; unsigned short fmt; } Src;
typedef struct { char pad[0xc]; unsigned int fmt; } Req;
typedef struct { Src *src; char pad[0x164 - 4]; int conv; char pad2[0x170 - 0x168]; unsigned int n; char pad3[0x18c - 0x174]; unsigned short fmt; } P;

void fn_82A527B8(P *p, Req *r)
{
    Src *s = p->src;
    p->conv = 0;
    p->n = s->n;
    p->fmt = s->fmt;
    if (s->fmt == 0x10)
        return;
    if (r->fmt != 0x10)
        return;
    p->conv = 1;
    p->fmt = 0x10;
    p->n = s->n > 2 ? 2 : s->n;
    if (p->n != s->n)
        return;
    p->conv = 0;
    p->fmt = s->fmt;
}
