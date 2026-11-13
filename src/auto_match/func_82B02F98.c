#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_120;
extern unsigned int *auStack_200;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_3c0;
extern int fn_82AF6F10();
extern int fn_82B02C70();
extern int fn_82B82D28();
extern int fn_82B8C970();
extern unsigned int iStack_3dc;
extern unsigned int uStack_104;
extern unsigned int uStack_118;
extern unsigned int uStack_130;
extern unsigned int uStack_13c;
extern unsigned int uStack_160;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1f8;
extern unsigned int uStack_210;
extern unsigned int uStack_21c;
extern unsigned int uStack_240;
extern unsigned int uStack_2c4;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_2fc;
extern unsigned int uStack_320;
extern unsigned int uStack_3a4;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3d0;
extern unsigned int uStack_3d4;
extern unsigned int uStack_3d8;
extern unsigned int uStack_3e0;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;


unsigned __int64 fn_82B02F98(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uStack_3e0;
  int iStack_3dc;
  unsigned int uStack_3d8;
  unsigned int uStack_3d4;
  unsigned int uStack_3d0;
  int aiStack_3cc [3];
  unsigned int auStack_3c0 [2];
  unsigned int uStack_3b8;
  unsigned int uStack_3a4;
  unsigned int uStack_320;
  unsigned int uStack_2fc;
  unsigned __int64 uStack_2f0;
  unsigned int auStack_2e0 [2];
  unsigned int uStack_2d8;
  unsigned int uStack_2c4;
  unsigned int uStack_240;
  unsigned int uStack_21c;
  unsigned __int64 uStack_210;
  unsigned int auStack_200 [2];
  unsigned int uStack_1f8;
  unsigned int uStack_1e4;
  unsigned int uStack_160;
  unsigned int uStack_13c;
  unsigned __int64 uStack_130;
  unsigned int auStack_120 [2];
  unsigned int uStack_118;
  unsigned int uStack_104;
  unsigned int uStack_80;
  unsigned int uStack_5c;
  unsigned __int64 uStack_50;
  
  fn_82B82D28(*(unsigned int *)(param_3 + 0x2c),param_4,aiStack_3cc,&uStack_3d8,&uStack_3d4,
                    *(unsigned int *)(param_3 + 0x1c),0,1);
  fn_82B82D28(*(unsigned int *)(param_3 + 0x30),param_4,&iStack_3dc,&uStack_3e0,&uStack_3d0,
                    *(unsigned int *)(param_3 + 0x1c),0,1);
  auStack_120[0] = 0;
  auStack_2e0[0] = 0;
  auStack_200[0] = 0;
  auStack_3c0[0] = 0;
  uStack_118 = 0;
  uStack_2d8 = 0;
  uStack_1f8 = 0;
  uStack_3b8 = 0;
  uStack_104 = 0;
  uStack_80 = 0;
  uStack_5c = 0;
  uStack_2c4 = 0;
  uStack_240 = 0;
  uStack_21c = 0;
  uStack_1e4 = 0;
  uStack_160 = 0;
  uStack_13c = 0;
  uStack_3a4 = 0;
  uStack_320 = 0;
  uStack_2fc = 0;
  uStack_50 = 0;
  uStack_210 = 0;
  uStack_130 = 0;
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  puVar2 = *(unsigned int **)(param_2 + 0x30);
  uStack_2f0 = 0;
  if (((CONCAT44(uStack_3d4,uStack_3d4) & 0xfffffffffffffffb) == 0) &&
     ((*(unsigned int *)(aiStack_3cc[0] + 8) & 0x3f80) == 0x80)) {
    fn_82AF6F10(param_1,param_3,aiStack_3cc[0],uStack_3d8,uStack_3d4,puVar1[3],0,
                      *puVar1 & 0x1f);
    fn_82AF6F10(param_1,param_3,aiStack_3cc[0],uStack_3d8,uStack_3d4,puVar2[3],0,
                      *puVar2 & 0x1f);
  }
  if (((CONCAT44(uStack_3d0,uStack_3d0) & 0xfffffffffffffffb) == 0) &&
     ((*(unsigned int *)(iStack_3dc + 8) & 0x3f80) == 0x80)) {
    fn_82AF6F10(param_1,param_3,iStack_3dc,uStack_3e0,uStack_3d0,puVar1[3],0,*puVar1 & 0x1f);
    fn_82AF6F10(param_1,param_3,iStack_3dc,uStack_3e0,uStack_3d0,puVar2[3],0,*puVar2 & 0x1f);
  }
  uVar3 = *puVar1 >> 0x19 & 7;
  if ((uStack_104 < 2) || (4 < (uStack_104 + uVar3) - 1)) {
    if ((uStack_2c4 < 2) || (4 < (uStack_2c4 + uVar3) - 1)) {
      if ((uStack_1e4 < 2) || (4 < (uStack_1e4 + uVar3) - 1)) {
        if ((uStack_3a4 < 2) || (4 < (uStack_3a4 + uVar3) - 1)) goto LAB_82b031e8;
        puVar5 = auStack_3c0;
      }
      else {
        puVar5 = auStack_200;
      }
    }
    else {
      puVar5 = auStack_2e0;
    }
  }
  else {
    puVar5 = auStack_120;
  }
  uVar4 = fn_82B02C70(param_1,puVar5,param_2,param_4);
  if ((uVar4 & 0xffffffff) != 0) {
    return uVar4;
  }
LAB_82b031e8:
  if ((((unsigned __int64)(uStack_2f0) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_3c0[0],(((unsigned __int64)(uStack_2f0) >> 32) & 0xFFFFFFFF));
  }
  if ((((unsigned __int64)(uStack_130) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_200[0],(((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF));
  }
  if ((((unsigned __int64)(uStack_210) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_2e0[0],(((unsigned __int64)(uStack_210) >> 32) & 0xFFFFFFFF));
  }
  if ((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_120[0],(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF));
  }
  return 0;
}

