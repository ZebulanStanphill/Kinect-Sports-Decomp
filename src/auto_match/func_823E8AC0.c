extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_e0;
extern int fn_822B4148();
extern int fn_823DC1D0();
extern int fn_8265BF48();


unsigned __int64 fn_823E8AC0(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned int *param_4,
                       unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  int iVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int auStack_120 [8];
  unsigned int auStack_100 [8];
  unsigned char auStack_e0 [96];
  
  uVar4 = fn_822B4148();
  if ((uVar4 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_8265BF48(uVar4,0);
  }
  uVar4 = 0;
  uVar8 = 0;
  if ((param_5 & 0xffffffff) != 0) {
    puVar9 = auStack_e0;
    iVar10 = 0;
    lVar11 = param_3;
    do {
      uVar5 = fn_822B4148(param_1,param_2);
      if (((uVar5 & 0xffffffff) != 0) && (iVar7 = fn_8265BF48(uVar5,0), iVar7 == iVar6)) {
        uVar1 = *param_4;
        puVar2 = (unsigned int *)((int)in_r0 + (int)lVar11 & 0xfffffff0);
        uVar12 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(puVar9 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        uVar4 = uVar4 + 1;
        puVar9 = puVar9 + 0x10;
        *(unsigned int *)((int)auStack_100 + iVar10) = uVar1;
        *(unsigned int *)((int)auStack_120 + iVar10) = uVar8;
        iVar10 = iVar10 + 4;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x10;
      param_4 = param_4 + 1;
    } while ((unsigned __int64)uVar8 < (param_5 & 0xffffffff));
    if ((uVar4 & 0xffffffff) != 0) {
      iVar6 = fn_823DC1D0(auStack_e0,uVar4);
      return (unsigned __int64)auStack_120[iVar6];
    }
  }
  uVar4 = fn_823DC1D0(param_3,param_5);
  return uVar4;
}

