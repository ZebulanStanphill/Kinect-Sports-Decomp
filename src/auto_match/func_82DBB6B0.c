typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern unsigned __int64 __mftb();
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
typedef struct {
  char pad[0x18];
  void (*f18)(void *);
} Vt18_82DBB6B0;
typedef struct { Vt18_82DBB6B0 *vt; } B_82DBB6B0;
typedef struct {
  char pad[0x40];
  unsigned (*f40)(void *);
} Vt40_82DBB6B0;
typedef struct { Vt40_82DBB6B0 *vt; } A_82DBB6B0;
extern void fn_82DBBBA0(unsigned, void *, int);

void fn_82DBB6B0(A_82DBB6B0 *a, B_82DBB6B0 *b)
{
  unsigned r = a->vt->f40(a);
  if (r != 0) {
    b->vt->f18(b);
    timer("TtClrSurfVel");
    fn_82DBBBA0(r, b, 0x1a);
    timer("Et");
  }
}
