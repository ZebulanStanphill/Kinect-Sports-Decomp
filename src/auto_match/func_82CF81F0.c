extern void fn_82CF8038(void *self, int a, void *b, int n);

void fn_82CF81F0(void *self, void *b, int count, int size)
{
    fn_82CF8038(self, 1, b, count * size);
}
