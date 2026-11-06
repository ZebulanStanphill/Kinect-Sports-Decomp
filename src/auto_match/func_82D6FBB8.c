extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern char lbl_82132BC4[];
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
struct P_82D6FBB8; struct Q_82D6FBB8; struct R_82D6FBB8;
typedef struct { void *p0; void *p1; void (*f14)(void); } Dummy_82D6FBB8;
typedef struct Ev_82D6FBB8 { struct R_82D6FBB8 *r; int idx; int unk; struct C_82D6FBB8 *c; } Ev_82D6FBB8;
typedef struct R_82D6FBB8 { void **vt; } R_82D6FBB8;
typedef struct C_82D6FBB8 { char pad[8]; int f8; } C_82D6FBB8;
typedef struct Sub_82D6FBB8 { char (*(*vt)[1]); } SubDummy_82D6FBB8;
typedef struct S10_82D6FBB8 { struct { char pad[0x14]; R_82D6FBB8 *(*f14)(struct S10_82D6FBB8 *, int, void *); } *vt; } S10_82D6FBB8;
typedef struct A20_82D6FBB8 { char pad[0x10]; S10_82D6FBB8 s10; } A20_82D6FBB8;
typedef struct B24 { struct { char *(*f0)(void *, struct B24 *, void *, void *, void *, int); } *vt; } B24;
typedef struct { char pad[0x20]; A20_82D6FBB8 *a20; int *arr; int count; } A;
typedef struct { char pad[0x24]; B24 *b24; } B;
void fn_82D6FBB8(A *a, B *b, C_82D6FBB8 *c, int d)
{
  int i, off;
  struct { char buf1[16]; Ev_82D6FBB8 ev; char buf2[512]; } s;
  timer("TtrcConvxPiece");
  i = 0;
  if (0 < a->count) {
    off = 0;
    do {
      R_82D6FBB8 *r;
      if (b->b24 == 0 || *b->b24->vt->f0(s.buf1, b->b24, b, a->a20, a->a20 ? (char *)a->a20 + 0x10 : 0, *(int *)((char *)a->arr + off)) != 0) {
        r = a->a20->s10.vt->f14(&a->a20->s10, *(int *)((char *)a->arr + off), s.buf2);
        s.ev.c = c;
        s.ev.r = r;
        s.ev.idx = i;
        s.ev.unk = c->f8;
        ((void (*)(R_82D6FBB8 *, B *, Ev_82D6FBB8 *, int))r->vt[0x24 / 4])(r, b, &s.ev, d);
      }
      i++;
      off += 4;
    } while (i < a->count);
  }
  timer("Et");
}
