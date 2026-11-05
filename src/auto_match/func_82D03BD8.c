typedef struct { char pad[0xc]; unsigned base; } Heap_82D03BD8;
typedef struct { unsigned sz : 30; unsigned f1 : 1; unsigned f0 : 1; } Head_82D03BD8;
typedef struct { unsigned prev; unsigned head; } Chunk_82D03BD8;
int fn_82D03BD8(Heap_82D03BD8 *param_1, unsigned param_2)
{
  unsigned *p = (unsigned *)(param_2 - 0x10);
  unsigned h, q, s;
  unsigned char f;
  if ((param_2 & 0xf) != 0) return 0;
  if ((unsigned)p < param_1->base) return 0;
  h = p[1];
  f = (h >> 1) & 1;
  if (f == 0) return 0;
  s = h & 0xfffffffc;
  if (s < 0x10) return 0;
  if ((*(unsigned *)((char *)p + s + 4) & 1) == 0) return 0;
  if ((h & 1) == 0) {
    q = *(unsigned *)((char *)p + (4 - *p));
    f = (q >> 1) & 1;
    if (f != 0) return 0;
    if ((q & 0xfffffffc) != *p) return 0;
  }
  return 1;
}
