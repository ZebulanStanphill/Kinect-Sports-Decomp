extern unsigned int *auStack_30;
extern int fn_8242C1B8();
extern int fn_824C8210();
extern int fn_8255E0B0();


void fn_82453CF0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_30 [1];
  
  if ((*(int *)(param_1 + 0x14) < 0xe) || (0xf < *(int *)(param_1 + 0x14))) {
    iVar2 = fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
    fn_8255E0B0(*(unsigned int *)(iVar2 + 0x14),4,auStack_30);
    fn_824C8210(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xa8));
  }
  else {
    iVar2 = *(int *)(param_1 + 0x44);
    iVar3 = 0x50;
    fn_824C8210(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xa8));
    if (**(int **)(iVar2 + 4) != 0) {
      puVar1 = (unsigned int *)(**(int **)(iVar2 + 4) + iVar3 & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
    }
    iVar2 = fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
    iVar2 = *(int *)(iVar2 + 0x118);
    puVar1 = (unsigned int *)(iVar2 + 0xa0U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(unsigned int *)(iVar2 + 0xb0) = 1;
  }
  return;
}

