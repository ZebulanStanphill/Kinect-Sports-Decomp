typedef struct Arr_82F60638 { int pad; unsigned char valid; char pad2[7]; unsigned int count; int pad3[3]; unsigned int *data; } Arr_82F60638;

unsigned int fn_82F60638(Arr_82F60638 *self, unsigned int index)
{
    unsigned int r = 0;
    if (self->valid && index < self->count)
        r = self->data[index];
    return r;
}
