typedef struct PtrArray_82DAD528 {
    void **data;
    unsigned short count;
} PtrArray_82DAD528;

void fn_82DAD528(PtrArray_82DAD528 *self)
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
