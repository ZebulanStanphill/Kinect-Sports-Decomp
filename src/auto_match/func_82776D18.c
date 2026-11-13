extern unsigned int *auStack_50;
extern int fn_8267B848();
extern int fn_8267B890();
extern int fn_8267C2D8();
extern int fn_82774840();
extern int fn_82775C38();
extern unsigned int lbl_831E7E64;


void fn_82776D18(int param_1,unsigned __int64 param_2,char param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int auStack_50 [20];
  
  auStack_50[5] = 0;
  auStack_50[0] = -(unsigned int)(param_3 != '\0') & 0x1000;
  auStack_50[7] = 0;
  auStack_50[2] = 0x2000;
  auStack_50[3] = 0x2000;
  auStack_50[4] = 0xffffffff;
  auStack_50[1] = 0x10;
  auStack_50[6] = 6;
  uVar1 = fn_8267C2D8(lbl_831E7E64,0xffffffff8201538c,auStack_50);
  uVar2 = fn_8267B890(uVar1,0xa00,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82775C38(uVar2,uVar1);
  }
  *(unsigned int *)(param_1 + 0x44) = uVar3;
  fn_8267B848(uVar1);
  fn_82774840(param_1,param_2);
  return;
}

