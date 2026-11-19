typedef struct Part_825B05A0 {
    char pad0[0x2c];
    int vertexCount; /* 0x2c */
    void *buffer;    /* 0x30 */
} Part_825B05A0;

typedef struct Slot_825B05A0 {
    int pad0;
    Part_825B05A0 *part; /* 0x04 */
    char pad8[0x20 - 0x8];
} Slot_825B05A0;

typedef struct Model_825B05A0 {
    char pad0[0x110];
    void *packer; /* 0x110 */
    char pad114[0x128 - 0x114];
    Slot_825B05A0 *slots;   /* 0x128 */
    unsigned int slotCount; /* 0x12c */
} Model_825B05A0;

typedef struct Instance_825B05A0 {
    Model_825B05A0 *model; /* 0x0 */
} Instance_825B05A0;

typedef struct Stats_825B05A0 {
    char pad0[0x20];
    int bytes; /* 0x20 */
} Stats_825B05A0;

extern void **fn_8265CA60(unsigned int size);
extern void fn_8265CAA0(void *memory);
extern int fn_8284E5C0(void *packer, void **buffers, int count);
extern void fn_825B0BD0(Model_825B05A0 *model, Stats_825B05A0 *stats);

void fn_825B05A0(Instance_825B05A0 *self, Stats_825B05A0 *stats)
{
    void **buffers;
    int count;
    unsigned int i;
    int size;
    int remainder;
    int vertices;
    Model_825B05A0 *model;

    stats->bytes += 0x30;
    buffers = fn_8265CA60(self->model->slotCount <= 0x3fffffff ? self->model->slotCount * 4 : 0xffffffff);
    model = self->model;
    count = 0;
    for (i = 0; i < model->slotCount; i++) {
        Slot_825B05A0 *slots = model->slots;
        if (slots[i].part != 0) {
            buffers[count++] = slots[i].part->buffer;
        }
    }
    if (self->model->packer != 0) {
        size = fn_8284E5C0(self->model->packer, buffers, count);
        remainder = size % 16;
        if (remainder > 0) {
            size = size - remainder + 16;
        } else if (remainder < 0) {
            size -= remainder;
        }
        {
            int *bytes = &stats->bytes;
            *bytes += size;
        }
    }
    fn_8265CAA0(buffers);
    fn_825B0BD0(self->model, stats);
    vertices = 0;
    model = self->model;
    for (i = 0; i < model->slotCount; i++) {
        Slot_825B05A0 *slots = model->slots;
        if (slots[i].part != 0) {
            vertices += slots[i].part->vertexCount;
        }
    }
    stats->bytes += vertices * 32;
}
