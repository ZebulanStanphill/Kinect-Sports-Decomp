void fn_82F595E0(unsigned int *param_1)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  
  puVar1 = (unsigned __int64 *)(param_1 + -2);
  puVar2 = (unsigned __int64 *)0x83262818;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_1 = in_register_00010010;
  param_1[1] = in_register_00010014;
  param_1[2] = in_register_00010018;
  param_1[4] = in_register_00010020;
  param_1[5] = in_register_00010024;
  param_1[6] = in_register_00010028;
  param_1[8] = in_register_00010030;
  param_1[9] = in_register_00010034;
  param_1[10] = in_register_00010038;
  return;
}

