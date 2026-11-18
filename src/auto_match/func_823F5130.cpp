struct Control_823F5130 {
    char pad[0x14];
    int offset0; /* 0x14 */
    int offset1; /* 0x18 */
    int offset2; /* 0x1c */
    int offset3; /* 0x20 */
    int offset4; /* 0x24 */
};

struct Object_823F5130 {
    int pad0[2];
    int offset0; /* 0x08 */
    int offset1; /* 0x0c */
    int offset2; /* 0x10 */
    int offset3; /* 0x14 */
    int offset4; /* 0x18 */
};

struct Shared_823F5130 {
    Object_823F5130 *px;   /* 0x0 */
    Control_823F5130 *rep; /* 0x4 */

    Shared_823F5130() : px(0), rep(0)
    {
    }
};

extern "C" void fn_822315A0(void *control);
extern "C" unsigned char fn_8223AAC0(void *control);
extern "C" Control_823F5130 *fn_823FC038(void *memory, Shared_823F5130 *a, Shared_823F5130 *b,
                                         Shared_823F5130 *c, Shared_823F5130 *d, Shared_823F5130 *e);
extern "C" void *fn_8265C9E0(int size);

/* Allocates the control block and object in one piece from five shared arguments. */
extern "C" Shared_823F5130 fn_823F5130(Shared_823F5130 *a, Shared_823F5130 *b, Shared_823F5130 *c,
                                       Shared_823F5130 *d, Shared_823F5130 *e)
{
    void *memory = fn_8265C9E0(0x50);
    Control_823F5130 *control;
    Object_823F5130 *object;

    if (memory != 0) {
        control = fn_823FC038(memory, a, b, c, d, e);
    } else {
        control = 0;
    }
    Shared_823F5130 out;
    object = (Object_823F5130 *)((char *)control + 0xc);
    object->offset0 = 0;
    object->offset1 = 0x10;
    object->offset2 = 0x14;
    object->offset3 = 0x18;
    object->offset4 = 0x1c;
    if (control != 0) {
        if (fn_8223AAC0(control) != 0) {
            if (out.rep != 0) {
                fn_822315A0(out.rep);
            }
            out.rep = control;
            out.px = object;
        }
        fn_822315A0(control);
    }
    if (a->rep != 0) {
        fn_822315A0(a->rep);
    }
    if (b->rep != 0) {
        fn_822315A0(b->rep);
    }
    if (c->rep != 0) {
        fn_822315A0(c->rep);
    }
    if (d->rep != 0) {
        fn_822315A0(d->rep);
    }
    if (e->rep != 0) {
        fn_822315A0(e->rep);
    }
    return out;
}
