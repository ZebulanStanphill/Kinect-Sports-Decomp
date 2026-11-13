void fn_82C9DC48(int param_1,__int64 param_2,unsigned char param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  
  switch(param_3) {
  case 1:
    uVar1 = 4;
    param_2 = param_2 + 0xc;
    break;
  case 2:
    uVar1 = 4;
    param_2 = param_2 + 8;
    break;
  case 3:
    uVar1 = 8;
    param_2 = param_2 + 8;
    break;
  case 4:
    uVar1 = 4;
    param_2 = param_2 + 4;
    break;
  case 5:
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 4,param_4,param_5,4);
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 6:
    uVar1 = 8;
    param_2 = param_2 + 4;
    break;
  case 7:
    uVar1 = 0xc;
    param_2 = param_2 + 4;
    break;
  case 8:
    uVar1 = 4;
    break;
  case 9:
    (**(int (***)())(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 10:
    (**(int (***)())(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 8,param_4,param_5,4);
    return;
  case 0xb:
    (**(int (***)())(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 8,param_4,param_5,8);
    return;
  case 0xc:
    uVar1 = 8;
    break;
  case 0xd:
    (**(int (***)())(param_1 + 0x3e38))(param_2,param_4,param_5,8);
    (**(int (***)())(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 0xe:
    uVar1 = 0xc;
    break;
  case 0xf:
    uVar1 = 0x10;
    break;
  default:
    goto switchD_82f20fb0_default;
  }
  (**(int (***)())(param_1 + 0x3e38))(param_2,param_4,param_5,uVar1);
switchD_82f20fb0_default:
  return;
}

