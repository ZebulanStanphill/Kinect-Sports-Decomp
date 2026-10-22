typedef struct { unsigned int a, b, c, d; } Q;
typedef struct { unsigned short type; short pad[3]; Q *val; } Prop;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern Prop *fn_82E47870(int, int);

int fn_82E48330(int param_1, int param_2, Q *param_3)
{
    int hr = 0;
    Prop *p;

    RtlEnterCriticalSection((void *)(param_1 + 4));
    p = fn_82E47870(param_1, param_2);
    if (p != 0) {
        if (p->type == 0x48) {
            *param_3 = *p->val;
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection((void *)(param_1 + 4));
    return hr;
}
