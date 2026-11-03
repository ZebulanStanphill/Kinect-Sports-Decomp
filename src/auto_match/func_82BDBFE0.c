typedef struct Pkt_82BDBFE0 { int status; unsigned len; unsigned pad8; unsigned cap; int pad10; int limit; } Pkt_82BDBFE0;
typedef struct Q_82BDBFE0 { Pkt_82BDBFE0 *pkt; struct Q_82BDBFE0 *next; } Q_82BDBFE0;
typedef struct { char pad[0xc]; int voice; char pad2[0x88]; int limit; char pad3[0x34]; unsigned flags; } Dev_82BDBFE0;
typedef struct { Q_82BDBFE0 *head; Q_82BDBFE0 *tail; } List_82BDBFE0;
typedef struct { int pad; int dev; char pad2[0x6c]; List_82BDBFE0 list; } Self_82BDBFE0;
#define DEV(s) ((Dev_82BDBFE0 *)(s)->dev)
extern int XamVoiceSubmitPacket(int, int, Pkt_82BDBFE0 *);
void fn_82BDBFE0(Self_82BDBFE0 *self, Q_82BDBFE0 *q)
{
  Pkt_82BDBFE0 *pkt;
  List_82BDBFE0 *l;
  int hr;

  pkt = q->pkt;
  hr = 0x80004005;
  if (pkt->limit == 0) {
    pkt->cap = pkt->cap >> 2;
  }
  pkt->limit = DEV(self)->limit;
  if (DEV(self)->voice != 0) {
    if ((DEV(self)->flags & 0xf0000) != 0) {
      hr = XamVoiceSubmitPacket(DEV(self)->voice, 1, pkt);
    }
  }
  if (DEV(self)->voice == 0 || hr < 0) {
    pkt->status = 0xc0000001;
    pkt->len = pkt->cap;
  }
  q->next = 0;
  l = &self->list;
  if (l->tail != 0) {
    l->tail->next = q;
  } else {
    l->head = q;
  }
  l->tail = q;
}
