typedef unsigned char bool;
#define true 1
#define false 0


unsigned int * fn_828E3AF0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  puVar4 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x1d) != '\0') {
    return puVar4;
  }
  puVar1 = (unsigned int *)puVar4[1];
  do {
    if ((int)puVar1[3] < *param_2) {
LAB_828e3b6c:
      bVar3 = true;
    }
    else {
      if ((int)puVar1[3] <= *param_2) {
        uVar5 = 0;
        if (*(char *)(param_2 + 1) != '\0') {
          if (*(char *)(puVar1 + 4) == '\0') {
            uVar5 = 1;
          }
          else {
            uVar5 = ((~(unsigned __int64)(unsigned int)(param_2[2] ^ puVar1[5]) & 0xffffffff) >> 0x1f) +
                    (unsigned __int64)((unsigned int)param_2[2] <= (unsigned int)puVar1[5]) & 1;
          }
        }
        if (uVar5 != 0) goto LAB_828e3b6c;
      }
      bVar3 = false;
    }
    if (bVar3) {
      puVar2 = (unsigned int *)puVar1[2];
    }
    else {
      puVar2 = (unsigned int *)*puVar1;
      puVar4 = puVar1;
    }
    puVar1 = puVar2;
    if (*(char *)((int)puVar2 + 0x1d) != '\0') {
      return puVar4;
    }
  } while( true );
}

