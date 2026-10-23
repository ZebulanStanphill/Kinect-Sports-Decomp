typedef struct { int x[7]; } CRITICAL_SECTION;
extern void RtlEnterCriticalSection(CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION *cs);

typedef struct ListNode { struct ListNode *prev; struct ListNode *next; } ListNode;

typedef struct Obj Obj;
typedef struct { char pad[0x90]; void (*fn90)(Obj *self); } ObjVtbl;
struct Obj {
  ObjVtbl *vtbl;
  int pad4[3];
  unsigned char flag;       /* 0x10 */
  char pad11[0x154 - 0x11];
  ListNode list;            /* 0x154 */
  CRITICAL_SECTION cs;      /* 0x15c */
  char pad178[0x21e4 - 0x178];
  int sub;                  /* 0x21e4 */
};

extern void fn_826768C8(void *item);
extern void fn_826793F0(Obj *self);
extern void fn_8267A6B8(int *sub, Obj *self, int b);

void fn_82679460(Obj *self)
{
  ListNode *n;

  RtlEnterCriticalSection(&self->cs);
  while (self->list.next != &self->list) {
    n = self->list.next;
    fn_826768C8(n ? (char *)n - 8 : 0);
  }
  RtlLeaveCriticalSection(&self->cs);
  if (self->flag != 0) {
    self->vtbl->fn90(self);
  }
  fn_8267A6B8(&self->sub, self, 1);
  fn_826793F0(self);
}
