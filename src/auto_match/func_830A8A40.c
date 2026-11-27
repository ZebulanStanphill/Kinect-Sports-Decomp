#include "xdk/vectorintrinsics.h"

typedef struct Block_830A8A40 {
    __vector4 rows[12];
} Block_830A8A40;

Block_830A8A40 *fn_830A8A40(Block_830A8A40 *self, const Block_830A8A40 *source)
{
    self->rows[0] = source->rows[0];
    self->rows[1] = source->rows[1];
    self->rows[2] = source->rows[2];
    self->rows[3] = source->rows[3];
    self->rows[4] = source->rows[4];
    self->rows[5] = source->rows[5];
    self->rows[6] = source->rows[6];
    self->rows[7] = source->rows[7];
    self->rows[8] = source->rows[8];
    self->rows[9] = source->rows[9];
    self->rows[10] = source->rows[10];
    self->rows[11] = source->rows[11];
    return self;
}
