extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_822CA560();
extern int fn_822CB140();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_8289C940();
extern int fn_828AB870();
extern int fn_82F565A0();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AD0F8;
extern unsigned int uStack_60;
extern unsigned int uStack_84;
extern unsigned int uStack_9c;


void fn_822CA8E0(int *param_1)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  int in_r0;
  char cVar6;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int (**pcStack_a0)();
  unsigned int uStack_9c;
  unsigned char **ppuStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [16];
  unsigned int *puStack_70;
  unsigned __int64 uStack_60;
  int *piStack_58;
  
  iVar1 = param_1[0x2f];
  cVar6 = fn_8288B760();
  if (cVar6 != '\0') {
    uVar7 = *(unsigned int *)(iVar1 + 0x28);
    lVar4 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x9c,uVar7);
    *(unsigned char *)((int)param_1 + 0x81) = 1;
    uVar7 = *(unsigned int *)(iVar1 + 0x2c);
    lVar4 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x48,uVar7);
    *(unsigned char *)(param_1 + 0x20) = 1;
    puVar5 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    pcVar2 = *(int (***)())(*param_1 + 8);
    puVar3 = (unsigned int *)((int)&pcStack_a0 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar5;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    lVar4 = (*pcVar2)(param_1);
    fn_822CB140(lVar4 + 0x144,&pcStack_a0);
  }
  uStack_9c = 0;
  pcStack_a0 = fn_822CA560;
  uStack_60 = 0x822ca56000000000;
  piStack_58 = param_1;
  puVar5 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = &lbl_821AD0F8;
    memcpy(puVar5 + 2,&uStack_60,0x38);
    puStack_70 = puVar5;
    fn_82F565A0(&pcStack_a0,auStack_80);
    lVar4 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_8289C940(lVar4 + 0x144,&pcStack_a0);
    fn_82359C18(auStack_80);
    return;
  }
  uStack_84 = 0;
  ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_88);
}

