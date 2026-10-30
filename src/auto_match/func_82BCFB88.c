typedef struct {
  char pad[0x64];
  int *f64;
  int *f68;
  int *f6c;
} Item_82BCFB88;
extern int **fn_82BA4058();
extern int fn_82BBFE28(void *);
extern void fn_82B7BEB0(int, int *);

static void ArrFree(int *q)
{
  unsigned p = (unsigned)q;
  if (p != 0) fn_82B7BEB0(*(int *)(p - 4), (int *)(p - 4));
}

void fn_82BCFB88(char *self)
{
  int **arr = fn_82BA4058();
  int i = 1;
  int **pp;
  void *h = self + 0x80;
  if (fn_82BBFE28(h) >= 1) {
    pp = arr + 1;
    do {
      Item_82BCFB88 *it = (Item_82BCFB88 *)*pp;
      int *p = it->f6c;
      ArrFree(p);
      p = it->f64;
      it->f6c = 0;
      ArrFree(p);
      p = it->f68;
      it->f64 = 0;
      ArrFree(p);
      it->f68 = 0;
      i++;
      pp++;
    } while (i <= fn_82BBFE28(h));
  }
}
