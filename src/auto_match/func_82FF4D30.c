typedef unsigned int uint;
typedef void (*cb_t)(int, void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82A1E7D8();
extern int fn_82A1E810();

typedef struct {
    char pad0[8];
    int m_8;
    int m_c;
    char pad10[0x10];
    cb_t m_20;
    int m_24;
    uint m_28;
} Entry;

extern Entry *fn_82FF5200(void *, int);

void fn_82FF4D30(char *param_1, int param_2, int *param_3)
{
    cb_t cb;
    void *cs;
    Entry *e;

    cs = param_1 + 0x88;
    RtlEnterCriticalSection(cs);
    e = fn_82FF5200(param_1 + 4, param_2);
    if (e == 0 || (e->m_28 & 0x10) == 0) {
        RtlLeaveCriticalSection(cs);
    }
    else {
        param_3[0] = e->m_24;
        param_3[1] = e->m_c;
        param_3[2] = param_2;
        param_3[3] = e->m_8;
        cb = e->m_20;
        fn_82A1E7D8(*(int *)(param_1 + 0xa4));
        RtlLeaveCriticalSection(cs);
        cb(0x10, param_3);
        fn_82A1E810(*(int *)(param_1 + 0xa4));
    }
}
