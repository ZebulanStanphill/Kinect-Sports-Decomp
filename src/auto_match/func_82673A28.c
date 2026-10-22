typedef struct { int opaque[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct {
    void *first;
    void *second;
} Entry;
typedef struct {
    Entry *begin;
    Entry *end;
    Entry *cap;
} Vec;
typedef struct {
    char pad[0x14];
    Vec vec;
    char pad2[0x124 - 0x20];
    RTL_CRITICAL_SECTION cs;
} Obj;

extern void fn_826738F0(Vec *v, Entry *e);
void fn_82673A28(Obj *o, void *a, void *b)
{
    RTL_CRITICAL_SECTION *cs = &o->cs;
    Entry *it;
    if (cs != 0)
        RtlEnterCriticalSection(cs);
    for (it = o->vec.begin; it != o->vec.end; it++) {
        if (it->second == b) {
            if (cs != 0)
                RtlLeaveCriticalSection(cs);
            return;
        }
    }
    {
        Entry e;
        e.first = a;
        e.second = b;
        fn_826738F0(&o->vec, &e);
    }
    if (cs != 0)
        RtlLeaveCriticalSection(cs);
}
