typedef struct Block_8267A1C0 {
    int pad0;
    unsigned int refs;      /* 0x04 */
} Block_8267A1C0;

typedef struct Handle_8267A1C0 {
    Block_8267A1C0 *block;  /* 0x00 */
    void *mapped;           /* 0x04 */
    int owned;              /* 0x08 */
} Handle_8267A1C0;

extern char lbl_831E7B5C[];
extern void *lbl_831E7B50;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_8281B738(void *heap, void *mapped);
extern void fn_8265CA20(void *p);
extern void fn_8262FEC8(Block_8267A1C0 *block);

void fn_8267A1C0(Handle_8267A1C0 *self)
{
    if (self->block != 0) {
        if (self->mapped != 0) {
            if (self->block->refs == 1) {
                RtlEnterCriticalSection(lbl_831E7B5C);
                fn_8281B738(lbl_831E7B50, self->mapped);
                RtlLeaveCriticalSection(lbl_831E7B5C);
                self->mapped = 0;
                fn_8265CA20(self->block);
                self->block = 0;
            } else {
                fn_8262FEC8(self->block);
            }
        } else if (self->owned != 0) {
            self->owned = 0;
            self->block = 0;
        } else {
            fn_8262FEC8(self->block);
            self->block = 0;
        }
    }
}
