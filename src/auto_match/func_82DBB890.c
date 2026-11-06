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

typedef struct Heap_82DBB890 Heap_82DBB890;
typedef struct { void *s0; void *(*alloc)(Heap_82DBB890 *, int); } HeapVt_82DBB890;
struct Heap_82DBB890 { HeapVt_82DBB890 *vt; };
typedef struct { char pad[0x10]; Heap_82DBB890 *heap; } Router_82DBB890;
typedef struct { unsigned short kind; char pad[0xe]; unsigned short size; } Rec_82DBB890;
typedef struct Arg_82DBB890 Arg_82DBB890;
typedef struct { char pad[0x18]; void (*s18)(Arg_82DBB890 *); } ArgVt_82DBB890;
struct Arg_82DBB890 { ArgVt_82DBB890 *vt; };

extern Router_82DBB890 *fn_82CE5410(void);
extern unsigned fn_82DBBD28(void *, int);
extern void fn_82DBBF60(void *, Arg_82DBB890 *, Rec_82DBB890 *);

void fn_82DBB890(void *self, Arg_82DBB890 *arg)
{
  arg->vt->s18(arg);
  timer("TtDsblConstr");
  if (fn_82DBBD28(self, 0x1b) == 0) {
    Heap_82DBB890 *h = fn_82CE5410()->heap;
    Rec_82DBB890 *r = (Rec_82DBB890 *)h->vt->alloc(h, 0x20);
    Rec_82DBB890 *res;
    if (r != 0) {
      r->kind = 0x1b;
      r->size = 0x20;
      res = r;
    } else {
      res = 0;
    }
    fn_82DBBF60(self, arg, res);
  }
  timer("Et");
}
