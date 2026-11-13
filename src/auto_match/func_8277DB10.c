typedef struct Slot_8277DB10 {
  int pad0;
  int pad4;
  int next;
} Slot_8277DB10;
typedef struct Handle_8277DB10 {
  int f0;
  int idx;
  int f8;
  int fc;
} Handle_8277DB10;
typedef struct Mgr_8277DB10 {
  char pad[0x164];
  unsigned count;
  char pad2[8];
  char **pages;
} Mgr_8277DB10;

static void tail_(Mgr_8277DB10 *m, Handle_8277DB10 *h, unsigned a)
{
  if (a == 0xffffffff) {
    h->f0 = 0;
    return;
  }
  *(int *)(*(int *)((char *)m->pages + (a >> 8 & 0xfffffc)) + (a & 0x3ff) * 8 + 4) = 0;
}

void fn_8277DB10(Mgr_8277DB10 *m, Handle_8277DB10 *h)
{
  unsigned a;
  int b;
  unsigned *pc;

  if (h->idx == -1) {
    return;
  }
  pc = &m->count;
  if (h->idx == *pc - 1 && m->count != 0) {
    m->count = m->count - 1;
  }
  a = h->f8;
  b = h->fc;
  h->fc = -1;
  h->idx = a;
  h->f8 = b;
  tail_(m, h, h->idx);
}
