typedef struct Iface_82A8BC78 Iface_82A8BC78;
typedef struct IfaceVtbl_82A8BC78 {
    void *f0;
    void (*Release)(Iface_82A8BC78 *self);
} IfaceVtbl_82A8BC78;
struct Iface_82A8BC78 {
    IfaceVtbl_82A8BC78 *vt;
};

typedef struct Anim_82A8BC78 {
    char pad0[8];
    Iface_82A8BC78 iface;   /* 0x08 */
    char padc[0x10 - 0xc];
    char header[0x1c];      /* 0x10 */
    char data[4];           /* 0x2c */
} Anim_82A8BC78;

extern void *fn_8265C940(unsigned int size, unsigned int attributes);
extern void fn_8265C990(void *p, unsigned int attributes);
extern Anim_82A8BC78 *fn_82A8BBF8(void *mem, unsigned int size, void *buffer);
extern int XamAvatarLoadAnimation(int a, int b, void *data, void *header);

/* allocates a buffer and an animation object around it and loads the
   avatar animation into it; on failure releases what was created */
int fn_82A8BC78(int a, int b, unsigned int size, Anim_82A8BC78 **out)
{
    int hr;
    void *buffer;
    void *mem;
    Anim_82A8BC78 *anim;

    *out = 0;
    buffer = fn_8265C940(size, 0x20980000);
    if (buffer == 0) {
        hr = 0x8007000e;
        goto fail;
    }
    mem = fn_8265C940(0x59c0, 0x20980000);
    anim = mem ? fn_82A8BBF8(mem, size, buffer) : 0;
    *out = anim;
    if (anim == 0) {
        hr = 0x8007000e;
        goto fail;
    }
    hr = XamAvatarLoadAnimation(a, b, anim->data, anim->header);
    if (hr < 0)
        goto fail;
    return hr;
fail:
    if (*out != 0) {
        (*out)->iface.vt->Release(&(*out)->iface);
        *out = 0;
    } else if (buffer != 0) {
        fn_8265C990(buffer, 0x20980000);
    }
    return hr;
}
