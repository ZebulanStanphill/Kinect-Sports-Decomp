extern int fn_822B6FF0();
extern int fn_822B9390();
extern int fn_822CCC78();
extern int fn_8236A360();
extern int fn_823CD840();


void fn_8230A9D0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x42c) != 3) {
    iVar2 = *(int *)(iVar1 + 0x9a0);
    uVar3 = *(unsigned int *)(iVar1 + 0xe10);
    if ((iVar2 != 0) && (iVar5 = fn_822B6FF0(iVar2,uVar3), iVar5 == 0)) {
      fn_822B9390(*(unsigned int *)(iVar2 + 0x11c),uVar3,0x21);
      iVar2 = *(int *)(iVar1 + 0xe10);
      puVar4 = (unsigned int *)(iVar2 + 0xbd0U & 0xfffffff0);
      *puVar4 = in_register_000104d0;
      puVar4[1] = in_register_000104d4;
      puVar4[2] = in_register_000104d8;
      puVar4[3] = in_vr77;
      puVar4 = (unsigned int *)(iVar2 + 0xc30U & 0xfffffff0);
      *puVar4 = in_register_000104d0;
      puVar4[1] = in_register_000104d4;
      puVar4[2] = in_register_000104d8;
      puVar4[3] = in_vr77;
    }
  }
  *(unsigned int *)(iVar1 + 0x42c) = 3;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x234) = 1;
  fn_823CD840(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28),
                    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xe10);
  puVar4 = (unsigned int *)(iVar1 + 0xbd0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (unsigned int *)(iVar1 + 0xc30U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fn_822CCC78(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x18),0xffffffff821af300);
  fn_8236A360(*(unsigned int *)(param_1 + 0x10),1);
  return;
}

