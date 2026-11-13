extern int fn_82D7E470();
extern unsigned int lbl_831604F0;
extern unsigned int lbl_831604F4;
extern unsigned int lbl_831604F8;


unsigned __int64 fn_82AA6350(int param_1,unsigned int *param_2,unsigned __int64 param_3,int (**param_4)(),
                       unsigned __int64 param_5)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  
  piVar2 = (int *)*param_2;
  puVar6 = (unsigned int *)(**(int (***)())(*piVar2 + 0xc))(piVar2);
  uVar3 = *puVar6;
  if (((uVar3 & 0x20) == 0) || ((param_3 & 0x40000) != 0)) {
    return 0xffffffff80004005;
  }
  pcVar7 = lbl_831604F8;
  if (param_4 != (int (**)())0x0) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    (*param_4)(param_5,lbl_831604F8,
               pcVar7 + (-1 - (int)lbl_831604F8));
  }
  puVar6[7] = 0;
  puVar6[8] = 0;
  *puVar6 = uVar3 & 0xffffffdf;
  *(unsigned int *)(param_1 + 0x308) = 0;
  *(unsigned int *)(param_1 + 0x30c) = 0;
  uVar4 = (**(int (***)())(*piVar2 + 0x10))(piVar2);
  uVar5 = fn_82D7E470(puVar6,uVar4,param_3,0,param_4,param_5);
  if (param_4 == (int (**)())0x0) {
    return uVar5;
  }
  pcVar7 = lbl_831604F4;
  if ((int)uVar5 < 0) {
    if (*(int *)(param_1 + 0x30c) != 0) {
      uVar5 = -(unsigned __int64)(*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x30c)) & uVar5;
    }
    pcVar9 = lbl_831604F0;
    if ((int)uVar5 < 0) {
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      (*param_4)(param_5,lbl_831604F0,
                 pcVar9 + (-1 - (int)lbl_831604F0));
      iVar8 = *(int *)(param_1 + 0x30c) + 1;
      goto LAB_82aa64dc;
    }
  }
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  (*param_4)(param_5,lbl_831604F4,
             pcVar7 + (-1 - (int)lbl_831604F4));
  iVar8 = *(int *)(param_1 + 0x30c) + 2;
LAB_82aa64dc:
  *(int *)(param_1 + 0x30c) = iVar8;
  return uVar5;
}

