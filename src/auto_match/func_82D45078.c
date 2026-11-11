extern void fn_82D44F78(void *a, void *b, float scale, void *out);

void fn_82D45078(char *self, float scale, void *out)
{
    fn_82D44F78(self + 0x10, self, scale, out);
}
