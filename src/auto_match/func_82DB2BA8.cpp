extern "C" unsigned __int64 __mftb();
struct TimerEntry_82DB2BA8 { const char *name; unsigned time, unused; };
struct TimerStream_82DB2BA8 { void *pad; TimerEntry_82DB2BA8 *current; void *pad2; TimerEntry_82DB2BA8 *end; };
extern "C" TimerStream_82DB2BA8 *KeTlsGetValue(unsigned int);
extern "C" unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream_82DB2BA8 *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry_82DB2BA8 *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

static void timer2(const char *a, const char *b)
{
  TimerStream_82DB2BA8 *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    unsigned *e = (unsigned *)stream->current;
    e[3] = (unsigned)b;
    e[0] = (unsigned)a;
    e[1] = (unsigned)__mftb();
    stream->current = (TimerEntry_82DB2BA8 *)(e + 4);
  }
}

struct Sink_82DB2BA8 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void Write(void *data, unsigned n, int k);
};
struct Res_82DB2BA8 { Sink_82DB2BA8 *pad[4]; Sink_82DB2BA8 *sink; };
struct Vec_82DB2BA8 { void *data; int size; unsigned flags; };
struct Obj10_82DB2BA8 { char sub[0x10]; };
struct Obj_82DB2BA8 {
  char pad0[0xc]; int f0c; Obj10_82DB2BA8 s10; char pad1[0x24 - 0x20]; unsigned char f24; char pad2[3]; int f28;
  char pad3[0x44 - 0x2c]; int *f44; int f48; char pad4[0x50 - 0x4c]; char s50[0x19]; unsigned char f69;
};
extern "C" void fn_82DB1318(int **, int);
extern "C" void fn_82DB1478(void *, int);
extern "C" void fn_82D93430(void *, int);
extern "C" void fn_82DB2098(Obj_82DB2BA8 *, void *, int **, int, int, int);
extern "C" void fn_82DB1B80(Obj_82DB2BA8 *, void *, int, int);
extern "C" void fn_82D34D78(int);
extern "C" void fn_82CEA480(void *);
extern "C" Res_82DB2BA8 *fn_82CE5410();

extern "C" void fn_82DB2BA8(Obj_82DB2BA8 *o, int a, int b)
{
  Vec_82DB2BA8 v;
  int i;
  int **pv;
  char *e;
  Res_82DB2BA8 *r;
  v.data = 0;
  v.size = 0;
  v.flags = 0x80000000;
  timer2("LtActiveTree", "StGather");
  o->f48 = 0;
  pv = &o->f44;
  fn_82DB1318(pv, o->f28);
  if (o->f24 == 0) {
    fn_82DB1478(pv, o->f28);
  }
  for (i = 0; i < o->f48; i++) {
    e = (char *)o->f44[i];
    fn_82D93430(e + e[0x10], 0xffff);
  }
  timer("StClear");
  timer("StRebuild");
  if (o->f48 != 0) {
    fn_82DB2098(o, &o->s10, pv, o->f28, a, b);
  }
  timer("lt");
  if (o->f24 != 0) {
    timer2("LtInactiveTree", "StGather");
    v.size = 0;
    fn_82DB1478(&v, o->f28);
    timer("StClear");
    fn_82D34D78(o->f0c);
    timer("StRebuild");
    fn_82DB1B80(o, &v, a, b);
    timer("lt");
  }
  o->f69 = 0;
  fn_82CEA480(o->s50);
  r = fn_82CE5410();
  Sink_82DB2BA8 *s = r->sink;
  v.size = 0;
  if (((int)v.flags & (int)0x80000000) == 0) {
    s->Write(v.data, v.flags & 0x3fffffff, 4);
  }
}
