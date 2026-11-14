typedef struct Globals_82269BB8 {
    void *device;
    char pad4[0x45 - 4];
    unsigned char enabled;
    char pad46[0x4c - 0x46];
    unsigned char dirty;
    char pad4d[0x6c - 0x4d];
} Globals_82269BB8;

typedef struct Self_82269BB8 {
    char pad0[0x364];
    int mode;
} Self_82269BB8;

extern Globals_82269BB8 lbl_83265988;
extern void fn_8225C590(void);
extern int fn_823AB470(void *device);
extern int fn_822750C8(void);
extern void fn_82A1C0C8(int target, unsigned int flags);

void fn_82269BB8(Self_82269BB8 *self)
{
    int ready;
    fn_8225C590();
    ready = 0;
    if (self->mode == 0 && lbl_83265988.enabled && lbl_83265988.device != 0 && fn_823AB470(lbl_83265988.device) != 0)
        ready = 1;
    if (self->mode == 0 && ready) {
        lbl_83265988.dirty = 1;
        fn_82A1C0C8(fn_822750C8(), 0x80000);
    } else {
        lbl_83265988.dirty = 1;
        fn_82A1C0C8(fn_822750C8(), 0x1000000);
    }
}
