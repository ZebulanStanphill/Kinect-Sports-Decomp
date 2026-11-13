extern unsigned int MmGetPhysicalAddress(void *);

typedef struct W0_82A45CD8 {
  unsigned int a : 10;
  unsigned int t : 2;
  unsigned int b : 20;
} W0_82A45CD8;

typedef struct W2_82A45CD8 {
  unsigned int hi : 6;
  unsigned int lo : 26;
} W2_82A45CD8;

typedef struct Slot_82A45CD8 {
  unsigned int w0;
  unsigned int w1;
  W2_82A45CD8 w2;
  unsigned int pad3[2];
  unsigned int p14;
  unsigned int p18;
  unsigned int pad1c[5];
  unsigned int p30;
  unsigned int p34;
  unsigned int pad38[7];
  unsigned int r54;
  unsigned int r58;
  unsigned int pad5c;
} Slot_82A45CD8;

typedef struct Obj_82A45CD8 {
  int pad[2];
  Slot_82A45CD8 *slots;
} Obj_82A45CD8;

int fn_82A45CD8(Obj_82A45CD8 *self, int idx, unsigned int *tex, unsigned int off)
{
  Slot_82A45CD8 *s;
  unsigned int t;
  unsigned int v;
  unsigned int n;

  s = &self->slots[idx];
  t = ((W0_82A45CD8 *)s)->t;
  v = off >> 11;
  if ((t & 1) == 0) {
    if (s->p14 != MmGetPhysicalAddress(tex)) {
      s->p14 = MmGetPhysicalAddress(tex);
      s->p34 = 1;
    }
    if ((s->w0 & 0xfff) != v) {
      s->p30 = 1;
      s->w0 = (v & 0xfff) | (s->w0 & 0xfffff000);
    }
    n = s->w0;
    if ((n & 0x300000) != ((n & 0x200000) | 0x100000)) {
      s->p30 = 1;
      s->w0 = n | 0x100000;
    }
    s->r54 = (unsigned int)tex;
  } else if ((t & 2) == 0) {
    if (s->p18 != MmGetPhysicalAddress(tex)) {
      s->p18 = MmGetPhysicalAddress(tex);
      s->p34 = 1;
    }
    if ((s->w1 & 0xfff) != v) {
      s->p30 = 1;
      s->w1 = (v & 0xfff) | (s->w1 & 0xfffff000);
    }
    n = s->w0;
    if ((n & 0x300000) != ((n & 0x100000) | 0x200000)) {
      s->p30 = 1;
      s->w0 = n | 0x200000;
    }
    s->r58 = (unsigned int)tex;
  } else {
    return 0x80070005;
  }
  if (t == 0 && *tex != 0x7fff) {
    n = ((*tex >> 11) & 0x7fff) + 0x20;
    if (n != 0 && s->w2.lo != n) {
      s->p30 = 1;
      s->w2.lo = n;
    }
  }
  return 0;
}
