extern int XMemSet();
extern unsigned int lbl_821912A4;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821929B0;


int fn_824CD480(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar3 = lbl_821917B4;
  uVar2 = lbl_821912A4;
  *(unsigned int *)(param_1 + 0x60) = lbl_821929B0;
  *(unsigned int *)(param_1 + 0x50) = uVar3;
  *(unsigned int *)(param_1 + 0x54) = uVar3;
  *(unsigned int *)(param_1 + 0x58) = uVar3;
  *(unsigned int *)(param_1 + 0x5c) = uVar2;
  XMemSet(param_1 + 0x10,0,0x40);
  return param_1;
}

