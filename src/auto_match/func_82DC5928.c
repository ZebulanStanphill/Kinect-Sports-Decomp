extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { const char *name; unsigned time, unused; const char *name2; } TimerEntry2;
typedef struct { void *pad; void *current; void *pad2; void *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct Sub_82DC5928 { char pad[0x30]; char *base; } Sub_82DC5928;
typedef struct Item_82DC5928 {
    char pad[0x18];
    Sub_82DC5928 *sub;
    int pad1c;
    char *data;
    unsigned short idx;
    unsigned short count;
} Item_82DC5928;

extern void fn_82DBD940(void *a, void *b, unsigned short n, int stride, void *c);
extern void fn_82CE8E78(void *a, Item_82DC5928 *b, Item_82DC5928 *c, int d);

static __forceinline void timer2(const char *name, const char *name2)
{
    TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
    if ((TimerEntry2 *)stream->current < (TimerEntry2 *)stream->end) {
        TimerEntry2 *entry = (TimerEntry2 *)stream->current;
        entry->name = name;
        entry->name2 = name2;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

static __forceinline void timer(const char *name)
{
    TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
    if ((TimerEntry *)stream->current < (TimerEntry *)stream->end) {
        TimerEntry *entry = (TimerEntry *)stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

void fn_82DC5928(char *o, void *a, Item_82DC5928 *it)
{
    timer2("LtIntegrate", "StBuildAccumulators");
    fn_82DBD940(o + 0xc0, it->data + it->idx * 4, it->count, 0xe0, it->sub->base + (it->idx + 1) * 0x80);
    timer("lt");
    fn_82CE8E78(a, it, it, 0);
}
