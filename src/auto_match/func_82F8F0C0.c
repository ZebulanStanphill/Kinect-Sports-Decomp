// Kinect Sports retail 4D5308C9, function 0x82F8F0C0 (72 bytes).
// Constructor: base constructor fn_82F93A10, then vtable lbl_8216BAB0 and a zeroed word at +0x438.
extern unsigned int lbl_8216BAB0;
extern void *fn_82F93A10(void *);

void **fn_82F8F0C0(void **p)
{
    fn_82F93A10(p);
    *p = &lbl_8216BAB0;
    p[0x10e] = 0;
    return p;
}
