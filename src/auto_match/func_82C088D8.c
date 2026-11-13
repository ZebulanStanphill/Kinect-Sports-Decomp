extern unsigned int *auStack_1c;
extern int fn_82C080A0();
extern int fn_82C10580();
extern int fn_82C10B70();
extern unsigned int uStack_20;



unsigned int fn_82C088D8(unsigned __int64 param_1)
{
  int hr;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  auStack_1c = 0;
  uStack_20 = 0;
  hr = fn_82C10580(&uStack_20);
  if (hr >= 0) {
    hr = fn_82C080A0(&auStack_1c,param_1,uStack_20);
  }
  if (hr < 0) { fn_82C10B70(uStack_20); return 0; }
  return auStack_1c;
}
