typedef struct Body_827FEE18 {
    char pad0[0x30];
    float *position;        /* 0x30 */
} Body_827FEE18;

typedef struct Handle_827FEE18 {
    Body_827FEE18 *body;    /* 0x0 */
} Handle_827FEE18;

void fn_827FEE18(Handle_827FEE18 *self, float *x, float *y, float *z)
{
    *x = self->body->position[0];
    *y = self->body->position[1];
    *z = self->body->position[2];
}
