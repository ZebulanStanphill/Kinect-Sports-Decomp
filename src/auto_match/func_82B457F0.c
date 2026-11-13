typedef struct {
    int f0;
    int type;
    int id;
    void *data;
} Desc_82B457F0;

extern unsigned char fn_82B457C0(void *self, int id, int *width, int *height);
extern unsigned char fn_82B45740(void *self, Desc_82B457F0 *desc, int *width, int *height);

unsigned char fn_82B457F0(void *self, Desc_82B457F0 *desc, int *size)
{
    unsigned char ok;
    int width;
    int height;

    if (desc->type == 1) {
        if (desc->data != 0) {
            ok = 0;
        } else {
            ok = fn_82B457C0(self, desc->id, &width, &height);
        }
    } else {
        ok = fn_82B45740(self, desc, &width, &height);
    }
    if (!ok) {
        return 0;
    }
    *size = width * height;
    return 1;
}
