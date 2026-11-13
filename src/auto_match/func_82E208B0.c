extern int fn_8265CAA0(void *);
extern void *fn_82E20270(const char *, const char *, int);
extern char *fn_82E20380();
extern int fn_82F67988(void *);
extern int fn_82F6A938(const char *, void *);
void fn_82E208B0(char *param_1, int *param_2, const char *param_3)
{
  void *lVar1;
  char *uVar2;
  if (param_1[2] == 0 && (lVar1 = fn_82E20270("LoggingHistory.log", "a+", 1)) != 0) {
    if (param_2 == 0) {
      uVar2 = fn_82E20380();
      fn_82F6A938(uVar2, lVar1);
      fn_82F6A938("  Upload Problem -- ", lVar1);
      fn_82F6A938(param_3, lVar1);
      fn_82F6A938("\n", lVar1);
      if (uVar2 != 0) fn_8265CAA0(uVar2);
    } else {
      fn_82F6A938((const char *)param_2[3], lVar1);
      fn_82F6A938("  ", lVar1);
      fn_82F6A938((const char *)param_2[1], lVar1);
      fn_82F6A938("  ", lVar1);
      fn_82F6A938(param_3, lVar1);
      fn_82F6A938("\n", lVar1);
    }
    fn_82F67988(lVar1);
  }
}
