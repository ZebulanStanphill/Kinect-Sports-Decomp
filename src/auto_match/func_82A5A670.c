typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern long _InterlockedIncrement(long *);

typedef struct Item_82A5A670 {
    char pad0[0x10];
    long refs;
} Item_82A5A670;

typedef struct Holder_82A5A670 {
    char pad0[0x20];
    Item_82A5A670 *current;
    char cs[0x1c];
} Holder_82A5A670;

extern void fn_82A5A300(Item_82A5A670 *item);

void fn_82A5A670(Holder_82A5A670 *self, Item_82A5A670 *item)
{
    RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)self->cs);
    fn_82A5A300(self->current);
    _InterlockedIncrement(&item->refs);
    self->current = item;
    RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)self->cs);
}
