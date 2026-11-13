unsigned __int64 fn_82C078F0(int param_1,unsigned int *param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  
  switch(*(unsigned int *)(param_1 + 0x228)) {
  case 1:
    uVar1 = 0x10;
    uVar2 = 0x32595559;
    break;
  case 2:
    uVar1 = 0x10;
    uVar2 = 0x59565955;
    break;
  case 3:
    uVar2 = 0x55590000;
    uVar1 = 0x10;
    goto LAB_82c07974;
  case 4:
    uVar2 = 0;
    uVar1 = 0x18;
    break;
  case 5:
    uVar2 = 0;
    uVar1 = 0x10;
    break;
  case 6:
    uVar2 = 3;
    uVar1 = 0x10;
    break;
  case 7:
    uVar2 = 0;
    uVar1 = 0x20;
    break;
  case 8:
    uVar2 = 0;
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 0xc;
    uVar2 = 0x56555949;
    break;
  case 10:
    uVar1 = 0xc;
    uVar2 = 0x30323449;
    break;
  case 0xb:
    uVar2 = 3;
    uVar1 = 0xc;
    break;
  case 0xc:
    uVar2 = 0x32310000;
    uVar1 = 0xc;
LAB_82c07974:
    uVar2 = uVar2 | 0x5659;
    break;
  default:
    return 0xffffffff80070057;
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (unsigned short *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}

