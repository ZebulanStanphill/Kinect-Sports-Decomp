typedef struct Array_826A1FC8 {
    int unk0[13];
    int *data;
    int count;
} Array_826A1FC8;

static __forceinline void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void fn_826A1FC8(Array_826A1FC8 *self)
{
    int i;
    int j;

    for (i = 0, j = self->count - 1; i < j; i++, j--) {
        Swap(&self->data[i], &self->data[j]);
    }
}
