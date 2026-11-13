extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFC050();


void fn_82CFF040(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar2;
  int iVar5;
  unsigned __int64 uVar6;
  
  if (0 < (int)param_3) {
    iVar5 = (param_1[3] - 1) * 4;
    do {
      uVar1 = *param_1;
      uVar6 = (unsigned __int64)uVar1 - (unsigned __int64)param_1[1];
      if (uVar6 == 0) {
        iVar3 = fn_82CE5410();
        uVar4 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))
                          (*(int **)(iVar3 + 0x10),(unsigned __int64)uVar1);
        iVar3 = fn_82CE5410();
        if (param_1[3] == (param_1[4] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_1 + 2,4);
        }
        iVar5 = iVar5 + 4;
        *(unsigned int *)(param_1[3] * 4 + param_1[2]) = uVar4;
        param_1[3] = param_1[3] + 1;
        uVar6 = (unsigned __int64)*param_1;
        param_1[1] = 0;
      }
      lVar2 = (unsigned __int64)*(unsigned int *)(param_1[2] + iVar5) + (unsigned __int64)param_1[1];
      if ((int)param_3 <= (int)uVar6) {
        fn_82CFC050(lVar2,param_2,param_3);
        param_1[1] = param_1[1] + (int)param_3;
        return;
      }
      fn_82CFC050(lVar2,param_2,uVar6);
      param_3 = param_3 - uVar6;
      param_2 = uVar6 + param_2;
      param_1[1] = *param_1;
    } while (0 < param_3);
  }
  return;
}

