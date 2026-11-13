extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DADDB8();
extern int fn_82DBC148();


unsigned __int64 fn_82D8E938(int param_1,unsigned __int64 param_2,int param_3)

{
  int lVar1;
  
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  fn_82DBC148();
  if (param_3 != 0) {
    fn_82DADDB8(param_1,param_2);
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar1;
  if ((lVar1 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82D80C18(param_1);
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      fn_82D80C30(param_1);
    }
  }
  return param_2;
}

