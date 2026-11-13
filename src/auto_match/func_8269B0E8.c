extern unsigned int *auStack_90;
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_826BD928();
extern int fn_826D2B68();


unsigned int fn_8269B0E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int auStack_90 [4];
  int aiStack_80 [28];
  
  lVar1 = fn_826BD928((unsigned __int64)*(unsigned int *)(param_1 + 0x20) + 0x68);
  if (((lVar1 != 0) && (-1 < (int)param_3)) && ((int)param_3 < 0x7efffffe)) {
    auStack_90[0] = *(unsigned int *)(param_1 + 0x10);
    fn_82681BF8((double)*(float *)(param_1 + 0x1c),aiStack_80,auStack_90,param_3,1,
                    param_1 + 0x24,1,param_1 + 0x44);
    uVar2 = fn_826D2B68(lVar1,aiStack_80,param_2,0,param_4,0xffffffffffffffff,1,0);
    if (uVar2 != 0) {
      uVar2 = -(unsigned int)((*(unsigned char *)(uVar2 + 0x66) & 0x80) != 0) & uVar2;
      if (aiStack_80[0] == 0) {
        return uVar2;
      }
      fn_8267C498();
      return uVar2;
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
  }
  return 0;
}

