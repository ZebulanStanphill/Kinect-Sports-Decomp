typedef struct PtrArray_825737F0 {
    void **data;
    unsigned short count;
} PtrArray_825737F0;

void fn_825737F0(PtrArray_825737F0 *self)
{
    int i;
    int j;

    for (i = self->count - 1; i >= 0; i--) {
        if (self->data[i] == 0) {
            self->count--;
            for (j = i; j < self->count; j++) {
                self->data[j] = self->data[j + 1];
            }
        }
    }
}
