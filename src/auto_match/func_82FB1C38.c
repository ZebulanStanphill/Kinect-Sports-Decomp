typedef int (*code)();
extern void *fn_82FA5060();
extern int fn_82FA9208();
extern char *fn_82FB4390();
extern int fn_82FB5E50();
extern int lbl_831BC768;

char *fn_82FB1C38(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                 __int64 param_5)
{
  void *mem;
  char *obj;
  char *ret;

  mem = fn_82FA5060(lbl_831BC768,0x7c);
  ret = mem ? fn_82FB4390(mem,param_1,param_2) : 0;
  if (ret != 0) {
    obj = ret;
    *(int *)(obj + 0x2c) = *(int *)(obj + 0x2c) + 1;
    if (fn_82FB5E50(obj,param_3,param_4,*(int *)(param_1 + 0xc4),
                    *(int *)(param_1 + 0xcc),param_5) == 1) {
      fn_82FA9208(obj);
    }
    else {
      (*(code *)(*(int *)(obj + 4) + 4))(obj + 4,0);
      fn_82FA9208(obj);
      ret = 0;
    }
  }
  return ret;
}
