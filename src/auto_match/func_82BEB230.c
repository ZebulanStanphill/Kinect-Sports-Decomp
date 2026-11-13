extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEA4D0();


unsigned __int64 fn_82BEB230(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      fn_82BE5340();
      while (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
        iVar2 = fn_82BE5378();
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (**(int (***)())(**(int **)(iVar2 + 0x34) + 4))();
          }
          if ((iVar3 != 0) && (*(int *)(*(int *)(iVar2 + 0x4c) + 0x14) == param_2)) {
            if (*(int **)(iVar2 + 0x34) == (int *)0x0) {
              uVar1 = 0;
            }
            else {
              uVar1 = (**(int (***)())(**(int **)(iVar2 + 0x34) + 4))();
            }
            fn_82BEA4D0(param_1,uVar1);
          }
        }
        fn_82BE5350(*(unsigned int *)(param_1 + 0x44));
      }
      return 1;
    }
    fn_82BE5240(param_1,0x131,0xffffffff82196582);
  }
  return 0;
}

