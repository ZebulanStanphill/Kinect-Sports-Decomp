typedef struct Entry_828FCDE0 {
    char *name;
    unsigned int a;
    unsigned int b;
    unsigned int fc;
    char pad10[0x10];
    struct Entry_828FCDE0 *next;
} Entry_828FCDE0;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern unsigned int fn_828FC3D0(const char *name);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int strlen(const char *);

static __forceinline Entry_828FCDE0 *InitEntry(Entry_828FCDE0 *e, char *name, unsigned int a, unsigned int b, Entry_828FCDE0 *next)
{
    e->fc = 0;
    e->name = name;
    e->a = a;
    e->b = b;
    e->next = next;
    return e;
}

int fn_828FCDE0(Entry_828FCDE0 **buckets, const char *name, unsigned int a, unsigned int b)
{
    unsigned int bucket = fn_828FC3D0(name);
    unsigned int n = strlen(name) + 1;
    char *copy = (char *)fn_8265C940(n, 0x24810000);
    Entry_828FCDE0 *mem;
    Entry_828FCDE0 *e;
    if (copy == 0)
        return 0x8007000e;
    memcpy(copy, name, n);
    mem = (Entry_828FCDE0 *)fn_8265C940(sizeof(Entry_828FCDE0), 0x24810000);
    if (mem != 0)
        e = InitEntry(mem, copy, a, b, buckets[bucket]);
    else
        e = 0;
    if (e == 0)
        return 0x8007000e;
    buckets[bucket] = e;
    return 0;
}
