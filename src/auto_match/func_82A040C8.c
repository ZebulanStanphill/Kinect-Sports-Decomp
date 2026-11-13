unsigned __int64 fn_82A040C8(unsigned int param_1,unsigned int *param_2)

{
  switch(param_1) {
  case 7:
  case 0xb:
  case 0x1b:
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0x17;
    }
    break;
  default:
    return 0;
  case 10:
  case 0xe:
  case 0x1c:
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0x18;
    }
    return 1;
  }
  return 1;
}

