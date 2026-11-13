void fn_82A04310(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  switch(param_1) {
  case 3:
  case 7:
  case 0xb:
  case 0x15:
  case 0x17:
  case 0x1b:
    *param_2 = 0x15;
    *param_3 = 0x17;
    return;
  case 4:
  case 5:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x19:
  case 0x1a:
    goto LAB_82a043c0;
  case 6:
  case 10:
  case 0xe:
  case 0x16:
  case 0x18:
  case 0x1c:
    *param_2 = 0x16;
    *param_3 = 0x18;
LAB_82a043c0:
    return;
  default:
    return;
  }
}

