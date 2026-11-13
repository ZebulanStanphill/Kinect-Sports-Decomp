extern unsigned int uStack_5e;


unsigned __int64 fn_82A56A48(int *param_1,int param_2,__int64 param_3)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned short *puVar6;
  __int64 lVar7;
  unsigned short uStack_5e;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x5a];
  if ((param_1[0x59] != 0) && (uVar1 = *(unsigned short *)(iVar2 + 0x6e), 0 < (int)param_3)) {
    iVar5 = param_2;
    do {
      lVar7 = 0;
      if (0 < iVar3) {
        puVar6 = (unsigned short *)(param_2 + -2);
        do {
          iVar4 = (**(int (***)())(iVar2 + 0x20c))
                            (iVar5,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),lVar7
                            );
          lVar7 = lVar7 + 1;
          uStack_5e = (unsigned short)(iVar4 >> (uVar1 - 0x10 & 0x3f));
          puVar6 = puVar6 + 1;
          *puVar6 = uStack_5e;
        } while ((int)lVar7 < iVar3);
      }
      param_3 = param_3 + -1;
      param_2 = iVar3 * 2 + param_2;
      iVar5 = iVar3 * *(int *)(iVar2 + 0x58) + iVar5;
    } while (param_3 != 0);
  }
  return 0;
}

