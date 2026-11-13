typedef unsigned char bool;
#define true 1


void fn_8267C9B8(int param_1,int param_2)

{
  int in_r11;
  unsigned char in_cr6;
  
  while( true ) {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return;
    }
    if (in_r11 == param_2) break;
    in_r11 = *(int *)(in_r11 + 4);
    in_cr6 = (in_r11 == 0) << 1;
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 4);
  }
  else {
    *(unsigned int *)(*(int *)(param_2 + 8) + 4) = *(unsigned int *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(unsigned int *)(*(int *)(param_2 + 4) + 8) = *(unsigned int *)(param_2 + 8);
    return;
  }
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 8);
  return;
}

