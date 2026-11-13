extern int fn_822B6FF0();
extern int fn_822B9390();
extern int fn_8231EF10();
extern int fn_8231F518();


void fn_8231EE70(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_8231EF10();
  iVar4 = fn_8231F518(param_1,param_2);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar4 + 0x42c) != 3) {
      iVar1 = *(int *)(iVar4 + 0x9a0);
      uVar2 = *(unsigned int *)(iVar4 + 0xe10);
      if ((iVar1 != 0) && (iVar5 = fn_822B6FF0(iVar1,uVar2), iVar5 == 0)) {
        fn_822B9390(*(unsigned int *)(iVar1 + 0x11c),uVar2,0x21);
        iVar1 = *(int *)(iVar4 + 0xe10);
        puVar3 = (unsigned int *)(iVar1 + 0xbd0U & 0xfffffff0);
        *puVar3 = in_register_000104d0;
        puVar3[1] = in_register_000104d4;
        puVar3[2] = in_register_000104d8;
        puVar3[3] = in_vr77;
        puVar3 = (unsigned int *)(iVar1 + 0xc30U & 0xfffffff0);
        *puVar3 = in_register_000104d0;
        puVar3[1] = in_register_000104d4;
        puVar3[2] = in_register_000104d8;
        puVar3[3] = in_vr77;
      }
    }
    *(unsigned int *)(iVar4 + 0x42c) = 3;
  }
  return;
}

