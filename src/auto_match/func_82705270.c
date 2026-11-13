extern unsigned int *auStack_40;
extern int fn_82682D30();
extern int fn_82693410();
extern int fn_82696330();
extern int fn_826C7870();
extern int fn_82700C78();
extern int fn_82704A98();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


unsigned __int64 fn_82705270(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_40 [32];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
    lVar1 = fn_82693410();
    *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + 1;
    auStack_40[0] = 0;
    if ((*(int *)(param_1 + 0xa00) == 0) || (lVar2 = fn_82704A98(param_1,param_2), lVar2 == 0)) {
      uVar3 = fn_826C7870(*(unsigned int *)(param_1 + 0x68),param_2,auStack_40,param_4,
                              &stack0x00000030);
    }
    else {
      uVar3 = fn_82700C78(param_1,param_2,lVar2,auStack_40,param_4,&stack0x00000030);
    }
    if (((uVar3 & 0xff) != 0) && ((param_3 & 0xffffffff) != 0)) {
      uVar4 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
      fn_82682D30(param_1,uVar4,auStack_40,param_3);
    }
    fn_82696330(auStack_40);
    lVar2 = fn_82693410();
    *(__int64 *)(param_1 + 0xb58) = *(__int64 *)(param_1 + 0xb58) + (lVar2 - lVar1);
    return uVar3;
  }
  return 0;
}

