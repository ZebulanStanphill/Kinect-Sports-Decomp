/* Initialises the avatar system: checks the arguments, allocates its 3 MB heap, sets up the
   callback table and hands everything to XamAvatarInitialize. Undone by fn_82A81F68 on failure. */
typedef struct Callbacks_82A81FE8 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
} Callbacks_82A81FE8;

extern unsigned char lbl_8322344C;
extern unsigned char lbl_8322344D;
extern void *lbl_83223450;
extern unsigned int lbl_832234AC;
extern int lbl_8315FA80;

extern void *fn_8265C940(unsigned int size, unsigned int attributes);
extern void fn_82A86B30(Callbacks_82A81FE8 *callbacks);
extern int fn_82A84B10(void);
extern int fn_82A84D98(int device, unsigned int size, void *heap);
extern int XamAvatarInitialize(unsigned int coreCount, int mode, unsigned int flags,
                               Callbacks_82A81FE8 *callbacks, void *heap, unsigned int heapSize);
extern int fn_82A82458(unsigned int value);
extern void fn_82A86220(unsigned int value);
extern int fn_82A86178(unsigned int value);
extern void fn_82A81F68(void);

int fn_82A81FE8(int mode, unsigned int options, unsigned int jointBufferCount, unsigned int count,
                unsigned int value)
{
    Callbacks_82A81FE8 callbacks;
    int hr;

    if (lbl_8322344C != 0) {
        return 0x8000ffff;
    }
    if ((mode != 0 && mode != 1) || jointBufferCount >= 6 ||
        ((options & 1) != 0 && (count < 2 || count > 4 || value == 0))) {
        return 0x80070057;
    }
    lbl_83223450 = fn_8265C940(0x300000, 0x20980000);
    if (lbl_83223450 == 0) {
        hr = 0x8007000e;
        goto fail;
    }
    lbl_832234AC = 4;
    lbl_8315FA80 = mode;
    fn_82A86B30(&callbacks);
    if ((options & 2) != 0) {
        hr = fn_82A84D98(fn_82A84B10(), 0x300000, lbl_83223450);
        if (hr < 0) {
            goto fail;
        }
    }
    hr = XamAvatarInitialize(4, mode, jointBufferCount, &callbacks, lbl_83223450, 0x300000);
    if (hr < 0) {
        goto fail;
    }
    if (value != 0) {
        hr = fn_82A82458(value);
    }
    if (hr < 0) {
        goto fail;
    }
    lbl_8322344C = 1;
    if ((options & 1) != 0) {
        fn_82A86220(count);
        hr = fn_82A86178(value);
        lbl_8322344D = hr >= 0;
    }
    if (hr < 0) {
    fail:
        fn_82A81F68();
    }
    return hr;
}
