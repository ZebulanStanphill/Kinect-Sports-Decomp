typedef struct {
    int a, b;
} RTL_CRITICAL_SECTION;

void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct {
    unsigned short type;
    unsigned short pad[3];
    unsigned int value;
} Prop;

typedef struct {
    int pad[2];
    RTL_CRITICAL_SECTION cs;
} Store;

extern Prop *fn_82E2AC98(Store *s, int key);

int fn_82E2B8C8(Store *s, int key, unsigned int *out)
{
    int hr = 0;
    Prop *p;
    RtlEnterCriticalSection(&s->cs);
    p = fn_82E2AC98(s, key);
    if (p != 0) {
        if (p->type == 0x1011) {
            *out = p->value;
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection(&s->cs);
    return hr;
}
