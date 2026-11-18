typedef struct BlendEntry_826776A0 {
    int sourceBlend;      /* 0x00 */
    int destinationBlend; /* 0x04 */
    int blendOp;          /* 0x08 */
} BlendEntry_826776A0;

typedef struct SeparateBlendEntry_826776A0 {
    int sourceBlend;           /* 0x00 */
    int alphaSourceBlend;      /* 0x04 */
    int destinationBlend;      /* 0x08 */
    int blendOp;               /* 0x0c */
    int alphaDestinationBlend; /* 0x10 */
    int alphaBlendOp;          /* 0x14 */
} SeparateBlendEntry_826776A0;

typedef struct Material_826776A0 {
    char pad0[0x14];
    unsigned int flags; /* 0x14 */
    char pad18[8];
    int blendMode; /* 0x20 */
    char pad24[0xd8 - 0x24];
    void *device; /* 0xd8 */
} Material_826776A0;

extern BlendEntry_826776A0 lbl_83154D88[15];
extern SeparateBlendEntry_826776A0 lbl_83154E40[15];

extern void fn_82637EC0(void *device, int enable);
extern void fn_82637D70(void *device, int value);
extern void fn_82637DE0(void *device, int value);
extern void fn_82637E50(void *device, int value);
extern void fn_82637BC0(void *device, int value);
extern void fn_82637C50(void *device, int value);
extern void fn_82637CE0(void *device, int value);

void fn_826776A0(Material_826776A0 *self, int mode)
{
    mode = (unsigned int)mode < 0xf ? mode : 0;
    if (self->device != 0 && self->blendMode != mode) {
        if (self->flags & 2) {
            fn_82637EC0(self->device, 1);
            fn_82637D70(self->device, lbl_83154E40[mode].alphaSourceBlend);
            fn_82637DE0(self->device, lbl_83154E40[mode].alphaDestinationBlend);
            fn_82637E50(self->device, lbl_83154E40[mode].alphaBlendOp);
            fn_82637BC0(self->device, lbl_83154E40[mode].sourceBlend);
            fn_82637C50(self->device, lbl_83154E40[mode].destinationBlend);
            fn_82637CE0(self->device, lbl_83154E40[mode].blendOp);
        } else {
            fn_82637EC0(self->device, 1);
            fn_82637D70(self->device, 0);
            fn_82637DE0(self->device, 1);
            fn_82637E50(self->device, 7);
            fn_82637BC0(self->device, lbl_83154D88[mode].sourceBlend);
            fn_82637C50(self->device, lbl_83154D88[mode].destinationBlend);
            fn_82637CE0(self->device, lbl_83154D88[mode].blendOp);
        }
        self->blendMode = mode;
    }
}
