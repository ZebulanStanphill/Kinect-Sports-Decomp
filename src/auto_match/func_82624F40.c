extern int fn_82522D98();
extern int fn_82624D70();
extern int XMemSet();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D4;
extern unsigned int lbl_821CA460;


unsigned int *
fn_82624F40(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned short param_4,int param_5,
             unsigned int *param_6)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  int iVar4;
  short sVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  lVar6 = (unsigned __int64)param_4 * 0x1d0 + 0x470;
  puVar3 = (unsigned int *)fn_82522D98(lVar6);
  XMemSet(puVar3,0,lVar6);
  *puVar3 = param_1;
  *(unsigned short *)((int)puVar3 + 6) = param_4;
  uVar9 = lbl_821CA460;
  uVar8 = lbl_821954D4;
  uVar7 = lbl_82192734;
  puVar3[0x6c] = 0;
  puVar3[3] = uVar8;
  puVar3[0x8e] = 0xffffffff;
  puVar3[5] = uVar7;
  puVar3[0x61] = uVar9;
  puVar3[0x57] = uVar9;
  puVar3[0x59] = uVar9;
  if (0 < (__int64)(short)param_4 + -1) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 0x1d0;
      sVar5 = (short)iVar4 + 1;
      iVar4 = (int)sVar5;
      *(short *)((int)puVar3 + iVar1 + 0x342) = sVar5;
    } while ((int)sVar5 < *(short *)((int)puVar3 + 6) + -1);
  }
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned short *)((int)puVar3 + *(short *)((int)puVar3 + 6) * 0x1d0 + 0x172) = 0xffff;
  puVar2 = (unsigned int *)((unsigned int)(puVar3 + 0xc) & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar3[0x25] = *param_6;
  puVar3[0x26] = param_6[1];
  puVar3[0x27] = param_6[2];
  puVar3[0x54] = 1;
  puVar3[0x7f] = 0;
  puVar3[0x95] = 6;
  fn_82624D70(puVar3,param_2,param_3);
  puVar3[0xa1] = 0;
  puVar3[0xa3] = 0xffffffff;
  puVar3[0xa2] = 0;
  return puVar3;
}

