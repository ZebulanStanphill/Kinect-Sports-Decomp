extern void *fn_82BE56B0(int);
extern void *fn_82BEE0C8(void *);
extern int fn_82BEE168(void *, void *, unsigned int, char *);
extern void fn_82BEE850(void);
extern int *lbl_8322B1E0;
extern int lbl_8317523C;

int fn_82BE8020(int param_1, unsigned int param_2)
{
  void *mem;

  if (lbl_8322B1E0 != 0) {
    return 0x69;
  }
  if (param_2 == 0) {
    return 100;
  }
  mem = fn_82BE56B0(0x18);
  if (mem != 0) {
    lbl_8322B1E0 = (int *)fn_82BEE0C8(mem);
  } else {
    lbl_8322B1E0 = 0;
  }
  if (lbl_8322B1E0 == 0) {
    return 0x65;
  }
  lbl_8317523C = 1;
  if (fn_82BEE168(lbl_8322B1E0, (void *)fn_82BEE850, param_2, "Massive DNS") == 0) {
    lbl_8317523C = 0;
    if (lbl_8322B1E0 != 0) {
      (**(void (**)(int *, int))*lbl_8322B1E0)(lbl_8322B1E0, 1);
    }
    lbl_8322B1E0 = 0;
    return 0x69;
  }
  return 0;
}
