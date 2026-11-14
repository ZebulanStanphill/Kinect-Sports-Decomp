typedef struct {
    char pad0[0x24];
    int pos;
    int size;
} Stream_82BE5A70;

int fn_82BE5A70(Stream_82BE5A70 *self, int count)
{
    return self->pos + count <= self->size;
}
