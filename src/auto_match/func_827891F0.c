typedef struct Array_827891F0 {
    int count;
    int unk4;
    int unk8;
    int **pages; /* 0xc, 64 elements per page */
} Array_827891F0;

static __forceinline void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

static __forceinline int *At(Array_827891F0 *self, unsigned int i)
{
    return &self->pages[i >> 6][i & 63];
}

void fn_827891F0(Array_827891F0 *self)
{
    int i;
    int j;

    for (i = 0, j = self->count - 1; i < j; i++, j--) {
        Swap(At(self, i), At(self, j));
    }
}
