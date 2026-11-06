extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
    TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntry *entry = stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

typedef struct { unsigned short type; short pad[7]; unsigned short size; short pad2[7]; } Msg_82DBB778;
typedef struct Heap_82DBB778 Heap_82DBB778;
typedef struct { void *f0; Msg_82DBB778 *(*alloc)(Heap_82DBB778 *h, unsigned int size); } HeapVt_82DBB778;
struct Heap_82DBB778 { HeapVt_82DBB778 *vt; };
typedef struct { int pad[4]; Heap_82DBB778 *heap; } Sys_82DBB778;
typedef struct Body_82DBB778 Body_82DBB778;
typedef struct { char pad[0x18]; void (*touch)(Body_82DBB778 *b); } BodyVt_82DBB778;
struct Body_82DBB778 { BodyVt_82DBB778 *vt; };
typedef struct Src_82DBB778 Src_82DBB778;
typedef struct { char pad[0x40]; void *(*getWorld)(Src_82DBB778 *s); } SrcVt_82DBB778;
struct Src_82DBB778 { SrcVt_82DBB778 *vt; };
extern void *fn_82DBBD28(void *world, int type);
extern Sys_82DBB778 *fn_82CE5410(void);
extern void fn_82DBBF60(void *world, Body_82DBB778 *b, Msg_82DBB778 *m);

void fn_82DBB778(Src_82DBB778 *s, Body_82DBB778 *b)
{
    void *world = s->vt->getWorld(s);
    if (world != 0) {
        b->vt->touch(b);
        timer("TtSetSurfVisc");
        if (fn_82DBBD28(world, 0x19) == 0) {
            Heap_82DBB778 *h = fn_82CE5410()->heap;
            Msg_82DBB778 *mem = h->vt->alloc(h, 0x20);
            Msg_82DBB778 *m;
            if (mem != 0) {
                mem->type = 0x19;
                mem->size = 0x20;
                m = mem;
            } else {
                m = 0;
            }
            fn_82DBBF60(world, b, m);
        }
        timer("Et");
    }
}
