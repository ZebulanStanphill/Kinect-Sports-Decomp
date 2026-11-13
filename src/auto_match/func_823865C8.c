extern int fn_82230040();
extern int fn_82519388();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83276564;
extern unsigned int uStack_24;


unsigned int * fn_823865C8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int * apuStack_30;
  unsigned char **ppuStack_28;
  unsigned int uStack_24;
  
  iVar3 = lbl_83276564;
  puVar5 = *(unsigned int **)(lbl_83276564 + 4);
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar4 = (unsigned int *)puVar5[1];
    do {
      if ((unsigned int)puVar4[3] < *param_1) {
        puVar1 = (unsigned int *)puVar4[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar4;
        puVar5 = puVar4;
      }
      puVar4 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (puVar5 != *(unsigned int **)(lbl_83276564 + 4)) {
    if ((unsigned int)puVar5[3] <= *param_1) goto LAB_8238669c;
  }
  uVar2 = *param_1;
  puVar4 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar4 == (unsigned int *)0x0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  *puVar4 = *(unsigned int *)(iVar3 + 4);
  puVar4[1] = *(unsigned int *)(iVar3 + 4);
  puVar4[2] = *(unsigned int *)(iVar3 + 4);
  *(unsigned char *)(puVar4 + 5) = 0;
  *(unsigned char *)((int)puVar4 + 0x15) = 0;
  if (puVar4 + 3 != (unsigned int *)0x0) {
    puVar4[3] = uVar2;
    *(unsigned short *)(puVar4 + 4) = 0;
  }
  fn_82519388(&apuStack_30,iVar3,puVar5);
  puVar5 = apuStack_30;
LAB_8238669c:
  return puVar5 + 4;
}

