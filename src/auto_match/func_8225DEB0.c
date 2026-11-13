extern int fn_82230040();
extern int fn_8225E870();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int * fn_8225DEB0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *apuStack_40 [2];
  unsigned char **ppuStack_38;
  unsigned int uStack_34;
  
  apuStack_40[0] = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)apuStack_40[0][1] + 0x19) == '\0') {
    puVar3 = (unsigned int *)apuStack_40[0][1];
    do {
      if ((unsigned int)puVar3[3] < *param_2) {
        puVar1 = (unsigned int *)puVar3[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar3;
        apuStack_40[0] = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if (apuStack_40[0] != *(unsigned int **)(param_1 + 4)) {
    if ((unsigned int)apuStack_40[0][3] <= *param_2) goto LAB_8225df88;
  }
  uVar2 = *param_2;
  puVar3 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar3 == (unsigned int *)0x0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  *puVar3 = *(unsigned int *)(param_1 + 4);
  puVar3[1] = *(unsigned int *)(param_1 + 4);
  puVar3[2] = *(unsigned int *)(param_1 + 4);
  *(unsigned char *)(puVar3 + 6) = 0;
  *(unsigned char *)((int)puVar3 + 0x19) = 0;
  if (puVar3 + 3 != (unsigned int *)0x0) {
    puVar3[3] = uVar2;
    *(unsigned __int64 *)(puVar3 + 4) = 0;
  }
  fn_8225E870(apuStack_40,param_1,apuStack_40[0]);
  apuStack_40[0] = (unsigned int *)0x0;
LAB_8225df88:
  return apuStack_40[0] + 4;
}

