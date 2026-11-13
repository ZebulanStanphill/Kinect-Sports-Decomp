#define true 1
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_825AA5F8();
extern int fn_825ACD10();
extern int fn_825AD738();
extern int fn_825AD818();
extern int fn_825ADF18();
extern int fn_825AE1A0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828B5580();
extern int fn_828B55B0();
extern unsigned int iStack_58;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_64;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


void fn_825AC4A0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned int **ppuVar7;
  unsigned int *apuStack_90 [2];
  unsigned int *apuStack_88 [2];
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned char **ppuStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [8];
  unsigned char **ppuStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [8];
  int iStack_58;
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  unsigned int *puStack_38;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x28);
  iVar4 = fn_825AA5F8();
  puVar5 = *(unsigned int **)(iVar4 + 4);
  iVar4 = fn_825AA5F8();
  apuStack_90[0] = *(unsigned int **)(iVar4 + 4);
  puVar6 = (unsigned int *)(*(unsigned int **)(iVar4 + 4))[1];
  while( true ) {
    if (*(char *)((int)puVar6 + 0x21) != '\0') break;
    if ((unsigned int)puVar6[3] < uVar1) {
      puVar6 = (unsigned int *)puVar6[2];
    }
    else {
      apuStack_90[0] = puVar6;
      puVar6 = (unsigned int *)*puVar6;
    }
  }
  if ((apuStack_90[0] == *(unsigned int **)(iVar4 + 4)) || (uVar1 < (unsigned int)apuStack_90[0][3])) {
    ppuVar7 = apuStack_88;
    apuStack_88[0] = *(unsigned int **)(iVar4 + 4);
  }
  else {
    ppuVar7 = apuStack_90;
  }
  if (*ppuVar7 == puVar5) {
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x28);
    uStack_48 = 0;
    puStack_4c = (unsigned int *)fn_8265C9E0(0x1c);
    if (puStack_4c == (unsigned int *)0x0) {
      uStack_74 = 0;
      ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_78);
    }
    *puStack_4c = puStack_4c;
    puStack_4c[1] = puStack_4c;
    puStack_4c[2] = puStack_4c;
    *(unsigned char *)(puStack_4c + 6) = 1;
    *(unsigned char *)((int)puStack_4c + 0x19) = 1;
    uStack_40 = uVar2;
    fn_825AD818(auStack_3c,auStack_50);
    iVar4 = fn_825AA5F8();
    puVar5 = (unsigned int *)fn_8265C9E0(0x24);
    if (puVar5 == (unsigned int *)0x0) {
      uStack_7c = 0;
      ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_80);
    }
    *puVar5 = *(unsigned int *)(iVar4 + 4);
    puVar5[1] = *(unsigned int *)(iVar4 + 4);
    puVar5[2] = *(unsigned int *)(iVar4 + 4);
    *(unsigned char *)(puVar5 + 8) = 0;
    *(unsigned char *)((int)puVar5 + 0x21) = 0;
    if (puVar5 + 3 != (unsigned int *)0x0) {
      puVar5[3] = uStack_40;
      fn_825AD818(puVar5 + 4,auStack_3c);
    }
    fn_825ADF18(apuStack_88,iVar4,puVar5);
    fn_825AD738(apuStack_88,auStack_3c,*puStack_38);
    fn_8265CA20(puStack_38);
    fn_825AD738(apuStack_88,auStack_50,*puStack_4c);
    fn_8265CA20(puStack_4c);
  }
  apuStack_88[0] = *(unsigned int **)(*(int *)(param_1 + 0x10) + 0x28);
  fn_828B5580(auStack_70,param_1 + 0x14);
  fn_828B5580(auStack_60,auStack_70);
  iStack_58 = param_1;
  uVar3 = fn_825AA5F8();
  iVar4 = fn_825ACD10(uVar3,apuStack_88);
  puVar5 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = *(unsigned int *)(iVar4 + 4);
    puVar5[1] = *(unsigned int *)(iVar4 + 4);
    puVar5[2] = *(unsigned int *)(iVar4 + 4);
    *(unsigned char *)(puVar5 + 6) = 0;
    *(unsigned char *)((int)puVar5 + 0x19) = 0;
    if (puVar5 + 3 != (unsigned int *)0x0) {
      fn_828B5580(puVar5 + 3,auStack_60);
      puVar5[5] = iStack_58;
    }
    fn_825AE1A0(apuStack_88,iVar4,puVar5);
    fn_828B55B0(auStack_60);
    fn_828B55B0(auStack_70);
    return;
  }
  uStack_64 = 0;
  ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_68);
}

