extern unsigned int *auStack_60;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822CA8E0();
extern int fn_8233D788();
extern int fn_8233D8A0();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821B16B8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;


void fn_8233DAE8(void)

{
  int *piVar1;
  int *piVar3;
  char cVar9;
  __int64 lVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned char auStack_a0 [4];
  unsigned char auStack_9c [4];
  unsigned char auStack_98 [8];
  unsigned char auStack_90 [8];
  unsigned char auStack_88 [8];
  int aiStack_80 [8];
  unsigned char auStack_60 [96];
  
  piVar3 = (int *)fn_82F6A548();
  fn_822CA8E0();
  iVar7 = piVar3[0x2f];
  cVar9 = fn_8288B760(piVar3);
  uVar8 = ltcg_pool_0_0f;
  if (cVar9 == '\0') {
    lVar2 = (**(int (***)())(*piVar3 + 8))(piVar3);
    fn_8233D8A0(lVar2 + 0x1ec,&stack0x00000000 + -0xa0,&stack0x00000000 + -0x9c,
                  &stack0x00000000 + -0x98,&stack0x00000000 + -0x90);
    *(unsigned int *)(iVar7 + 0x104) = uVar8;
    *(unsigned int *)(iVar7 + 0x100) = uVar8;
    *(unsigned int *)(iVar7 + 0x10c) = uVar8;
    *(unsigned int *)(iVar7 + 0x108) = uVar8;
    iVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
    uVar5 = (**(int (***)())(*(int *)(iVar4 + 0x240) + 0x3c))();
    *(unsigned int *)(*(int *)(iVar7 + 0x1a0) + 0x24) = uVar5 & 0xff;
  }
  else {
    dVar13 = (double)*(float *)(iVar7 + 0x108);
    dVar12 = (double)*(float *)(iVar7 + 0x10c);
    dVar11 = (double)*(float *)(iVar7 + 0x100);
    dVar10 = (double)*(float *)(iVar7 + 0x104);
    lVar2 = (**(int (***)())(*piVar3 + 8))(piVar3);
    fn_8233D788(dVar10,dVar11,dVar12,dVar13,lVar2 + 0x1ec);
    iVar7 = *(int *)(*(int *)(iVar7 + 0x1a0) + 0x24);
    lVar2 = (**(int (***)())(*piVar3 + 8))(piVar3);
    fn_828AAF70(lVar2 + 0x240,iVar7 != 0);
  }
  puVar6 = (unsigned int *)fn_8265C9E0(0x28);
  if (puVar6 != (unsigned int *)0x0) {
    *puVar6 = &lbl_821B16B8;
    fn_82F68CC0(puVar6 + 2,&stack0x00000000 + -0x60,0x20);
    iVar7 = (**(int (***)())(*piVar3 + 0x50))(piVar3);
    piVar3 = (int *)(iVar7 + 0x80);
    if (piVar3 != (int *)(&stack0x00000000 + -0x80)) {
      piVar1 = *(int **)(iVar7 + 0x90);
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar3 != piVar1);
        *(unsigned int *)(iVar7 + 0x90) = 0;
      }
      if (puVar6 == (unsigned int *)0x0) {
        *(unsigned int *)(iVar7 + 0x90) = 0;
      }
      else if (puVar6 == (unsigned int *)(&stack0x00000000 + -0x80)) {
        uVar8 = (**(int (***)())*puVar6)(puVar6,piVar3);
        *(unsigned int *)(iVar7 + 0x90) = uVar8;
      }
      else {
        *(unsigned int **)(iVar7 + 0x90) = puVar6;
      }
    }
    fn_82359C18(&stack0x00000000 + -0x80);
    fn_82F6A594();
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x88);
}

