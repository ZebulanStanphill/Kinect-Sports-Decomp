struct Sub_82CF8B38;
typedef struct VT_82CF8B38 { void *s[2]; void (*f8)(struct Sub_82CF8B38 *self, void *p); } VT_82CF8B38;
typedef struct Sub_82CF8B38 { VT_82CF8B38 *vt; } Sub_82CF8B38;
typedef struct Blk_82CF8B38 { struct Blk_82CF8B38 *next; } Blk_82CF8B38;
typedef struct Cls_82CF8B38 { Blk_82CF8B38 *head; int size; int pad[8]; int cnt; } Cls_82CF8B38;
typedef struct {
  int pad0;
  int cs;
  char pad1[0x20 - 8];
  int total;
  char pad2[0x2c - 0x24];
  Sub_82CF8B38 big;
  char pad3[0x3c * 4 - 0x30];
  Cls_82CF8B38 *cls[1];
} Heap_82CF8B38;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82CF8B38(Heap_82CF8B38 *h, Blk_82CF8B38 *p, int n)
{
  Cls_82CF8B38 *c;
  int old;
  if (p != 0) {
    RtlEnterCriticalSection(&h->cs);
    if (n <= 0x220) {
      c = h->cls[(n + 0xf) >> 4];
      old = c->cnt;
      c->cnt = old + 1;
      p->next = c->head;
      c->head = p;
      h->total = (c->cnt - old) * c->size + h->total;
    } else {
      h->big.vt->f8(&h->big, p);
    }
    RtlLeaveCriticalSection(&h->cs);
  }
}
