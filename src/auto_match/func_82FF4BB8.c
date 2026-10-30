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
} Entry_82FF4BB8;

extern Entry_82FF4BB8 *fn_82FF5200(void *, int);

void fn_82FF4BB8(char *param_1, int param_2)
{
    struct { int a; int b; int c; int d; } msg;
    cb_t cb;
    void *cs;
    Entry_82FF4BB8 *e;

    cs = param_1 + 0x88;
    RtlEnterCriticalSection(cs);
    e = fn_82FF5200(param_1 + 4, param_2);
    if (e != 0 && (e->m_28 & 0x80) != 0 && e->m_20 != 0) {
        int ta = e->m_24, tb = e->m_c, td = e->m_8;
        cb = e->m_20;
        msg.c = param_2;
        msg.a = ta;
        msg.b = tb;
        msg.d = td;
        fn_82A1E7D8(*(int *)(param_1 + 0xa4));
        RtlLeaveCriticalSection(cs);
        cb(0x80, &msg);
        fn_82A1E810(*(int *)(param_1 + 0xa4));
    } else {
        RtlLeaveCriticalSection(cs);
    }
}
