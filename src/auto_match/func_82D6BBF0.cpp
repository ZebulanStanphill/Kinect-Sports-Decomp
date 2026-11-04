extern "C" unsigned __int64 __mftb();
struct TimerEntry_82D6BBF0 { const char *name; unsigned time, unused; };
struct TimerStream_82D6BBF0 { void *pad; TimerEntry_82D6BBF0 *current; void *pad2; TimerEntry_82D6BBF0 *end; };
extern "C" TimerStream_82D6BBF0 *KeTlsGetValue(unsigned int);
extern "C" unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream_82D6BBF0 *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry_82D6BBF0 *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

struct It_82D6BBF0 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual int f14(int, void *);
};
struct Src_82D6BBF0 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual It_82D6BBF0 *f10();
};
struct Ev_82D6BBF0 { Src_82D6BBF0 *src; int p4; int p8; };
struct Tgt_82D6BBF0 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
  virtual void f18(void *, int, int, int);
};
struct Elem_82D6BBF0 { int key; Tgt_82D6BBF0 *tgt; };
struct Obj_82D6BBF0 { int p0, p4, p8; Elem_82D6BBF0 *data; int count; };

extern "C" void fn_82D6BBF0(Obj_82D6BBF0 *o, Ev_82D6BBF0 *ev, int a, int b, int c)
{
  It_82D6BBF0 *it;
  struct { int first; int second; int p8; Ev_82D6BBF0 *pc; char buf[0x200]; } L;
  int i;
  Elem_82D6BBF0 *e;
  timer("TtShapeCollection");
  it = ev->src->f10();
  L.p8 = ev->p8;
  L.pc = ev;
  e = o->data;
  for (i = o->count - 1; i >= 0; i--) {
    int key = e->key;
    L.first = it->f14(key, L.buf);
    L.second = key;
    e->tgt->f18(&L, a, b, c);
    e++;
  }
  timer("Et");
}
