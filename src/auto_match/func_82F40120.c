typedef unsigned __int64 U64;

typedef struct {
    int a, b, c;
    unsigned int n; /* 0xc */
} S;

int fn_82F40120(S *s, U64 *a, U64 *b)
{
    int hr = 0;
    if (s->n == 0)
        hr = 0xc00d36b6;
    else {
        if (a)
            *a = 0x2e;
        if (b)
            *b = 0x2e;
    }
    return hr;
}
