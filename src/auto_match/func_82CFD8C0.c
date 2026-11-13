extern int fn_82CFD5F0(void *);

int fn_82CFD8C0(void *obj, void *p)
{
    int r = 0;
    switch (fn_82CFD5F0(obj)) {
    case 1: r = *(signed char *)p; break;
    case 2: r = *(short *)p; break;
    case 4: r = *(int *)p; break;
    }
    return r;
}
