typedef struct Inner_828B0FE8 {
    unsigned char pad[0x4c];
    unsigned char *data;
} Inner_828B0FE8;

typedef struct Owner_828B0FE8 {
    unsigned char pad[0x18];
    Inner_828B0FE8 *inner;
} Owner_828B0FE8;

extern int fn_828B0ED0(void *state, int index, int flag);

int fn_828B0FE8(Owner_828B0FE8 *self)
{
    return fn_828B0ED0(self->inner->data + 0x38, 0, 0);
}
