void fn_82C40BA0(int param_1,unsigned int *param_2,__int64 param_3,unsigned int *param_4,unsigned int *param_5,
                  int *param_6,int param_7)

{
  short *psVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  
  uVar6 = *param_2;
  psVar1 = (short *)*param_4;
  uVar7 = (unsigned __int64)*param_5;
  if ((int)uVar6 < (int)param_3) {
    param_3 = param_3 - (unsigned __int64)uVar6;
    puVar8 = (unsigned int *)(uVar6 * 4 + *param_6);
    uVar6 = (int)param_3 + uVar6;
    do {
      uVar2 = *puVar8;
      uVar5 = (unsigned __int64)(unsigned int)(1 << (*(unsigned short *)(param_1 + 0x6e) - 1 & 0x3f)) - 1;
      uVar4 = ~uVar5;
      if (((int)uVar4 <= (int)uVar2) && (uVar4 = (unsigned __int64)uVar2, (int)uVar5 < (int)uVar2)) {
        uVar4 = uVar5;
      }
      (**(int (***)())(param_1 + 0x208))(uVar4,uVar7,param_1,0);
      param_3 = param_3 + -1;
      iVar3 = *(int *)(param_1 + 0x58);
      puVar8 = puVar8 + 1;
      *psVar1 = *psVar1 + 1;
      uVar7 = (__int64)iVar3 * (__int64)param_7 + uVar7;
    } while (param_3 != 0);
  }
  *param_2 = uVar6;
  *param_4 = psVar1;
  *param_5 = (unsigned int)uVar7;
  return;
}

