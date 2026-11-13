extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_822AF138();
extern int fn_822B8700();
extern int fn_822C64E0();
extern int fn_822C8C08();
extern int fn_82334110();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821A8D8C;


void fn_822BBB08(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int *puStack_40;
  unsigned int *puStack_3c;
  unsigned char auStack_38 [8];
  
  uVar1 = *(unsigned int *)(param_1 + 0x220);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  puVar4 = (unsigned int *)fn_8265C9E0(0x280);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821A8D8C;
    if (puVar4 + 4 != (unsigned int *)0x0) {
      fn_82334110(puVar4 + 4,uVar2,param_1,uVar1);
    }
  }
  puStack_40 = puVar4 + 4;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_3c = puVar4;
  uVar3 = fn_82365BD8(auStack_38,&puStack_40);
  fn_822C64E0(uVar1,uVar3);
  fn_822AF138(*(unsigned int *)(param_1 + 0x110),1);
  if (((*(int *)(param_1 + 0x24) == 0) || (*(int **)(param_1 + 0x238) == (int *)0x0)) ||
     (3 < (-(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3U))) {
    uVar3 = 0xffffffff821aca8c;
  }
  else {
    uVar3 = 0xffffffff821aca94;
  }
  fn_822C8C08(*(unsigned int *)(param_1 + 0x114),uVar3);
  fn_822B8700(*(unsigned int *)(param_1 + 0x118),0);
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x2b0) = lbl_82005748;
  if (puVar4 != (unsigned int *)0x0) {
    fn_822315A0(puVar4);
  }
  return;
}

