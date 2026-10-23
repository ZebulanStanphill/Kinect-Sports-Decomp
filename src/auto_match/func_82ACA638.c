extern unsigned char fn_82ACA5E0(void *o);

typedef struct {
    int a;
    int b;
    unsigned int pad : 18;
    unsigned int kind : 7;
    unsigned int rest : 7;
} Obj;

int fn_82ACA638(Obj *o)
{
    unsigned int k;

    if (!fn_82ACA5E0(o)) {
        return 0;
    }
    k = o->kind;
    return k < 0x19 || k > 0x1c;
}
