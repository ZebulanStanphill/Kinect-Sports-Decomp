extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int memcpy();
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_f0;


__int64 fn_8294C648(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned int auStack_120 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned int auStack_100 [4];
  unsigned int uStack_f0;
  unsigned char auStack_60 [96];
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  iVar4 = 0;
  stack_pair_110.second = 1;
  auStack_120[0] = 0;
  stack_pair_110.first = 0;
  uStack_108 = 2;
  uStack_104 = 3;
  if (((*puVar1 & 0xfffff) == 1) &&
     ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14)) + 4) *
                          4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0)) {
    lVar2 = fn_8294AC48(param_1,puVar1,0xffffffff82036cd0,auStack_60,auStack_120,auStack_100,
                          &stack_pair_110.first,1);
    if ((int)lVar2 == 0) {
      iVar3 = fn_82963998(0x74);
      if (iVar3 != 0) {
        iVar4 = fn_829632A0();
      }
      if (iVar4 == 0) {
        lVar2 = -0x7ff8fff2;
      }
      else {
        lVar2 = fn_82963A30(iVar4,0x70d00001,2,1,0);
        if ((lVar2 < 0) || (lVar2 = fn_829632F0(iVar4,*(unsigned int *)(param_1 + 0x104)), lVar2 < 0)
           ) {
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
        else {
          memcpy(*(unsigned int *)(iVar4 + 0x10),
                       *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10),
                       *(int *)(*(int *)(param_1 + 0x104) + 0xc) << 2);
          **(unsigned int **)(iVar4 + 8) = uStack_f0;
          *(unsigned int *)(*(int *)(iVar4 + 8) + 4) = auStack_100[0];
          lVar2 = fn_82963D50(*(unsigned int *)(param_1 + 0x104),iVar4);
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
      }
    }
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}

