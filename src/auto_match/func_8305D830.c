typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810B78();
extern int fn_8305F7A0();
extern int fn_83066658();


bool fn_8305D830(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar1 = (int)((param_2 & 0xffffffff) << 2);
  uVar2 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                       *(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar1));
  uVar3 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                       *(unsigned int *)
                        ((int)(((param_2 + 1) -
                                (__int64)((int)(param_2 + 1) / iVar4) * (__int64)iVar4 &
                               0xffffffff) << 2) + *(int *)(param_1 + 0x2c)));
  fn_82810328(uVar3,uVar2,auStack_40);
  iVar4 = fn_82810470(auStack_40);
  if (iVar4 == 0) {
    fn_82810240(auStack_40,param_1 + 0x34,auStack_50);
    fn_82810B78(auStack_50,auStack_50);
    uVar2 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                         *(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar1));
    fn_83066658(param_3,auStack_50,uVar2);
  }
  return iVar4 == 0;
}

