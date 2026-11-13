extern int fn_8251E4D0();
extern int fn_82A1DD38();


unsigned __int64
fn_8262C4F8(__int64 param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned char param_5,
             unsigned int param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  
  *(unsigned char *)(param_2 + 0x23) = param_5;
  *(unsigned int *)(param_2 + 0x24) = param_6;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(unsigned short *)(param_2 + 0x20) = 0;
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82A1DD38(param_2 + 0x30,param_7,0x40);
  *(unsigned int *)(param_2 + 0x74) = param_4;
  *(unsigned char *)(param_2 + 0x22) = 1;
  *(unsigned int *)(param_2 + 0x28) = param_3;
  iVar2 = fn_8251E4D0(param_1 + 300);
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  return 1;
}

