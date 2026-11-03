typedef struct {
  char pad0[8];
  unsigned nB;            /* 8 */
  unsigned nA;            /* 0xc */
  char pad10[4];
  void **srcB;            /* 0x14 */
  void **srcA;            /* 0x18 */
  char pad1c[0x29c];
  void **dstA;            /* 0x2b8 */
  void **dstB;            /* 0x2bc */
  unsigned cntB;          /* 0x2c0 */
  unsigned cntA;          /* 0x2c4 */
} Obj_829A3A78;
extern void **fn_8265C940(unsigned, int);
extern void *fn_82963998(int);
extern void *fn_829632A0(void *);
extern int fn_82963D50(void *, void *);
extern void *fn_82964128(int);
extern void *fn_82BA02A8(void *);
extern int fn_82963FA8(void *, void *);

int fn_829A3A78(Obj_829A3A78 *o)
{
  int hr;
  unsigned i;
  int off;
  void *m;
  hr = 0;
  o->dstA = fn_8265C940(o->nA << 2, 0x24810000);
  o->dstB = fn_8265C940(o->nB << 2, 0x24810000);
  if (o->dstA == 0 || o->dstB == 0) {
fail:
    hr = 0x8007000e;
  } else {
    i = 0;
    if (o->nA > 0) {
      off = 0;
      do {
        m = fn_82963998(0x74);
        if (m != 0) {
          m = fn_829632A0(m);
        } else {
          m = 0;
        }
        *(void **)((char *)o->dstA + off) = m;
        if (*(void **)((char *)o->dstA + off) == 0) {
          goto fail;
        }
        hr = fn_82963D50(*(void **)((char *)o->dstA + off), *(void **)((char *)o->srcA + off));
        if (hr < 0) {
          return hr;
        }
        i++;
        off += 4;
      } while (i < o->nA);
    }
    i = 0;
    if (o->nB > 0) {
      off = 0;
      do {
        m = fn_82964128(0x80);
        if (m != 0) {
          m = fn_82BA02A8(m);
        } else {
          m = 0;
        }
        *(void **)((char *)o->dstB + off) = m;
        if (*(void **)((char *)o->dstB + off) == 0) {
          goto fail;
        }
        hr = fn_82963FA8(*(void **)((char *)o->dstB + off), *(void **)((char *)o->srcB + off));
        if (hr < 0) {
          return hr;
        }
        i++;
        off += 4;
      } while (i < o->nB);
    }
    { unsigned *pa = &o->nA; unsigned *pb = &o->nB; unsigned a = *pa; unsigned b = *pb; o->cntB = b; o->cntA = a; }
  }
  return hr;
}
