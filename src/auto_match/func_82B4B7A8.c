#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_30 ((*(unsigned __int64*)&fStack_30))
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82AA66A8();
extern int fn_82B46830();
extern int fn_82B4A7C0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82B4B7A8(int param_1,int param_2,unsigned int param_3,__int64 param_4,float *param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 alStack_40 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (param_2 != 0) {
    return 0;
  }
  if (param_3 == 0) {
    iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x160,1,0,1,1,(unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x28
                         );
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar3 = lbl_821AAD20;
    if (*param_5 != 0.0) {
      uVar3 = lbl_82002AE0;
    }
    alStack_40[0] = CONCAT44(uVar3,((unsigned int)(alStack_40[0])));
    uVar4 = 1;
    param_5 = (float *)alStack_40;
  }
  else {
    if (param_3 != 1) {
      if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x140,1,2,1,4,
                            (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x28);
      iVar2 = *(int *)(iVar2 + 0x18);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      uVar4 = 4;
      alStack_40[0] = (__int64)(int)param_5[1];
      fStack_24 = (float)(__int64)(int)param_5[3];
      uVar1 = *(unsigned int *)(iVar2 + 0x2c);
      fStack_28 = (float)(__int64)(int)param_5[2];
      _fStack_30 = CONCAT44((float)(__int64)(int)*param_5,(float)alStack_40[0]);
      param_5 = &fStack_30;
      goto LAB_82b4b984;
    }
    iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x40,1,0xc,1,4,
                          (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x28);
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar4 = 4;
  }
  uVar1 = *(unsigned int *)(iVar2 + 0x2c);
LAB_82b4b984:
  *(unsigned int *)(iVar2 + 0x2c) = uVar1 | 2;
  uVar3 = fn_82B46830(param_1,param_5,uVar4);
  *(unsigned int *)(iVar2 + 0x34) = uVar3;
  return 0;
}

