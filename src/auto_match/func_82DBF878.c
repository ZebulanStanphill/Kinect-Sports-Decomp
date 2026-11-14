typedef struct PtrArray_82DBF878 {
    void **data;
    unsigned short count;
} PtrArray_82DBF878;

void fn_82DBF878(PtrArray_82DBF878 *self)
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
