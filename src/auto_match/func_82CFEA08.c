typedef unsigned char bool;
extern int fn_82CE5410();
extern int fn_82CE63B0();


bool fn_82CFEA08(int param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  param_3[1] = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 1;
  if (-1 < (__int64)uVar5) {
    lVar6 = (uVar5 & 0x1fffffff) << 3;
    do {
      if ((unsigned int)param_2 == 0) break;
      puVar4 = (unsigned int *)(*(int *)(param_1 + 4) + (int)lVar6);
      uVar1 = *puVar4;
      if ((uVar1 & (unsigned int)param_2) == uVar1) {
        uVar2 = puVar4[1];
        iVar3 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_3,4);
        }
        param_2 = param_2 & ~(unsigned __int64)uVar1;
        *(unsigned int *)(param_3[1] * 4 + *param_3) = uVar2;
        param_3[1] = param_3[1] + 1;
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -8;
    } while (-1 < (__int64)uVar5);
  }
  *param_4 = (int)param_2;
  return param_2 != 0;
}

