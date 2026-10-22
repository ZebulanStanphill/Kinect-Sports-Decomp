extern int fn_82BE1A10();
extern __int64 fn_82BE1FD8();
extern int fn_82BE5240();
extern int fn_82BE6148();


void fn_82BE64E0(int param_1,int param_2)

{
  __int64 lVar3;
  
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0x300) {
    fn_82BE1A10();
    *(__int64 *)(param_1 + 0x38) = fn_82BE1FD8();
    if ((*(int *)(param_1 + 0x48) > *(int *)(param_1 + 0x28)) &&
       (fn_82BE6148(param_1,*(int *)(param_1 + 0x48),0x40) == 0)) {
      *(int *)(param_1 + 0x18) = 0x2000;
      fn_82BE5240(param_1,0x65,"ALLOCATION Failed, could not reallocate Request buffer, setting to error status.");
    }
  }
  if (*(int *)(param_1 + 0x18) == 0x2000) {
    lVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0x1000) {
      return;
    }
    fn_82BE1A10();
    lVar3 = fn_82BE1FD8() - *(__int64 *)(param_1 + 0x38);
  }
  *(__int64 *)(param_1 + 0x38) = lVar3;
  return;
}
