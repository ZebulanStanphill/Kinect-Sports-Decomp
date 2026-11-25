typedef struct Matrix_8252B998 {
    float m[16];
} Matrix_8252B998;

typedef struct Slot_8252B998 {
    unsigned __int64 lo;
    unsigned __int64 hi;
} Slot_8252B998;

typedef struct Context_8252B998 {
    char pad0[0x40];
    int height; /* 0x40 */
    int width;  /* 0x44 */
    char pad48[0x160];
    void *renderer; /* 0x1a8 */
} Context_8252B998;

typedef struct Target_8252B998 Target_8252B998;

typedef struct Batch_8252B998 {
    int pass;   /* 0x00 */
    int count;  /* 0x04 */
    int *items; /* 0x08 */
} Batch_8252B998;

typedef struct TargetVtbl_8252B998 {
    void *slots[4];
    void (*Update)(Target_8252B998 *self, Matrix_8252B998 *matrix, int width, int height,
                   float scale); /* 0x10 */
} TargetVtbl_8252B998;

struct Target_8252B998 {
    TargetVtbl_8252B998 *vt; /* 0x00 */
    char pad4[0x118];
    Batch_8252B998 batch; /* 0x11c */
};

typedef struct Owner_8252B998 {
    char pad0[0x4c];
    Context_8252B998 *context; /* 0x4c */
    char pad50[0xa0];
    Matrix_8252B998 matrix; /* 0xf0 */
    char pad130[0xac];
    int countdown; /* 0x1dc */
    char pad1e0[0x10];
    Slot_8252B998 slots[2]; /* 0x1f0 */
    char pad210[0x6b0];
    Target_8252B998 *target; /* 0x8c0 */
    char pad8c4[0x278];
    float scale; /* 0xb3c */
} Owner_8252B998;

extern const Slot_8252B998 lbl_82196290;

extern void fn_82553A18(void *renderer, int item, Matrix_8252B998 matrix, int pass);

void fn_8252B998(Owner_8252B998 *self)
{
    Target_8252B998 *target;
    void *renderer;
    Matrix_8252B998 matrix;
    Batch_8252B998 *batch;
    int i;

    target = self->target;
    if (target != 0) {
        target->vt->Update(target, &self->matrix, self->context->width, self->context->height, self->scale);
        renderer = self->context->renderer;
        matrix = self->matrix;
        batch = &target->batch;
        for (i = 0; i < batch->count; i++) {
            int item;

            item = batch->items[i];
            fn_82553A18(renderer, item, matrix, batch->pass);
        }
    }
    if (self->countdown > 0) {
        self->countdown--;
        if (self->countdown == 0) {
            for (i = 0; i < 2; i++) {
                self->slots[i] = lbl_82196290;
            }
        }
    }
}
