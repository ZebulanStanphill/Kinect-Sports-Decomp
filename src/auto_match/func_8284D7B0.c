extern int fn_82851730(void *ctx, int key, void **out);
extern void fn_82851858(void *item, char **out);

void fn_8284D7B0(void *ctx, int offset, int key, float value)
{
    void *item;
    char *base;

    if (fn_82851730(ctx, key, &item) != 0) {
        fn_82851858(item, &base);
        *(float *)(base + offset) = value;
    }
}
