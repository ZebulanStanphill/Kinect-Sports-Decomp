extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E71990();
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_82154AE8;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;


__int64 fn_82E3CE28(int param_1,short *param_2,unsigned char *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int aiStack_60 [2];
  unsigned __int64 uStack_58;
  unsigned char abStack_50 [4];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char abStack_40 [64];
  
  iVar6 = param_1 + 8;
  fn_82E50CB8(iVar6);
  if ((((param_2 != (short *)0x0) && (param_3 != (unsigned char *)0x0)) && (param_4 != (unsigned int *)0x0)) &&
     (*param_4 = 0, *param_2 == 0x14)) {
    pbVar5 = &lbl_8214C020;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != &lbl_8214C030);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar7 = *(unsigned __int64 *)(param_2 + 4);
      aiStack_60[0] = 0;
      iVar3 = fn_82E3BF28(param_1 + 0x1ac,param_3,aiStack_60,abStack_50);
      if (iVar3 == 0) {
        lVar8 = -0x3ff2b9aa;
      }
      else {
        pbVar5 = abStack_50;
        pbVar4 = (unsigned char *)&lbl_82154AE8;
        uStack_4c = *(unsigned int *)(aiStack_60[0] + 0x20);
        uStack_48 = *(unsigned int *)(aiStack_60[0] + 0x24);
        uStack_44 = *(unsigned int *)(aiStack_60[0] + 0x28);
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != abStack_40);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          uStack_58 = 0;
          lVar8 = fn_82E71990(aiStack_60[0],uVar7,*(unsigned int *)(param_1 + 0x44) >> 1 & 1,0xff,
                                    &uStack_58,0);
          if (-1 < lVar8) {
            *param_4 = (int)uStack_58;
          }
        }
        else {
          lVar8 = -0x3ff2c945;
        }
      }
      fn_82E50F10(iVar6);
      return lVar8;
    }
  }
  fn_82E50F10(iVar6);
  return -0x7ff8ffa9;
}

