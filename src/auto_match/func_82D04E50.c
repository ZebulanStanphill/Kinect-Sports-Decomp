typedef struct Str_82D04E50 {
    char *data;
    int size;
    int capacityAndFlags;
} Str_82D04E50;

extern void fn_82CE7E00(Str_82D04E50 *s, int len);

void fn_82D04E50(Str_82D04E50 *self, int n)
{
    if (n > 0) {
        fn_82CE7E00(self, self->size - n - 1);
    }
}
