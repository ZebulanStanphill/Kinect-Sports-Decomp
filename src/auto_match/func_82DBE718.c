unsigned char * fn_82DBE718(unsigned char *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned char uVar2;
  
  uVar1 = (*(int (**)())(*param_2 + 0x20))(param_2);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar2 = 1;
    break;
  default:
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}

