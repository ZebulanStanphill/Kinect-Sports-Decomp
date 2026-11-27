#include "xdk/vectorintrinsics.h"

typedef struct Matrix_82527F50 {
    __vector4 rows[4];
} Matrix_82527F50;

typedef struct State_82527F50 {
    char padding[0x10];
    Matrix_82527F50 first;  /* 0x10 */
    Matrix_82527F50 second; /* 0x50 */
    char tail[0x10];
} State_82527F50;

typedef struct Object_82527F50 {
    char padding[0x1b8];
    State_82527F50 *state; /* 0x1b8 */
} Object_82527F50;

extern const Matrix_82527F50 lbl_8329EAD0;
extern void *fn_82522D98(unsigned int);
extern void *XMemSet(void *, int, unsigned int);

static __forceinline void CopyMatrix(Matrix_82527F50 *destination, const Matrix_82527F50 *source)
{
    destination->rows[0] = source->rows[0];
    destination->rows[1] = source->rows[1];
    destination->rows[2] = source->rows[2];
    destination->rows[3] = source->rows[3];
}

State_82527F50 *fn_82527F50(Object_82527F50 *self)
{
    if (self->state == 0) {
        self->state = (State_82527F50 *)fn_82522D98(0xa0);
        if (self->state != 0) {
            XMemSet(self->state, 0, 0xa0);
            CopyMatrix(&self->state->first, &lbl_8329EAD0);
            CopyMatrix(&self->state->second, &lbl_8329EAD0);
        }
    }
    return self->state;
}
