extern int fn_82A2B6A8(void *a, void *b);

int fn_82A1BBE8(unsigned int kind, void *a, void *b)
{
    int r = 0;
    switch (kind) {
    case 0:
    case 1:
        r = fn_82A2B6A8(a, b);
        break;
    }
    return r;
}
