extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BF4628();


unsigned __int64 fn_82BEA4D0(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    fn_82BE5240(param_1,0x130,0xffffffff82196582);
    uVar1 = 0;
  }
  else {
    for (puVar2 = (unsigned int *)fn_82BE5340(); puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      if (puVar2[2] != 0) {
        fn_82BF4628(puVar2[2],param_2);
      }
    }
    fn_82BE5340(*(unsigned int *)(param_1 + 0x40));
    while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
      piVar3 = (int *)fn_82BE5378();
      (**(int (***)())(*piVar3 + 4))(piVar3,param_2);
      fn_82BE5350(*(unsigned int *)(param_1 + 0x40));
    }
    uVar1 = 1;
  }
  return uVar1;
}

