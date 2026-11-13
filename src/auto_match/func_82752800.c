extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_826ADE60();
extern unsigned char fn_8270EC18();


void fn_82752800(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int uVar3;
  unsigned char uVar4;
  unsigned int iVar5;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826ADE60(*(unsigned int *)(param_1 + 0x18),"Error: KeyIsToggled needs one Argument (the key code)\n");
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    uVar3 = fn_82697610(uVar3,uVar1);
    iVar5 = *(unsigned int *)(param_1 + 8) != 0 ? *(unsigned int *)(param_1 + 8) - 0x10 : 0;
    iVar5 = *(int *)(*(int *)(iVar5 + 0x44) + 0x9e0);
    if (iVar5 != 0) { uVar4 = fn_8270EC18(iVar5,uVar3); } else { uVar4 = 0; }
    puVar2 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar2);
    puVar2[4] = uVar4;
    *puVar2 = 2;
  }
  return;
}

