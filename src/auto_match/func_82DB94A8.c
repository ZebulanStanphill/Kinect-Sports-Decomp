typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern unsigned __int64 __mftb();
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern int lbl_8323B520;

static __forceinline void timer(const char *name)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

typedef struct World_82DB94A8 {
  char pad0[0x78];
  int f78;
  char pad7c[0x16c - 0x7c];
  int f16c;
} World_82DB94A8;

struct Action_82DB94A8;
typedef struct ActionVt_82DB94A8 {
  char pad[0x40];
  void (*f40)(struct Action_82DB94A8 *self, int arg, void *out);
} ActionVt_82DB94A8;

typedef struct Action_82DB94A8 {
  ActionVt_82DB94A8 *vt;
  int f04;
  int f08;
  World_82DB94A8 *world;
  int f10;
  float f14;
  int f18;
  int f1c;
  float f20;
  char pad24[0x3c - 0x24];
  int f3c;
  int f40;
} Action_82DB94A8;

extern int fn_82DB8258(Action_82DB94A8 *self);
extern void fn_82DAE9A0(World_82DB94A8 *world);

int fn_82DB94A8(Action_82DB94A8 *self)
{
  int result = fn_82DB8258(self);
  if (self->f14 >= self->f20) {
    if ((self->f40 & 0x7fffffff) != 0) {
      self->vt->f40(self, self->world->f78, &self->f3c);
    }
    if (lbl_8323B520 == 1) {
      return 3;
    }
    if (self->world->f16c != 0) {
      timer("TtPostSimCb");
      fn_82DAE9A0(self->world);
      timer("Et");
    }
  }
  return result;
}
