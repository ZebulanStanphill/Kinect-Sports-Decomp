typedef struct List_82DAD5A8 {
    void **items;   /* 0x00 */
    int count;      /* 0x04 */
} List_82DAD5A8;

static __forceinline void MoveWords(void *dst, const void *src, int bytes)
{
    char *d = (char *)dst; const char *s = (const char *)src; int k;
    for (k = 0; k < bytes; k += 4) *(int *)(d + k) = *(const int *)(s + k);
}

void fn_82DAD5A8(List_82DAD5A8 *self)
{
    int i;
    for (i = self->count - 1; i >= 0; i--) {
        void **p = &self->items[i];
        if (*p == 0) {
            self->count--;
            MoveWords(p, p + 1, (self->count - i) * 4);
        }
    }
}
