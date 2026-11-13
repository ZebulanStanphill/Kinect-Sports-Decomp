extern int fn_829AB4E8();


int fn_829AB710(int *param_1)

{
  int uVar1;
  
  uVar1 = 0;
  switch(param_1[5]) {
  case 200:
    (*(int (**)())(param_1[0x6e] + 4))(param_1);
    (*(int (**)())(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    uVar1 = (*(int (**)())param_1[0x6e])(param_1);
    if (uVar1 == 1) {
      fn_829AB4E8(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    uVar1 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    uVar1 = (*(int (**)())param_1[0x6e])(param_1);
    break;
  default:
    *(unsigned int *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (*(int (**)())*param_1)(param_1);
  }
  return uVar1;
}

