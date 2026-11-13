typedef unsigned char bool;


void fn_82DD4940(int *param_1,unsigned short *param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned int uVar6;
  unsigned short uVar7;
  
  *(char *)(param_2 + 4) = (char)*param_1;
  *(char *)((int)param_2 + 9) = (char)param_1[1];
  uVar6 = param_1[0xb] & 0xffff;
  uVar7 = (unsigned short)param_1[0xb];
  if (1 < *param_1) {
    uVar1 = param_1[0xf] & 0xffff;
    cVar2 = uVar6 < uVar1;
    uVar3 = (short)param_1[0xf];
    if ((bool)cVar2) {
      uVar6 = uVar1;
      uVar3 = uVar7;
    }
    uVar7 = (unsigned short)uVar6;
    if (2 < *param_1) {
      uVar5 = (unsigned short)param_1[0x13];
      uVar4 = uVar5;
      if (uVar6 < (param_1[0x13] & 0xffffU)) {
        cVar2 = cVar2 + '\x01';
        uVar4 = uVar7;
        uVar7 = uVar5;
      }
      uVar5 = uVar4;
      if (cVar2 == '\x01') {
        uVar5 = uVar3;
        uVar3 = uVar4;
      }
      param_2[2] = uVar5;
    }
    param_2[1] = uVar3;
  }
  *param_2 = uVar7;
  uVar6 = param_1[0x3b] & 0xffff;
  uVar7 = (unsigned short)param_1[0x3b];
  if (1 < param_1[1]) {
    uVar1 = param_1[0x3f] & 0xffff;
    cVar2 = uVar6 < uVar1;
    uVar3 = (short)param_1[0x3f];
    if ((bool)cVar2) {
      uVar6 = uVar1;
      uVar3 = uVar7;
    }
    uVar7 = (unsigned short)uVar6;
    if (2 < param_1[1]) {
      uVar5 = (unsigned short)param_1[0x43];
      uVar4 = uVar5;
      if (uVar6 < (param_1[0x43] & 0xffffU)) {
        cVar2 = cVar2 + '\x01';
        uVar4 = uVar7;
        uVar7 = uVar5;
      }
      uVar5 = uVar4;
      if (cVar2 == '\x01') {
        uVar5 = uVar3;
        uVar3 = uVar4;
      }
      param_2[*param_1 + 2] = uVar5;
    }
    param_2[*param_1 + 1] = uVar3;
  }
  param_2[*param_1] = uVar7;
  return;
}

