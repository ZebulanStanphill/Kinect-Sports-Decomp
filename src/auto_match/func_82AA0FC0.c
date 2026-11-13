extern int fn_8265C940();


unsigned __int64 fn_82AA0FC0(char *param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  
  if (*param_1 == '\0') {
    uVar3 = *(unsigned int *)(param_1 + 4);
    iVar5 = fn_8265C940((unsigned __int64)uVar3 * 0x14,0x24870000);
    if (iVar5 == 0) {
      uVar4 = 0xffffffff8007000e;
    }
    else {
      uVar6 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        puVar9 = (unsigned int *)(iVar5 + -4);
        do {
          bVar1 = param_1[uVar6 + 0x148];
          iVar8 = 0;
          bVar2 = param_1[bVar1 + 0x48];
          lVar10 = 4;
          *(unsigned short *)(puVar9 + 1) = 0;
          *(unsigned short *)((int)puVar9 + 6) = (unsigned short)bVar2;
          puVar9 = puVar9 + 1;
          do {
            iVar7 = (unsigned int)bVar1 * 4 + 0x92 + iVar8;
            iVar8 = iVar8 + 1;
            puVar9 = puVar9 + 1;
            *puVar9 = *(unsigned int *)(param_1 + iVar7 * 4);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(unsigned int *)(param_1 + 4));
      }
      *param_3 = (int)((unsigned __int64)uVar3 * 0x14);
      uVar4 = 0;
      *param_2 = iVar5;
    }
  }
  else {
    uVar4 = 0xffffffff88760b74;
  }
  return uVar4;
}

