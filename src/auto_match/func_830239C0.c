typedef int (*code)();
extern void *fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83023250();
extern int *fn_83023880();
extern int fn_83023908();
extern unsigned int lbl_831BC770;

int *fn_830239C0(void)
{
  unsigned int heap;
  void *mem;
  int *p;

  mem = fn_82FA5060(lbl_831BC770, 0x50);
  if (mem != 0 && (p = fn_83023880(mem)) != 0) {
    if (fn_83023250(p) == 1) {
      return p;
    }
    fn_83023908(p);
    heap = lbl_831BC770;
    (*(code *)*p)(p, 0);
    fn_82FA5190(heap, p);
  }
  return 0;
}
