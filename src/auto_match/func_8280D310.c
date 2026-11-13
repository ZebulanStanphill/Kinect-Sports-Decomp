extern unsigned int *auStack_70;
extern int fn_8253B8E8();
extern int fn_8253BAB8();
extern int fn_8253BC88();


void fn_8280D310(int param_1,char param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned char auStack_70 [112];
  
  if (param_2 == 'X') {
LAB_8280d378:
    iVar2 = fn_8253BC88(auStack_70);
  }
  else if (param_2 == 'Y') {
LAB_8280d36c:
    iVar2 = fn_8253BAB8(auStack_70);
  }
  else {
    if (param_2 != 'Z') {
      if (param_2 == 'x') goto LAB_8280d378;
      if (param_2 == 'y') goto LAB_8280d36c;
      if (param_2 != 'z') goto LAB_8280d390;
    }
    iVar2 = fn_8253B8E8(auStack_70);
  }
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  in_register_00010000 = *puVar1;
  in_ACC = puVar1[1];
  in_register_00010008 = puVar1[2];
  in_vr0 = puVar1[3];
  puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
  in_register_000100d0 = *puVar1;
  in_register_000100d4 = puVar1[1];
  in_register_000100d8 = puVar1[2];
  in_vr13 = puVar1[3];
  puVar1 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
  in_register_000100c0 = *puVar1;
  in_register_000100c4 = puVar1[1];
  in_register_000100c8 = puVar1[2];
  in_vr12 = puVar1[3];
  puVar1 = (unsigned int *)(iVar2 + 0x30U & 0xfffffff0);
  in_register_000100b0 = *puVar1;
  in_register_000100b4 = puVar1[1];
  in_register_000100b8 = puVar1[2];
  in_vr11 = puVar1[3];
LAB_8280d390:
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  puVar1 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

