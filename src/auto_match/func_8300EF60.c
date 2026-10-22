typedef struct CRITICAL_SECTION { int v[7]; } CRITICAL_SECTION;
void RtlEnterCriticalSection(CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(CRITICAL_SECTION *cs);
typedef struct Val { int cur; int prev; } Val;
typedef struct Entry { unsigned int key; Val val; } Entry;
typedef struct Map { Entry *begin; Entry *end; int pad; CRITICAL_SECTION cs; } Map;
static Val *get(Entry *it, Entry *end) { int f = it != end; return f ? &it->val : 0; }
void fn_8300EF60(Map *m, unsigned int key)
{
    Entry *it;
    Val *v;
    RtlEnterCriticalSection(&m->cs);
    for (it = m->begin; it != m->end && it->key != key; it++) ; v = get(it, m->end);
    if (v != 0) v->prev = v->cur;
    RtlLeaveCriticalSection(&m->cs);
}
