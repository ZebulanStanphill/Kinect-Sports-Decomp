extern int *fn_8269A678(int a, void *p);
extern void fn_8267C498(int *o);

int *fn_826F7A80(char *p)
{
    int *o;

    if (*(int *)(p + 0xadc) != 0) {
        o = fn_8269A678(*(int *)(p + 0xadc), p);
        if (o != 0) {
            o[1]++;
            fn_8267C498(o);
            return o;
        }
    }
    return 0;
}
