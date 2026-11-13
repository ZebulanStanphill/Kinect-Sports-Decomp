unsigned __int64 fn_82E27BF0(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (((((param_2 & 3) == 0) ||
       (uVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821535b8,param_2 & 3),
       -1 < (int)uVar1)) &&
      (((param_2 & 0x1c) == 0 ||
       (uVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821535c8,param_2 >> 2 & 7),
       -1 < (int)uVar1)))) &&
     ((((param_2 & 0x60) == 0 ||
       (uVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821535a8,param_2 >> 5 & 3),
       -1 < (int)uVar1)) && ((param_2 & 0x20000) != 0)))) {
    uVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153678,1);
  }
  return uVar1;
}

