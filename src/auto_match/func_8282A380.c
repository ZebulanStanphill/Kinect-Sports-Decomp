extern int fn_82381BC0();
extern int fn_82822510();
extern int fn_828297A0();
extern int fn_828298A0();


void fn_8282A380(unsigned __int64 param_1,__int64 param_2,int param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int * apuStack_30;
  
  fn_828298A0(param_1,param_2,param_4);
  if (*param_4 == 0) {
    if (*(int *)(*(int *)(param_3 + 0x4c) + 8) == 0) {
      fn_82822510(param_2 + 0x2fc,0xffffffff828297a0,param_1,param_4);
    }
    else {
      puVar1 = *(unsigned int **)(*(int *)(param_3 + 0x4c) + 4);
      apuStack_30 = (unsigned int *)*puVar1;
      while (puVar2 = apuStack_30, apuStack_30 != puVar1) {
        iVar3 = fn_828297A0(apuStack_30[3],param_1);
        if (iVar3 != 0) {
          *param_4 = puVar2[3];
          return;
        }
        fn_82381BC0(&apuStack_30);
      }
    }
  }
  return;
}

