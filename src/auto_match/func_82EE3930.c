typedef unsigned int uint;
typedef __int64 longlong;
extern int fn_82EE3630(void *p, uint i, int ***out);

typedef struct {
    char pad0[0xc];
    void *m_c;
    char pad10[0x10];
    longlong m_20;
    char pad28[0x20];
    char m_48[0x68];
    uint m_b0;
} S;

int fn_82EE3930(S *param_1, longlong *param_2, longlong *param_3)
{
    longlong n;
    uint i;
    int **p;

    if (param_1->m_c == 0) {
        return 0xc00d36b6;
    }
    n = 0x2a;
    for (i = 0; i < param_1->m_b0; i++) {
        fn_82EE3630(param_1->m_48, i, &p);
        if (*(uint *)((char *)*p + 0x40) >= 1) {
            n += 2;
        }
    }
    if (param_2 != 0) {
        *param_2 = n;
    }
    if (param_3 != 0) {
        *param_3 = n;
    }
    param_1->m_20 = n;
    return 0;
}
