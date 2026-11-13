extern int fn_822315A0();
extern int fn_822B83D0();
extern int fn_822C6880();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8255FD70();
extern int fn_825613E0();
extern int fn_8265CA20();


void fn_822D80E0(int param_1)

{
  int in_r0;
  int iVar1;
  unsigned int *puVar2;
  double dVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int * apuStack_30;
  
  puVar2 = (unsigned int *)(param_1 + 0x5c);
  if (0xf < *(unsigned int *)(param_1 + 0x70)) {
    puVar2 = (unsigned int *)*puVar2;
  }
  fn_8255FD70(&apuStack_30,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x24),
                    puVar2);
  fn_822B83D0(*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118),*apuStack_30);
  iVar1 = fn_82365BD8(&apuStack_30,param_1 + 0x78);
  fn_82376640(param_1 + 0x30,iVar1);
  if (*(int *)(iVar1 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C6880(*(unsigned int *)(param_1 + 0x24));
  iVar1 = *(int *)(param_1 + 0x24);
  dVar3 = (double)*(float *)(iVar1 + 0x40);
  fn_825613E0(-dVar3,dVar3);
  puVar2 = (unsigned int *)(in_r0 + iVar1 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_8265CA20(apuStack_30);
  return;
}

