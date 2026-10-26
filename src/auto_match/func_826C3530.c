typedef struct Hdr { int a; int b; unsigned int refs; int c; } Hdr;
typedef struct Ref { Hdr *h; int x; unsigned char flag; } Ref;

void fn_826C3530(Ref *r, char *data)
{
    Hdr *h = (Hdr *)(data - 0x10);
    r->h = h;
    r->flag = 0;
    if (h != 0)
        h->refs = (h->refs + 1) & 0x8fffffff;
    r->x = 0;
}
