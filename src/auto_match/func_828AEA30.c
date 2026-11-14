typedef struct { unsigned char b; } Alloc_828AEA30;

typedef void (*VFn_828AEA30)(void *, int);

extern unsigned int fn_825178E0(unsigned int, unsigned int, unsigned int, Alloc_828AEA30);
extern void fn_82239010(unsigned int, unsigned int, unsigned int *, Alloc_828AEA30);
extern void fn_828B01F8(int);

void fn_828AEA30(int param_1)
{
  void **obj;
  unsigned int *p;
  unsigned int last;
  unsigned int r;
  int i;
  Alloc_828AEA30 a0;
  Alloc_828AEA30 a1;
  Alloc_828AEA30 a2;
  Alloc_828AEA30 a3;

  obj = *(void ***)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = 0;
  if (obj != 0) {
    (*(VFn_828AEA30 *)*obj)(obj, 1);
  }
  fn_828B01F8(param_1 + 0x278);
  p = (unsigned int *)(param_1 + 0x10c);
  i = 4;
  do {
    last = p[0];
    if (p[-1] != last) {
      r = fn_825178E0(last, last, p[-1], a0);
      fn_82239010(r, p[0], p + 2, a1);
      p[0] = r;
    }
    last = p[0x10];
    if (p[0xf] != last) {
      r = fn_825178E0(last, last, p[0xf], a2);
      fn_82239010(r, p[0x10], p + 0x12, a3);
      p[0x10] = r;
    }
    p = p + 4;
  } while (--i != 0);
  *(unsigned char *)(param_1 + 0x1ac) = 0;
}
