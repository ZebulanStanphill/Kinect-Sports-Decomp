typedef struct { unsigned short type; short pad; int pad2; unsigned int value; } Prop;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Prop *fn_82E47870(void *p, int key);

int fn_82E48608(char *param_1, int param_2, unsigned int *param_3)
{
    Prop *prop;
    int hr;

    hr = 0;
    RtlEnterCriticalSection(param_1 + 4);
    prop = fn_82E47870(param_1, param_2);
    if (prop != 0) {
        if (prop->type == 0x1011) {
            *param_3 = prop->value;
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection(param_1 + 4);
    return hr;
}
