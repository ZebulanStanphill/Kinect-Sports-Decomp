extern int fn_826957D0();
extern int fn_82697610();
extern int fn_826ADE60();
extern int fn_826D0A40();
extern int fn_8275BB38();


void fn_8275C128(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int iVar4;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826ADE60(*(unsigned int *)(param_1 + 0x18),"Error: Sound.SetPan needs one Argument\n");
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    uVar2 = fn_82697610(uVar2,uVar1);
    iVar4 = *(unsigned int *)(param_1 + 8) != 0 ? *(unsigned int *)(param_1 + 8) - 0x10 : 0;
    if ((iVar4 != 0) && (uVar3 = fn_8275BB38(iVar4), (uVar3 & 0xffffffff) != 0)) {
      fn_826D0A40(uVar3,uVar2);
    }
  }
  return;
}

