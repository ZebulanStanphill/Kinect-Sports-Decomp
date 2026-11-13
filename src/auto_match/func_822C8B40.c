extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_82365BD8();
extern int fn_8260D428();
extern unsigned int iStack_3c;


void fn_822C8B40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  piVar2 = *(int **)(param_1 + 0x14);
  for (piVar4 = *(int **)(param_1 + 0x10); piVar4 != piVar2; piVar4 = piVar4 + 2) {
    iVar1 = *param_2;
    puVar3 = (unsigned int *)(iVar1 + 4);
    if (0xf < *(unsigned int *)(iVar1 + 0x18)) {
      puVar3 = (unsigned int *)*puVar3;
    }
    iVar1 = fn_8260D428(*piVar4 + 4,0,*(unsigned int *)(*piVar4 + 0x14),puVar3,
                         *(unsigned int *)(iVar1 + 0x14));
    if (iVar1 == 0) break;
  }
  if (piVar4 == *(int **)(param_1 + 0x14)) {
    fn_822C9D68(param_1 + 0x10,param_2);
  }
  else {
    piVar2 = (int *)fn_82365BD8(auStack_40);
    iVar1 = piVar2[1];
    piVar2[1] = piVar4[1];
    piVar4[1] = iVar1;
    iVar1 = *piVar2;
    *piVar2 = *piVar4;
    *piVar4 = iVar1;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

