extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D58B20();


void fn_82D595A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar4;
  __int64 lVar3;
  int *piVar5;
  unsigned int *puVar6;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    iVar2 = 0;
    do {
      piVar5 = (int *)(iVar2 + *(int *)(param_1 + 0x1e24));
      if ((*piVar5 == (int)param_2) && (piVar5[1] == (int)param_3)) {
        iVar4 = *(int *)(param_1 + 0x1e28) + -1;
        puVar6 = (unsigned int *)(iVar2 + *(int *)(param_1 + 0x1e24));
        *(int *)(param_1 + 0x1e28) = iVar4;
        iVar4 = (iVar4 - iVar1) * 8;
        if (0 < iVar4) {
          lVar3 = (unsigned __int64)(iVar4 - 1U >> 2) + 1;
          do {
            *puVar6 = puVar6[2];
            puVar6 = puVar6 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + -8;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x1e28));
  }
  fn_82D58B20(param_1,param_2,param_3,0);
  iVar1 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x1e28) == (*(unsigned int *)(param_1 + 0x1e2c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x1e24),8);
  }
  iVar1 = *(int *)(param_1 + 0x1e24);
  iVar2 = *(int *)(param_1 + 0x1e28) * 8;
  *(int *)(param_1 + 0x1e28) = *(int *)(param_1 + 0x1e28) + 1;
  *(int *)(iVar2 + iVar1) = (int)param_2;
  *(int *)(iVar2 + iVar1 + 4) = (int)param_3;
  return;
}

