extern int fn_82368C30();
extern int fn_823E7368();


void fn_823E7788(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  
  fn_823E7368();
  puVar1 = (unsigned int *)(param_2 + 0x50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (unsigned int *)(param_2 + 0x60U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (unsigned int *)(param_2 + 0x70U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  iVar2 = *(int *)(param_1 + 0x41c);
  if (((((iVar2 == 2) || (iVar2 == 8)) || (iVar2 == 9)) || ((iVar2 == 6 || (iVar2 == 7)))) &&
     (iVar2 = fn_82368C30(param_1), iVar2 != 0)) {
    iVar2 = fn_82368C30(param_1);
    uVar3 = *(unsigned int *)(iVar2 + 0x2c);
  }
  else {
    uVar3 = 0xffffffff;
  }
  *(unsigned int *)(param_2 + 0x80) = uVar3;
  return;
}

