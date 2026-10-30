extern int fn_82BFE530(void *h, int *out);

int fn_82A476E0(void **self, int *out)
{
    int v[4];

    if (fn_82BFE530(*self, v) >= 0) {
        *out = v[0];
        return 1;
    }
    return 0;
}
