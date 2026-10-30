struct Pkt_82BD6D20;
typedef struct Node_82BD6D20 { struct Pkt_82BD6D20 *pkt; struct Node_82BD6D20 *next; } Node_82BD6D20;
typedef struct Pkt_82BD6D20 { int status; int f4; int f8; unsigned int fc; int f10; int f14; } Pkt_82BD6D20;
typedef struct { Node_82BD6D20 *head; Node_82BD6D20 *tail; } Q_82BD6D20;
struct Obj_82BD6D20;
typedef struct { void *s[4]; void (*m10)(struct Obj_82BD6D20 *); } VT_82BD6D20;
typedef struct Obj_82BD6D20 { VT_82BD6D20 *vt; } Obj_82BD6D20;
typedef struct {
  char pad0[4]; int state; void *f8; void *fc; Obj_82BD6D20 *objs[1];
  char pad1[0x40 - 0x14]; Q_82BD6D20 qa; Q_82BD6D20 qb; int lock; int pad2; Q_82BD6D20 qc;
} Self_82BD6D20;
extern void fn_82BD6378();
extern unsigned int fn_82BD7EF8(Q_82BD6D20 *);
extern void fn_82BDA7C0(int, int, int, unsigned int, void *);
extern int fn_82BDC1F0(void *);
extern unsigned int KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned int);
extern int XamVoiceSubmitPacket(void *, int, void *);

#define SELF_OBJ(s, i) (*(Obj_82BD6D20 **)((char *)(s) + 0xc + (i) * 4))
#define QA(s) ((Q_82BD6D20 *)((char *)(s) + 0x40))
#define QB(s) ((Q_82BD6D20 *)((char *)(s) + 0x48))
#define LOCK(s) ((void *)((char *)(s) + 0x50))
#define QC(s) ((Q_82BD6D20 *)((char *)(s) + 0x58))
#define COUNT(s) (*(unsigned int *)((char *)(s) + 0x2c))

int fn_82BD6D20(Self_82BD6D20 *s)
{
  Node_82BD6D20 *n;
  Node_82BD6D20 *h;
  Q_82BD6D20 *qc;
  Q_82BD6D20 *qb;
  unsigned int lk;
  unsigned int i;
  int hr;
  fn_82BD6378();
  if (s->state == 1)
    return 0;
  qc = &s->qc;
  n = s->qc.head;
  while (n != 0 && n->pkt->status != 0x103) {
    h = qc->head;
    if (h != 0) {
      if (h == qc->tail)
        qc->tail = 0;
      qc->head = h->next;
      h->next = 0;
    }
    if (n->pkt->f14 == 1) {
      n->pkt->fc = n->pkt->fc << 2;
      n->pkt->f14 = 0;
    }
    n->pkt->f4 = 0;
    lk = KfAcquireSpinLock(LOCK(s));
    n->next = 0;
    {
      Q_82BD6D20 *q = &s->qa;
      Node_82BD6D20 *t = q->tail;
      if (t != 0)
        t->next = n;
      else
        q->head = n;
      q->tail = n;
    }
    KfReleaseSpinLock(LOCK(s), lk);
    n = s->qc.head;
  }
  qb = QB(s);
  n = qb->head;
  while (n != 0) {
    if (n->pkt->fc - n->pkt->f4 != 0)
      break;
    lk = KfAcquireSpinLock(LOCK(s));
    if (fn_82BD7EF8(qc) == 0 && fn_82BD7EF8(qb) <= 1) {
      KfReleaseSpinLock(LOCK(s), lk);
      break;
    }
    h = qb->head;
    if (h != 0) {
      if (h == qb->tail)
        qb->tail = 0;
      qb->head = h->next;
      h->next = 0;
    }
    KfReleaseSpinLock(LOCK(s), lk);
    n->next = 0;
    if (qc->tail != 0)
      qc->tail->next = n;
    else
      qc->head = n;
    qc->tail = n;
    fn_82BDA7C0(0, n->pkt->f8, n->pkt->f8, n->pkt->fc >> 1, (char *)s + 0x60);
    n->pkt->fc = n->pkt->fc >> 2;
    n->pkt->f14 = 1;
    if (XamVoiceSubmitPacket(s->fc, 0, n->pkt) < 0) {
      n->pkt->status = 0;
      break;
    }
    n = qb->head;
  }
  hr = fn_82BDC1F0(s->f8);
  if (hr >= 0) {
    i = 0;
    if (COUNT(s) > 0) {
      Obj_82BD6D20 **p = (Obj_82BD6D20 **)((char *)s + 0xc);
      do {
        Obj_82BD6D20 *o;
        p++;
        o = *p;
        o->vt->m10(o);
        i++;
      } while (i < COUNT(s));
    }
  }
  return hr;
}
