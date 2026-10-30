typedef struct { int pad; int refs; } Ref;
typedef struct { char pad[0xc]; Ref *r; char pad2[0x24 - 0x10]; unsigned short serial; } P;
extern void fn_8267C498(Ref *r);

void fn_827905B0(P *p, Ref *r)
{
    Ref **d = &p->r;
    if (r)
        r->refs++;
    if (*d)
        fn_8267C498(*d);
    *d = r;
    p->serial++;
}
