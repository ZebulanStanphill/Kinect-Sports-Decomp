extern unsigned int fn_8236C4A8(void *p, int i);

typedef struct {
    int pad0;
    void *p;
} Obj;

unsigned char fn_8236D818(Obj *o)
{
    void *p = o->p;
    return (fn_8236C4A8(p, 0) != 0 && fn_8236C4A8(p, 1) != 0) || fn_8236C4A8(o->p, 0) == 2;
}
