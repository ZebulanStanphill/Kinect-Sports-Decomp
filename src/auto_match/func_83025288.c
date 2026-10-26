typedef struct O O;
typedef struct { void *s[58]; void (*query)(O *o, int a, void *out, int b); } OVt;
struct O { OVt *vt; };
unsigned char fn_83025288(O **pp)
{
    O *o = *pp;
    unsigned int r[4];
    if (o == 0)
        return 0;
    o->vt->query(o, 0, r, 0);
    return r[0] == 0xfffffffe;
}
