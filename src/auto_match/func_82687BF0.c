typedef struct Obj_82687BF0 {
    int pad;
    long refs;
} Obj_82687BF0;

typedef struct Registry_82687BF0 {
    char pad[0x8];
    char *table;
    char cs[0x1c];
} Registry_82687BF0;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82686F38(void *set, Obj_82687BF0 **key);
extern void fn_82686A80(void *set, void *set2, Obj_82687BF0 **key, unsigned int hash);

void fn_82687BF0(Registry_82687BF0 *self, Obj_82687BF0 *obj)
{
    void *cs = self->cs;
    void *set;
    Obj_82687BF0 *o = obj;

    RtlEnterCriticalSection(cs);
    if (self->table != 0) {
        set = self->table + 0xc;
        if (fn_82686F38(set, &obj) == 0) {
            fn_82686A80(set, set, &obj, ((unsigned int)o >> 6) ^ (unsigned int)o);
            _InterlockedExchangeAdd(&o->refs, 1);
        }
    }
    RtlLeaveCriticalSection(cs);
}
