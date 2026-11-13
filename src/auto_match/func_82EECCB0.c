extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E7BF78();
extern int fn_82EECBE8();
extern int fn_82F68CC0();


__int64 fn_82EECCB0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int auStack_40 [16];
  
  lVar3 = 0;
  auStack_40[0] = 0;
  lVar2 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    lVar2 = fn_82E7BF78(param_3,0xffff,auStack_40);
    if (lVar2 < 0) goto LAB_82eecd8c;
    lVar3 = (unsigned __int64)auStack_40[0] + 2;
    *(short *)(param_2 + 8) = (short)lVar3;
  }
  uVar1 = fn_82E50BE8(*(unsigned short *)(param_2 + 8),0,0,0,0);
  *(int *)(param_2 + 0xc) = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,param_3,lVar3);
    }
    uVar1 = fn_82E50BE8(*(unsigned int *)(param_2 + 0x10),0,0,0,0);
    *(int *)(param_2 + 0x14) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      if ((param_4 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,param_4,*(unsigned int *)(param_2 + 0x10));
      }
      if (-1 < (int)lVar2) {
        return lVar2;
      }
      goto LAB_82eecd8c;
    }
  }
  lVar2 = -0x7ff8fff2;
LAB_82eecd8c:
  fn_82EECBE8(param_1,param_2);
  return lVar2;
}

