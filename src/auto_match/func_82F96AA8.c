// Kinect Sports retail 4D5308C9, function 0x82F96AA8 (84 bytes).
// Constructor: base constructor fn_82F96B00, then vtable lbl_8216C3E0, a zeroed word at +4 and a zeroed byte at +8.
struct Object_82F96AA8 {
    void *vtable;
    int a;
    unsigned char b;
};

extern unsigned int lbl_8216C3E0;
extern void *fn_82F96B00(void *);

struct Object_82F96AA8 *fn_82F96AA8(struct Object_82F96AA8 *p)
{
    fn_82F96B00(p);
    p->vtable = &lbl_8216C3E0;
    p->a = 0;
    p->b = 0;
    return p;
}
