extern int fn_82312830();
extern int fn_823694F8();
extern int fn_8236A6E8();
extern int fn_823E0DA0();


void fn_823129A8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x28) == *(int *)(iVar3 + 0xde4)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == *(int *)(iVar3 + 0xde0))) {
    iVar1 = *(int *)(iVar3 + 0xe10);
    iVar4 = 1;
    puVar2 = (unsigned int *)(iVar1 + 0xbd0U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    puVar2 = (unsigned int *)(iVar1 + 0xc30U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
    iVar3 = fn_823E0DA0(*(unsigned int *)(*(unsigned int *)(param_1 + 0x10) + 0x4a0),
                         *(unsigned int *)(iVar3 + 0xdd4),0xc30,1);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x88);
    }
    fn_823694F8(uVar5,(iVar4 == 0) + '\x04');
    fn_8236A6E8(*(unsigned int *)(param_1 + 0x10),4);
    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x240) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x25c) = 1;
    fn_82312830(param_1);
  }
  *(unsigned int *)(param_1 + 0x110) = 1;
  return;
}

