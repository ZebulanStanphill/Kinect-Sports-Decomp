extern int fn_82270B70();
extern int fn_822A87F0();


void fn_82270040(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar5 = fn_82270B70();
  piVar2 = *(int **)(iVar5 + 0x5c);
  fn_822A87F0(piVar2,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((param_7 != 0) && (iVar5 = *piVar2, iVar5 != piVar2[1])) {
    do {
      iVar3 = *(int *)(iVar5 + 0x24);
      if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x54c) == 0 && (*(int *)(iVar3 + 0x548) == 0)))) {
        uVar1 = *(unsigned int *)(iVar5 + 0x20);
        puVar4 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        *(unsigned int *)(iVar3 + 0x544) = 0;
        *(unsigned int *)(iVar3 + 0x520) = uVar1;
        *(unsigned int *)(iVar3 + 0x548) = 0;
        puVar4 = (unsigned int *)(iVar3 + 0x510U & 0xfffffff0);
        *puVar4 = uVar6;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        *(unsigned int *)(iVar3 + 0x534) = 0;
      }
      iVar5 = iVar5 + 0x30;
    } while (iVar5 != piVar2[1]);
  }
  return;
}

