typedef unsigned char bool;
#define true 1
#define false 0


unsigned int * fn_82A2C660(unsigned int *param_1,unsigned short *param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  unsigned int *puVar4;
  
  bVar2 = false;
  puVar4 = param_1;
  while( true ) {
    for (puVar1 = (unsigned int *)*puVar4; puVar1 != puVar4; puVar1 = (unsigned int *)*puVar1) {
      iVar3 = RtlCompareStringN(*(unsigned int *)(param_2 + 2),*param_2,puVar1 + 2,
                                *(unsigned char *)(puVar1 + -5),1);
      if (iVar3 == 0) {
        return puVar1 + -0x12;
      }
    }
    if (bVar2) break;
    if ((*(unsigned char *)((int)param_1 + 0x35) & 4) == 0) {
      puVar4 = (unsigned int *)param_1[3];
      if (puVar4 == (unsigned int *)0x0) {
        return (unsigned int *)0x0;
      }
    }
    else {
      puVar4 = param_1 + 0x10;
    }
    bVar2 = true;
  }
  return (unsigned int *)0x0;
}

