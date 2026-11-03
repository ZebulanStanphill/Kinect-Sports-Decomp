extern int fn_82BE5340(void *);
extern void fn_82BE5350(void *);
extern char *fn_82BE5378(void *);
extern void fn_82BE5398(void *, int, int);
extern int stricmp(const char *, const char *);
extern void (*lbl_831751CC)(char *);

int fn_82BE21A8(char *self, const char *name)
{
  void *it = self + 0x160;
  fn_82BE5340(it);
  while (*(int *)(self + 0x168) != 0) {
    if (stricmp(name, fn_82BE5378(it)) == 0) {
      lbl_831751CC(fn_82BE5378(it));
      fn_82BE5398(it, *(int *)(self + 0x168), 1);
      return 1;
    }
    fn_82BE5350(it);
  }
  return 0;
}
