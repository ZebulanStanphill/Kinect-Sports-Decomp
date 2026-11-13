extern int fn_82C10710(void *, void *, void *, void *, void *, void *, void *, int);

int fn_82C108A8(void *a1, void *a2, void *a3, void *a4, int a5, int a6, void *a7)
{
  struct { int flag; int ret; int v; int pad; int b0; int b1; int pad2[2]; } L;
  int r;
  L.flag = 0;
  L.b0 = 0;
  L.b1 = 0;
  r = fn_82C10710(a1, a2, a7, a3, a4, &L.flag, &L.b0, 1);
  if (a6 != 0) {
    L.ret = r;
    L.flag = 1;
    L.b0 = 0;
    L.b1 = 0;
    L.v = a5;
    fn_82C10710(a1, a7, a2, a3, a4, &L.flag, &L.b0, 1);
  }
  return 0;
}
