extern unsigned int iStack_c;
extern unsigned int lbl_821425EC;
extern unsigned int lbl_821425F0;


void fn_82DBFDA0(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5
                  ,unsigned int *param_6)

{
  unsigned __int64 uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iStack_c;
  
  *param_6 = param_1;
  param_6[1] = param_2;
  param_6[2] = param_3;
  fVar7 = lbl_821425F0;
  fVar6 = lbl_821425EC;
  uVar5 = (__int64)((int)param_5 >> 4) + (unsigned __int64)((int)param_5 < 0 && (param_5 & 0xf) != 0) &
          0xfffffff;
  uVar9 = uVar5 * 0x10;
  uVar4 = param_4 + 0xfU & 0xfffffff0;
  param_6[3] = uVar4;
  uVar10 = uVar9 + (uVar9 & 0x3fffffff) * 4;
  uVar1 = (uVar10 & 0xffffffff) << 1;
  uVar3 = (unsigned int)uVar1 | (unsigned int)uVar10 >> 0x1f;
  fVar2 = (float)(__int64)(int)((uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xffffffff) << 3);
  uVar3 = ((int)uVar3 >> 6) + (unsigned int)((int)uVar3 < 0 && (uVar1 & 0x3e) != 0) + uVar4 & 0xfffffff0;
  param_6[4] = uVar3;
  param_6[6] = uVar3;
  uVar3 = ((int)((unsigned int)(uVar5 << 6) | (unsigned int)uVar9 >> 0x1e) >> 6) + uVar3 & 0xfffffff0;
  param_6[0x11] = param_4 + (unsigned int)uVar9;
  param_6[8] = uVar3;
  param_6[7] = uVar3;
  param_6[10] = uVar3;
  param_6[0xb] = uVar3;
  iStack_c = (int)(__int64)(fVar2 * fVar7);
  iVar8 = iStack_c;
  iStack_c = (int)(__int64)(fVar2 * fVar6);
  uVar3 = uVar3 - iVar8 & 0xfffffff0;
  param_6[5] = param_6[3];
  param_6[0xc] = uVar3;
  param_6[9] = uVar3;
  uVar4 = uVar3 - iStack_c & 0xfffffff0;
  param_6[0xe] = uVar3;
  param_6[0xd] = uVar4;
  param_6[0x10] = uVar4;
  param_6[0x12] = uVar4;
  param_6[0x13] = uVar4;
  param_6[0xf] = uVar3;
  return;
}

