typedef unsigned char bool;
#define true 1


unsigned char * fn_82F6A4B0(unsigned char *param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  
  uVar3 = (unsigned int)*param_1;
  bVar1 = *param_1 == param_2;
  if (param_2 == 0) {
    while (!bVar1) {
      param_1 = param_1 + 1;
      bVar1 = *param_1 == 0;
    }
  }
  else {
    pbVar2 = (unsigned char *)0x0;
    pbVar4 = param_1;
    while( true ) {
      param_1 = pbVar2;
      if (bVar1) {
        do {
          param_1 = pbVar4;
          pbVar4 = param_1 + 1;
          uVar3 = (unsigned int)*pbVar4;
        } while (param_2 == uVar3);
      }
      if (uVar3 == 0) break;
      pbVar4 = pbVar4 + 1;
      uVar3 = (unsigned int)*pbVar4;
      bVar1 = param_2 == uVar3;
      pbVar2 = param_1;
    }
  }
  return param_1;
}

