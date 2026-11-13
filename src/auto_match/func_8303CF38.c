// Kinect Sports retail 4D5308C9, function 0x8303CF38 (84 bytes).
// Forwards to vtable slot 0xB4 of dev with 0, 0.0f, bits 3..7 of the word at o+0x14 and fn_8302BBA8(o).
typedef void (*Fn_8303CF38)(void *dev, int a, int b, float f, unsigned int bits, int c);

struct Dev_8303CF38 {
    Fn_8303CF38 *vt;
};

extern int fn_8302BBA8(int o);

void fn_8303CF38(int o, struct Dev_8303CF38 *dev, int a)
{
    unsigned int bits = (*(unsigned int *)(o + 0x14) >> 3) & 0x1f;
    dev->vt[0xB4 / 4](dev, a, 0, 0.0f, bits, fn_8302BBA8(o));
}
