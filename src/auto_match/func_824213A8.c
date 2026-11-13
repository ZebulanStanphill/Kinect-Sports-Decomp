extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_824215C0();
extern int fn_8253F598();
extern int fn_8253F768();
extern int fn_82571418();
extern int fn_82CE4118();
extern int fn_82D89B48();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_824213A8(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [32];
  
  iVar5 = fn_82F6DA24();
  if (*(int *)(iVar5 + 0x44) != 0) {
    if (*(int *)(*(int *)(iVar5 + 0x10) + 0x4c) != 0) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x10) + 0x7c0);
      cVar1 = *(char *)(iVar2 + 0xe8);
      puVar4 = (unsigned int *)(iVar2 + 0x1b0U & 0xfffffff0);
      uVar12 = *puVar4;
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      puVar4 = (unsigned int *)(iVar2 + 0x1c0U & 0xfffffff0);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      fn_8253F768();
      if (*(int *)(iVar5 + 0x50) != 0) {
        fn_82D89B48(*(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x7c0));
        piVar3 = *(int **)(iVar5 + 0x50);
        if (piVar3 != (int *)0x0) {
          (**(int (***)())(*piVar3 + 0xc))(piVar3,1);
        }
        *(unsigned int *)(iVar5 + 0x50) = 0;
      }
      fn_82CE4118(iVar2);
      *(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x7c0) = 0;
      *(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x7c4) = 0;
      fn_824215C0(iVar5,cVar1 == '\x04');
      fn_8253F598(*(unsigned int *)(iVar5 + 0x10));
      iVar2 = *(int *)(iVar5 + 0x10);
      uVar6 = 10;
      uVar7 = 5;
      if ((*(unsigned int *)(iVar2 + 0x4b8) & 0x200) != 0) {
        uVar6 = 1;
        uVar7 = 1;
      }
      fn_82571418(iVar2 + 0x380,*(unsigned int *)(iVar2 + 0x7c0),*(unsigned int *)(iVar2 + 0x4c),
                        uVar6,uVar7,*(unsigned int *)(iVar2 + 0x4b8) & 4,*(unsigned int *)(iVar2 + 0x4b8) & 8);
      puVar4 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
      *puVar4 = uVar12;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_822E83E0(*(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x7c0),auStack_90);
      iVar2 = *(int *)(iVar5 + 0x10);
      puVar4 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
      *puVar4 = uVar8;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      fn_8240DEC0(*(unsigned int *)(iVar2 + 0x7c0),auStack_80);
      *(unsigned int *)(iVar5 + 0x44) = 0;
    }
  }
  fn_82F6DCBC();
  return;
}

