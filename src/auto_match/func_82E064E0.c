extern unsigned int *auStack_b4;
extern int fn_82CE5410();
extern int fn_82D06A28();
extern int fn_82E061F8();
extern unsigned int iStack_bc;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_b8;


unsigned __int64 fn_82E064E0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int in_r0;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int in_register_00010070;
  unsigned int in_register_00010074;
  unsigned int in_register_00010078;
  unsigned int in_vr7;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned char *puStack_c0;
  int iStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_b4 [180];
  
  puStack_c0 = auStack_b4;
  uStack_b8 = 0x80000020;
  iStack_bc = 0;
  iVar5 = fn_82E061F8(*(unsigned int *)(param_1 + 0x14),param_2,&puStack_c0);
  if (iVar5 == 0) {
    iVar5 = 0;
    puVar2 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar2 = in_register_000100d0;
    puVar2[1] = in_register_000100d4;
    puVar2[2] = in_register_000100d8;
    puVar2[3] = in_vr13;
    puVar2 = (unsigned int *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
    *puVar2 = in_register_000100b0;
    puVar2[1] = in_register_000100b4;
    puVar2[2] = in_register_000100b8;
    puVar2[3] = in_vr11;
    puVar2 = (unsigned int *)((int)param_3 + in_r0 + 0x20 & 0xfffffff0);
    *puVar2 = in_register_00010090;
    puVar2[1] = in_register_00010094;
    puVar2[2] = in_register_00010098;
    puVar2[3] = in_vr9;
    uVar3 = lbl_82002AE0;
    puVar2 = (unsigned int *)((int)param_3 + in_r0 + 0x30 & 0xfffffff0);
    *puVar2 = in_register_00010070;
    puVar2[1] = in_register_00010074;
    puVar2[2] = in_register_00010078;
    puVar2[3] = in_vr7;
    *param_3 = uVar3;
    param_3[5] = uVar3;
    param_3[10] = uVar3;
    param_3[0xf] = uVar3;
    if (0 < iStack_bc) {
      iVar7 = 0;
      do {
        uVar1 = *(unsigned int *)(*(int *)(puStack_c0 + iVar7) + 0x20);
        uVar6 = param_4;
        if ((int)uVar1 <= (int)param_4) {
          uVar6 = (unsigned __int64)uVar1 - 1;
        }
        fn_82D06A28(param_3,(unsigned __int64)*(unsigned int *)(*(int *)(puStack_c0 + iVar7) + 0x1c) +
                                  (uVar6 & 0x3ffffff) * 0x40);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar5 < iStack_bc);
    }
    iVar5 = fn_82CE5410();
    iStack_bc = 0;
    if ((uStack_b8 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),puStack_c0,uStack_b8 & 0x3fffffff,4);
    }
    uVar4 = 0;
  }
  else {
    iVar5 = fn_82CE5410();
    iStack_bc = 0;
    if ((uStack_b8 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),puStack_c0,uStack_b8 & 0x3fffffff,4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

