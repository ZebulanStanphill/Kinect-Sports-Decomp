extern int fn_82CEEDF8();
extern int fn_82CFD5A8();


unsigned char * fn_82CEEC58(unsigned char *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned char uVar2;
  
  if ((*(unsigned short *)(param_2 + 0x10) >> 9 & 1) == 0) {
    switch(*(unsigned char *)(param_2 + 0xc)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x15:
    case 0x18:
    case 0x1e:
    case 0x1f:
    case 0x20:
      break;
    default:
      uVar2 = 0;
      goto LAB_82ceed50;
    case 0x19:
      uVar1 = fn_82CFD5A8(param_2);
      fn_82CEEDF8(param_1,uVar1);
      return param_1;
    }
  }
  uVar2 = 1;
LAB_82ceed50:
  *param_1 = uVar2;
  return param_1;
}

