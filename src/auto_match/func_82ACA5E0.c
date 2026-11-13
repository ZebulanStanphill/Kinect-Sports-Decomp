typedef struct Rec_82ACA5E0 { int pad[2]; unsigned int hi : 18; unsigned int op : 7; unsigned int lo : 7; } Rec_82ACA5E0;
unsigned char fn_82ACA5E0(Rec_82ACA5E0 *p)
{
    unsigned char r = 0;
    unsigned int id = p->op;
    unsigned char a = id >= 1 && id <= 0x1f;
    if (a) { if (id >= 0x10 && (id <= 0x18 || id == 0x1d)) r = 0; else r = 1; }
    return r;
}
