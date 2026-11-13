extern unsigned int *auStack_2c;
extern int fn_8267BDA8();
extern int fn_8267BED0();
extern unsigned int uStack_30;


void fn_8277D098(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  if (*(unsigned int *)(param_1 + 8) <= param_2) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uStack_30 = 0x85;
      uVar1 = fn_8267BED0(param_1,0x100,&uStack_30);
    }
    else {
      uVar1 = fn_8267BDA8(*(int *)(param_1 + 0xc),(*(unsigned int *)(param_1 + 8) + 0x40) * 4);
    }
    *(unsigned int *)(param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x40;
  }
  auStack_2c[0] = 0x85;
  uVar1 = fn_8267BED0(param_1,0x400,auStack_2c);
  *(unsigned int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) = uVar1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

