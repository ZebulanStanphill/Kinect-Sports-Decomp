extern void *memcpy(void *d, const void *s, unsigned int n);
extern char lbl_82024D24[];

typedef struct {
    void *vt;
    int x4;
    unsigned char data[0x2a];
} Obj;

Obj *fn_828D4D10(Obj *o, int x, const void *src)
{
    o->x4 = x;
    o->vt = lbl_82024D24;
    if (src != 0) {
        memcpy(o->data, src, 0x2a);
    }
    return o;
}
