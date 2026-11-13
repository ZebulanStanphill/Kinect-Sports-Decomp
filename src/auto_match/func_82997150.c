extern unsigned int *auStack_110;
extern unsigned int *auStack_50;
extern int fn_8294AC48();
extern unsigned int uStack_100;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64 fn_82997150(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_110 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned char auStack_50 [64];
  
  auStack_110[0] = 0;
  stack_pair_100.first = 0;
  stack_pair_100.second = 1;
  uStack_f8 = 2;
  uStack_f4 = 3;
  if ((**(unsigned int **)(param_1 + 0x104) & 0xfffff) == 3) {
    uVar2 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff82050b90,auStack_50,
                              auStack_110,&uStack_f0,&stack_pair_100.first,3);
    if ((int)uVar2 == 0) {
      puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x104) + 8);
      *puVar1 = uStack_f0;
      puVar1[1] = uStack_ec;
      puVar1[2] = uStack_e8;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

