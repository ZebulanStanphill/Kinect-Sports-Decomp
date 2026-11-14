typedef struct Table_8294C018 {
    unsigned int flags : 12;
    unsigned int stride : 20;
    unsigned int count;
    unsigned int *data;
    int pad0c;
    unsigned int *header;
} Table_8294C018;
void fn_8294C018(Table_8294C018 *self, int col)
{
    unsigned int stride = self->stride;
    unsigned int rows = self->count / stride;
    unsigned int r;
    unsigned int tmp;

    for (r = 0; r < rows; r++) {
        tmp = self->data[r * stride + col];
        self->data[r * stride + col] = self->data[r * stride + col + 1];
        self->data[r * stride + col + 1] = tmp;
    }
    tmp = self->header[col];
    self->header[col] = self->header[col + 1];
    self->header[col + 1] = tmp;
}
