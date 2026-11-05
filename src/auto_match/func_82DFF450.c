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

typedef struct Veh Veh;
typedef struct VehVt {
  void *pad[7];
  void (*f1c)(Veh *);
  int (*f20)(Veh *, int);
  void (*f24)(Veh *, void *, int, int, void *, void *, int);
  void (*f28)(Veh *, void *, int, int);
} VehVt;
struct Veh { VehVt *vt; };
typedef struct Sub Sub;
typedef struct SubVt { void *pad[3]; void (*fc)(Sub *, void *, int); void (*f10)(Sub *); } SubVt;
struct Sub { SubVt *vt; };
typedef struct Arg2 { char pad[0x7c]; struct { char pad[0x20]; int mode; } *cfg; char pad2[0x150]; char tail[1]; } Arg2;

extern int *fn_82CE5410(void);
extern void *fn_82CE5250(int, int, int);
extern void fn_82CE52A8(int, void *);
extern void fn_82CE9108(void *);
extern void fn_82CFBA90(void *, int, int);
extern void fn_82CFBAD0(void *);
extern void fn_82CFBAD8(void *);
extern void fn_82D80CA0(void *);
extern void fn_82D80CA8(void *);

void fn_82DFF450(Veh *o, Arg2 *a2, Sub *s, void *p4, int p5)
{
  int *cur;
  int save;
  void *buf;
  int sz;
  timer("TtDoVehiclesSynchronously");
  o->vt->f1c(o);
  sz = o->vt->f20(o, p5);
  cur = fn_82CE5410();
  save = *cur;
  *cur = ((sz + 0x7f) & 0xffffff80) + save;
  { int h = *(int *)(fn_82CE5410() + 4); buf = fn_82CE5250(h, 4, 0x80); }
  if (buf != 0)
    fn_82CFBA90(buf, 0, 1000);
  o->vt->f24(o, a2, a2->cfg->mode == 2 ? 0x100 : 0, p5, p4, buf, save);
  fn_82D80CA0(a2);
  s->vt->fc(s, p4, 0xb);
  fn_82CE9108(p4);
  s->vt->f10(s);
  fn_82CFBAD8(buf);
  fn_82D80CA8(a2);
  fn_82CFBAD0(buf);
  fn_82CE52A8(*(int *)(fn_82CE5410() + 4), buf);
  o->vt->f28(o, (char *)a2 + 0x1d0, p5, save);
  *fn_82CE5410() = save;
  timer("Et");
}
