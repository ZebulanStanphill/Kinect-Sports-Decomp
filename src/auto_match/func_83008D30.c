#define true 1


void fn_83008D30(int param_1,int param_2)

{
  unsigned char *pbVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0xc) == param_2) {
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) break;
    pbVar1 = (unsigned char *)(param_1 + 0x3d);
    param_1 = *(int *)(param_1 + 0x14);
    if ((*pbVar1 & 0x20) != 0) {
      return;
    }
  }
  return;
}

