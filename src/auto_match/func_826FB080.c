typedef unsigned char bool;
#define true 1
#define false 0


void fn_826FB080(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  
  bVar1 = *(unsigned char *)(param_1 + 0x20);
  uVar3 = *(unsigned int *)(param_1 + 0xc);
  *(unsigned char *)(param_1 + 0x20) = bVar1 | 8;
  *(unsigned int *)(param_1 + 0x10) = uVar3;
  uVar5 = (unsigned int)*(unsigned short *)(param_2 + 0xc);
  if (uVar5 != 0) {
    if (((*(unsigned char *)(param_2 + 0xf) & 0x40) == 0) && ((*(unsigned char *)(param_2 + 0xf) & 0x80) != 0)) {
      bVar4 = true;
      if (*(unsigned short *)(param_2 + 0xc) == 0) goto code_r0x826fb0c4;
    }
    else {
code_r0x826fb0c4:
      bVar4 = false;
    }
    if (bVar4) {
      uVar5 = uVar3 & ~uVar5;
    }
    else {
      uVar5 = uVar5 | uVar3;
    }
    *(unsigned int *)(param_1 + 0xc) = uVar5;
  }
  if ((int)*(float *)(param_2 + 4) == (int)*(float *)(param_1 + 0x14)) {
    bVar6 = bVar1 & 0xef | 8;
    if ((int)*(float *)(param_2 + 8) == (int)*(float *)(param_1 + 0x18)) goto code_r0x826fb138;
  }
  bVar6 = bVar1 | 0x18;
code_r0x826fb138:
  *(unsigned char *)(param_1 + 0x20) = bVar6;
  uVar2 = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  return;
}

