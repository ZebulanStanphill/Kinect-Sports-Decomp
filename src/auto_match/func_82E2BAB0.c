typedef struct { int a, b; } RTL_CRITICAL_SECTION;
void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Obj { int (**vt)(struct Obj *, int, unsigned *); } Obj;
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

int fn_82E2BAB0(Store *s, int key, int a, unsigned *out)
{
    int hr;
    Prop *p;
    *out = 0;
    RtlEnterCriticalSection(&s->cs);
    p = fn_82E2AC98(s, key);
    if (p != 0) {
        if (p->type == 0xd && p->value != 0) {
            hr = ((Obj *)p->value)->vt[0]((Obj *)p->value, a, out);
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection(&s->cs);
    return hr;
}
