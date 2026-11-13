extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern int fn_82358FD8();
extern int fn_82528EE0();
extern float lbl_82192488;


unsigned __int64 fn_823ABD00(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char auStack_110 [128];
  unsigned char auStack_90 [128];
  
  fn_82358FD8(param_2,auStack_90,0x40,0xffffffff821b5960);
  uVar4 = 0xffffffffU - ((int)*(float *)(param_1 + 0x8c) >> 0x1f) & (int)*(float *)(param_1 + 0x8c);
  if (0x62 < (int)uVar4) {
    uVar4 = 99;
  }
  uVar3 = (unsigned int)((*(float *)(param_1 + 0x8c) - (float)(__int64)(int)*(float *)(param_1 + 0x8c)) *
                lbl_82192488);
  uVar3 = 0xffffffffU - ((int)uVar3 >> 0x1f) & uVar3;
  if (0x62 < (int)uVar3) {
    uVar3 = 99;
  }
  uVar2 = 0xffffffff821b597c;
  if (9 < (int)uVar3) {
    uVar2 = 0xffffffff82196582;
  }
  uVar1 = 0xffffffff82196582;
  if ((int)uVar4 < 10) {
    uVar1 = 0xffffffff821b597c;
  }
  fn_82528EE0(auStack_110,0x40,0xffffffff821b5980,uVar1,uVar4,uVar3,uVar2);
  fn_82528EE0(0xffffffff832991b8,0x40,auStack_90,auStack_110);
  return 0xffffffff832991b8;
}

