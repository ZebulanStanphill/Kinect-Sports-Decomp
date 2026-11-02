typedef struct { int a, b; } B8_823FC930;
extern void *fn_82365BD8(B8_823FC930 *, int);
extern void fn_823FDAC8(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern char lbl_821AD588[];

int *fn_823FC930(int *p, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int s1, int s2, int s3)
{
  p[1] = 1;
  *(char **)p = lbl_821AD588;
  p[2] = 1;
  if (p + 3 != 0) {
    B8_823FC930 b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
    fn_823FDAC8(p + 3, fn_82365BD8(&b10, a1), fn_82365BD8(&b9, a2), fn_82365BD8(&b8, a3), fn_82365BD8(&b7, a4),
      fn_82365BD8(&b6, a5), fn_82365BD8(&b5, a6), fn_82365BD8(&b4, a7), fn_82365BD8(&b3, s1), fn_82365BD8(&b2, s2), fn_82365BD8(&b1, s3));
  }
  return p;
}
