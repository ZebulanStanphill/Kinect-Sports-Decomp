extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_8202EE64;


void fn_8292D648(int param_1,int param_2,int param_3,__int64 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar8;
  __int64 lVar7;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  fVar6 = lbl_8202EE64;
  fVar5 = lbl_82015BE0;
  uVar9 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar9;
  if (uVar9 < uVar8) {
    puVar10 = (unsigned int *)(uVar9 - 4);
    lVar7 = (unsigned __int64)((uVar8 - uVar9) - 1 >> 2) + 1;
    do {
      uVar8 = puVar10[1];
      sVar1 = (short)((short)uVar8 << 6) >> 6;
      sVar2 = (short)(uVar8 >> 4) >> 6;
      sVar3 = (short)(uVar8 >> 0xe) >> 6;
      pfVar4 = (float *)param_4;
      pfVar4[2] = (float)(__int64)(short)((unsigned short)(sVar3 == -0x200) + sVar3) * fVar6;
      *pfVar4 = (float)(__int64)(short)((unsigned short)(sVar1 == -0x200) + sVar1) * fVar6;
      pfVar4[1] = (float)(__int64)(short)((unsigned short)(sVar2 == -0x200) + sVar2) * fVar6;
      puVar10 = puVar10 + 1;
      pfVar4[3] = (float)(*puVar10 >> 0x1e) * fVar5;
      param_4 = param_4 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

