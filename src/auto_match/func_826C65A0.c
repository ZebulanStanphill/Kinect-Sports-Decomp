extern int fn_8267B890();
extern int fn_826C5118();


void fn_826C65A0(int param_2,float param_1)

{
  unsigned int uVar1;
  int uVar2;

  if (*(unsigned int *)(param_2 + 0x1c8) == 0) {
    uVar1 = fn_8267B890(*(int *)(*(int *)(param_2 + 0xa0) + 0x14),0x5c,0);
    if (uVar1 != 0) {
      uVar2 = fn_826C5118(uVar1,param_2 + 0x148);
    }
    else {
      uVar2 = 0;
    }
    *(int *)(param_2 + 0x1c8) = uVar2;
  }
  *(float *)(*(int *)(param_2 + 0x1c8) + 4) = param_1;
  *(unsigned char *)(*(int *)(param_2 + 0x1c8) + 0x58) = *(unsigned char *)(*(int *)(param_2 + 0x1c8) + 0x58) | 2;
  *(int *)(*(int *)(param_2 + 0x1c8) + 0x4c) = *(int *)(param_2 + 0x1c8) + 4;
  return;
}
