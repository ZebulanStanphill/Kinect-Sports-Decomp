extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_e0;
extern int fn_822B4148();
extern int fn_823DC1D0();
extern int fn_8265BF48();
extern int fn_82F68B5C();


unsigned __int64 fn_823E8D20(int param_1,int param_2,__int64 param_3,__int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned char *puVar11;
  int iVar12;
  __int64 lVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int auStack_120 [8];
  unsigned int auStack_100 [8];
  unsigned char auStack_e0 [224];
  
  uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2c);
  uVar4 = fn_82F68B5C(*(unsigned int *)(param_1 + 4),uVar9);
  uVar5 = fn_822B4148();
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_8265BF48(uVar5,0);
  }
  uVar5 = 0;
  uVar10 = 0;
  if ((param_5 & 0xffffffff) != 0) {
    puVar11 = auStack_e0;
    iVar12 = 0;
    lVar13 = param_3;
    do {
      uVar6 = fn_822B4148(uVar4,uVar9);
      if (((uVar6 & 0xffffffff) != 0) && (iVar8 = fn_8265BF48(uVar6,0), iVar8 == iVar7)) {
        uVar1 = *(unsigned int *)param_4;
        puVar2 = (unsigned int *)((int)in_r0 + (int)lVar13 & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(puVar11 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uVar5 = uVar5 + 1;
        puVar11 = puVar11 + 0x10;
        *(unsigned int *)((int)auStack_100 + iVar12) = uVar1;
        *(unsigned int *)((int)auStack_120 + iVar12) = uVar10;
        iVar12 = iVar12 + 4;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x10;
      param_4 = param_4 + 4;
    } while ((unsigned __int64)uVar10 < (param_5 & 0xffffffff));
    if ((uVar5 & 0xffffffff) != 0) {
      iVar7 = fn_823DC1D0(auStack_e0,uVar5);
      return (unsigned __int64)auStack_120[iVar7];
    }
  }
  uVar5 = fn_823DC1D0(param_3,param_5);
  return uVar5;
}

