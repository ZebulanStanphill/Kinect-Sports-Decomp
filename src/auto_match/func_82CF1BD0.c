extern void fn_82CF0B50(void *node, int idx, float scale);
extern void fn_82CF1A78(void *a, void *b, int c, int d, float scale);

void fn_82CF1BD0(void *a, void *b, int c, int d, float scale)
{
    fn_82CF0B50(a, c, scale);
    fn_82CF1A78(a, b, c, d, scale);
}
