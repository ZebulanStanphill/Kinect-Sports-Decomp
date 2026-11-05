extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct { char pad[0x1c]; char **arr; unsigned count; } Obj_82A21508;
typedef struct { char pad[4]; unsigned short m4; unsigned short pad6; unsigned short m8; unsigned short ma; unsigned short mc; } Blk_82A21508;

unsigned fn_82A21508(Obj_82A21508 *param_1, unsigned (*param_2)(void *, char *, char *, int), void *param_3)
{
  unsigned n;
  unsigned i;
  unsigned j;
  int off;
  char *blk;
  unsigned *e;
  unsigned w4;
  unsigned v;
  unsigned char b1, b2;
  unsigned r;
  int c;
  char *a2, *a1;

  RtlEnterCriticalSection(param_1);
  n = param_1->count;
  i = 0;
  if (n != 0) {
    off = 0;
    do {
      j = 0;
      blk = *(char **)((char *)param_1->arr + off);
      if (((Blk_82A21508 *)blk)->m8 != 0) {
        do {
          w4 = *(unsigned *)(blk + 4);
          e = (unsigned *)(blk + (j - ((Blk_82A21508 *)blk)->mc) * 4 + ((Blk_82A21508 *)blk)->m4);
          v = *e;
          b1 = *(unsigned char *)e;
          b2 = *((unsigned char *)e + 1);
          a1 = blk + (unsigned short)w4 * b1 + 0x14;
          c = b2 - 1;
          a2 = blk + (unsigned short)v + 1;
          RtlLeaveCriticalSection(param_1);
          r = param_2(param_3, a1, a2, c);
          if (r != 0) {
            return r;
          }
          RtlEnterCriticalSection(param_1);
          n = param_1->count;
        } while (i < n && (j = j + 1, j < ((Blk_82A21508 *)blk)->m8));
      }
      i++;
      off += 4;
    } while (i < n);
  }
  RtlLeaveCriticalSection(param_1);
  return 0;
}
