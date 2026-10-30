typedef struct Lk_82AD4F40 { unsigned int prev; unsigned int next; } Lk_82AD4F40;
extern unsigned int fn_82AD3A38(int, int, int);
extern unsigned int fn_82AD18C0(int, int, int);
extern void fn_82AD1978(unsigned int, unsigned int);
extern unsigned int fn_82AC65F0(int);
extern unsigned int fn_82AC9F80(int, unsigned int, int);

void fn_82AD4F40(int p1, int p2, int p3)
{
  unsigned int n;
  unsigned int owner;
  unsigned int q;
  unsigned int cur;
  unsigned int *slot;
  Lk_82AD4F40 *pn;
  Lk_82AD4F40 *po;
  unsigned int h;

  n = fn_82AD3A38(p1, 0, p2);
  h = fn_82AD18C0(p1, p3, 0);
  fn_82AD1978(n, h);
  *(unsigned int *)(n + 8) = (*(unsigned int *)(n + 8) & 0xfff9ffff) | 0x20000;
  q = fn_82AC65F0(p2);
  owner = *(unsigned int *)(q + 0xc);
  slot = (unsigned int *)(owner + 4);
  cur = *(unsigned int *)(owner + 4);
  while (cur != q) {
    slot = (unsigned int *)(cur + 8);
    cur = *(unsigned int *)(cur + 8);
  }
  po = (Lk_82AD4F40 *)((owner & ~1u) + 0x24);
  pn = (Lk_82AD4F40 *)((n & ~1u) + 0x24);
  *slot = *(unsigned int *)(q + 8);
  *(unsigned int *)(q + 8) = *(unsigned int *)(n + 4);
  *(unsigned int *)(n + 4) = q;
  *(unsigned int *)(q + 0xc) = n;
  *(unsigned int *)((po->next & ~1u) + 0x24) = po->prev;
  *(unsigned int *)(po->prev & ~1u) = po->next;
  po->prev = pn->prev;
  *(unsigned int *)(pn->prev & ~1u) = (unsigned int)po - 0x24;
  po->next = (unsigned int)pn - 0x24;
  pn->prev = (unsigned int)&po->next;
  h = fn_82AC9F80(p1, owner, 7);
  fn_82AD1978(n, h);
}
