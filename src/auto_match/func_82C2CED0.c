extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82C2CED0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  short sVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = 0;
  if ((param_3 & 0xffff) != 0) {
    uVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
    iVar5 = 0;
    dVar10 = (double)lbl_82002C5C;
    dVar9 = (double)lbl_821AAD20;
    do {
      if (uVar4 != 0) {
        iVar7 = 0;
        do {
          dVar8 = (double)*(float *)(*(int *)(iVar7 * 0x6f0 + *(int *)(param_1 + 0x140) + 0x3c) +
                                    iVar5 * 4);
          uVar3 = (unsigned __int64)(unsigned int)(1 << (*(unsigned short *)(param_1 + 0x6e) - 1 & 0x3f));
          if (dVar9 <= dVar8) {
            uVar3 = uVar3 - 1;
            uVar1 = (unsigned __int64)(unsigned int)(int)(dVar8 + dVar10);
            if ((int)uVar3 < (int)(dVar8 + dVar10)) goto LAB_82c2cf90;
          }
          else {
            uVar3 = ~(uVar3 - 1);
            uVar1 = (unsigned __int64)(unsigned int)(int)(dVar8 - dVar10);
            if ((int)(dVar8 - dVar10) < (int)uVar3) {
LAB_82c2cf90:
              uVar1 = uVar3;
            }
          }
          (**(int (***)())(param_1 + 0x208))(uVar1,param_2,param_1,lVar6);
          sVar2 = (short)iVar7 + 1;
          uVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
          lVar6 = lVar6 + 1;
          iVar7 = (int)sVar2;
        } while ((int)sVar2 < (int)uVar4);
      }
      sVar2 = (short)iVar5 + 1;
      iVar5 = (int)sVar2;
    } while ((int)sVar2 < (int)(param_3 & 0xffff));
  }
  return 0;
}

