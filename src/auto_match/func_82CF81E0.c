extern void fn_82CF7F50(void *self, int flag, int size);

void fn_82CF81E0(void *self, int *count, int stride)
{
    fn_82CF7F50(self, 1, *count * stride);
}
