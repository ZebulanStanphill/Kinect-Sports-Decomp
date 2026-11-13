extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

struct Al_82DB3D88;
typedef struct {
  void *p0;
  void *p4;
  void *p8;
  void *pc;
  void (*f10)(struct Al_82DB3D88 *, void *, unsigned, int);
} AlVt_82DB3D88;
typedef struct Al_82DB3D88 { AlVt_82DB3D88 *vt; } Al_82DB3D88;
typedef struct { char pad[0x10]; Al_82DB3D88 *al; } Heap_82DB3D88;
typedef struct { void *data; int size; unsigned cap; } Array_82DB3D88;

typedef struct Tree_82DB3D88 {
  char pad0[0x10];
  char sub[0x10];
  unsigned char dirty;
} Tree_82DB3D88;

extern Heap_82DB3D88 *fn_82CE5410(void);
extern void fn_82DB3650(Tree_82DB3D88 *t, Array_82DB3D88 *a);
extern void fn_82DB34D0(Tree_82DB3D88 *t, void *sub, Array_82DB3D88 *a);
extern void fn_82DB38B8(Tree_82DB3D88 *t, void *sub, Array_82DB3D88 *a, void *p, void *q);

void fn_82DB3D88(Tree_82DB3D88 *t, void *p, void *q)
{
  TimerStream *s;
  TimerEntryA *ea;
  TimerEntryB *eb;
  Array_82DB3D88 arr;
  Al_82DB3D88 *al;
  void *sub;

  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    ea = (TimerEntryA *)s->current;
    ea->name = "LtkdTreeUpdate";
    ea->name2 = "Stgather";
    ea->time = (unsigned)__mftb();
    s->current = (char *)(ea + 1);
  }
  arr.data = 0;
  arr.size = 0;
  arr.cap = 0x80000000;
  fn_82DB3650(t, &arr);
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    eb = (TimerEntryB *)s->current;
    eb->name = "Strebuild";
    eb->time = (unsigned)__mftb();
    s->current = (char *)(eb + 1);
  }
  sub = t->sub;
  if (p != 0 && q != 0) {
    fn_82DB38B8(t, sub, &arr, p, q);
  } else {
    fn_82DB34D0(t, sub, &arr);
  }
  t->dirty = 0;
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    eb = (TimerEntryB *)s->current;
    eb->name = "lt";
    eb->time = (unsigned)__mftb();
    s->current = (char *)(eb + 1);
  }
  al = fn_82CE5410()->al;
  arr.size = 0;
  if (((int)arr.cap & (int)0x80000000) == 0) {
    al->vt->f10(al, arr.data, arr.cap & 0x3fffffff, 4);
  }
}
