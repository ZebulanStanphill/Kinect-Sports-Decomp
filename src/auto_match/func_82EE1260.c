#define CONCAT26(h,l) ((unsigned __int64)((((unsigned short)(h)) << 48) | ((unsigned __int64)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE0458();
extern int fn_82EE0FD0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


__int64 fn_82EE1260(int *param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  if (0xfffe < (unsigned int)param_1[0x95]) {
    return -0x3ff2c94e;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar1 = (**(int (***)())(*param_1 + 0x40))(param_1,param_2);
  if (lVar1 < 0) {
    return lVar1;
  }
  uVar2 = fn_82E50BE8(*(unsigned short *)(param_2 + 8),0,0,0,0);
  uVar3 = fn_82E50BE8(*(unsigned int *)(param_2 + 0x10),0,0,0,0);
  if (((uVar2 & 0xffffffff) == 0) || ((uVar3 & 0xffffffff) == 0)) {
    lVar1 = -0x7ff8fff2;
  }
  else {
    uStack_48 = CONCAT44((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF),(int)uVar2);
    uStack_48 = CONCAT26(*(unsigned short *)(param_2 + 8),(((unsigned __int64)(uStack_48) >> 16) & 0xFFFFFFFFFFFF));
    uStack_40 = CONCAT44(*(unsigned int *)(param_2 + 0x10),(int)uVar3);
    lVar1 = fn_82EE0458(param_1,param_2,&uStack_50);
    if (lVar1 < 0) goto LAB_82ee1388;
    iVar4 = fn_82EE0FD0(param_1 + 0x12,uStack_50,uStack_48,uStack_40,0);
    if (iVar4 == 0) {
      lVar1 = -0x7fffbffb;
      goto LAB_82ee1388;
    }
  }
  if (-1 < (int)lVar1) {
    return lVar1;
  }
LAB_82ee1388:
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar2);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  return lVar1;
}

