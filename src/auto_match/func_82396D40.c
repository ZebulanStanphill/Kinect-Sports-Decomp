extern void *fn_8265C9E0(unsigned int size);
extern void fn_8236D8F8(void *self, void *a, void *b);
extern void fn_823A09C0(void *p);
extern char lbl_821B5278[];
extern char lbl_821B52C8[];

typedef struct Obj {
    void *vt;
    char pad[0x64];
    void *vt2;
    char pad2[0x1c];
    char sub[8];
} Obj;

Obj *fn_82396D40(void *a, void *b)
{
    Obj *o = (Obj *)fn_8265C9E0(0x90);
    if (o != 0) {
        fn_8236D8F8(o, b, a);
        o->vt = lbl_821B5278;
        o->vt2 = lbl_821B52C8;
        fn_823A09C0(o->sub);
        return o;
    }
    return 0;
}
