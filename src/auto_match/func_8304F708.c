typedef struct Interface_8304F708 {
    const void *vt; /* 0x0 */
} Interface_8304F708;

typedef struct Object_8304F708 {
    const void *vt;            /* 0x0 */
    Interface_8304F708 client; /* 0x4 */
} Object_8304F708;

typedef struct Params_8304F708 {
    unsigned int heapSize; /* 0x0 */
} Params_8304F708;

extern const char lbl_8217D360[];
extern const char lbl_8217DD70[];
extern const char lbl_8217DD88[];
extern int lbl_831BC978;
extern Interface_8304F708 *lbl_83265044;
extern unsigned char fn_82FA4EB8(void);
extern int fn_82FA5538(int arg, unsigned int a, unsigned int b, int mode, int flags);
extern void *fn_82FA5060(int heap, int size);
extern void fn_82FA57F0(int heap);

Interface_8304F708 *fn_8304F708(Params_8304F708 *params)
{
    Object_8304F708 *object;

    if (!fn_82FA4EB8()) {
        return 0;
    }
    if (lbl_83265044 != 0) {
        return lbl_83265044;
    }
    if (lbl_831BC978 == -1) {
        lbl_831BC978 = fn_82FA5538(0, params->heapSize, 0x20, 1, 0);
        if (lbl_831BC978 == -1) {
            return 0;
        }
    }
    object = (Object_8304F708 *)fn_82FA5060(lbl_831BC978, 8);
    if (object != 0) {
        Interface_8304F708 *client = &object->client;

        /* The interface base class is constructed first, then the object sets both vtables. */
        client->vt = lbl_8217D360;
        object->vt = lbl_8217DD88;
        object->client.vt = lbl_8217DD70;
        lbl_83265044 = &object->client;
    } else {
        fn_82FA57F0(lbl_831BC978);
    }
    return lbl_83265044;
}
