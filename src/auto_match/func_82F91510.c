/* Constructor: vtable lbl_8216BAA8, a zeroed word at +4 and a zeroed byte at +8. */
struct Object_82F91510 {
    void *vtable;
    int a;
    unsigned char b;
};

extern unsigned int lbl_8216BAA8;

struct Object_82F91510 *fn_82F91510(struct Object_82F91510 *p)
{
    p->vtable = &lbl_8216BAA8;
    p->a = 0;
    p->b = 0;
    return p;
}
