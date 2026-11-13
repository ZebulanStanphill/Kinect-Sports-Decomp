extern int fn_82ABDBE8();


unsigned char fn_82AF5548(unsigned __int64 param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar3 = uVar1 >> 7 & 0x7f;
  if (uVar3 == 3) {
    if (((uVar1 & 0x1c000) == 0x4000) &&
       (cVar2 = fn_82ABDBE8(*(unsigned int *)(param_2 + 0x2c),*(unsigned int *)(param_2 + 0x30)),
       cVar2 != '\0')) goto LAB_82af55d0;
  }
  else {
    if (uVar3 == 100) {
      return 6;
    }
    if (((uVar3 == 0x6e) || (uVar3 == 0x71)) || (uVar3 == 0x7c)) goto LAB_82af55d0;
  }
  uVar1 = uVar1 >> 0xe & 7;
  if (uVar1 == 2) {
    return ((int)param_3 != 0) + 4;
  }
  if (uVar1 == 3) {
    return (-(param_3 != 0) & 2U) + 1;
  }
  if (uVar1 != 4) {
    return 6;
  }
LAB_82af55d0:
  return -(param_3 != 0) & 2;
}

