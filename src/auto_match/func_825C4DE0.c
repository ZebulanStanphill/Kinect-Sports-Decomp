typedef struct RenderState_825C4DE0 {
    unsigned int pad0 : 25;
    unsigned int mode : 3; /* bits 4-6 */
    unsigned int pad1 : 4;
} RenderState_825C4DE0;

typedef struct Device_825C4DE0 {
    unsigned char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    unsigned char pad18[0x2934 - 0x18];
    RenderState_825C4DE0 state; /* 0x2934 */
} Device_825C4DE0;

typedef struct Node_825C4DE0 {
    void *item;                 /* 0x00 */
    int pad4;                   /* 0x04 */
    struct Node_825C4DE0 *next; /* 0x08 */
} Node_825C4DE0;

typedef struct Owner_825C4DE0 {
    unsigned char pad0[0xc];
    Node_825C4DE0 *head; /* 0x0C */
} Owner_825C4DE0;

extern Device_825C4DE0 *lbl_8320A898;

void fn_825F33B0(void *item, float time, int index);

static __forceinline void MarkDirty(unsigned __int64 *dirty, unsigned __int64 flags)
{
    *dirty |= flags;
}

static __forceinline void SetMode(Device_825C4DE0 *device, unsigned int mode)
{
    device->state.mode = mode;
    MarkDirty(&device->dirty, 0x800);
    MarkDirty(&device->dirty, 0x20000);
}

void fn_825C4DE0(Owner_825C4DE0 *self, float time, int index)
{
    unsigned int savedMode;
    Node_825C4DE0 *node;

    savedMode = lbl_8320A898->state.mode;
    SetMode(lbl_8320A898, 6);
    for (node = self->head; node != 0; node = node->next) {
        fn_825F33B0(node->item, time, index);
    }
    SetMode(lbl_8320A898, savedMode);
}
