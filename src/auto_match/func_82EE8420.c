extern int fn_82A1E338();
extern int fn_82A1E3B8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82EE8420(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  fn_82E50CB8(param_1 + 0x24);
  if (*(int *)(param_1 + 0x10) != -1) {
    if (param_2 == 0) {
      fn_82A1E338(*(int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 100));
      *(unsigned int *)(param_1 + 100) = 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 100) == -1) {
        uVar1 = fn_82A1E3B8();
        *(unsigned int *)(param_1 + 100) = uVar1;
      }
      if (*(int *)(param_1 + 0x68) != -1) {
        fn_82A1E338(*(unsigned int *)(param_1 + 0x10));
      }
    }
    if (param_3 == (int *)0x0) goto LAB_82ee84d0;
    if (*(int *)(param_1 + 0x60) == 0) {
      *(int **)(param_1 + 0x60) = param_3;
      (**(int (***)())(*param_3 + 4))(param_3);
      goto LAB_82ee84d0;
    }
  }
  uVar2 = 0xffffffff8000ffff;
LAB_82ee84d0:
  fn_82E50F10(param_1 + 0x24);
  return uVar2;
}

