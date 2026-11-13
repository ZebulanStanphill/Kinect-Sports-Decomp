#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_8267C4F0();
extern int fn_8278E7B0();
extern int fn_82790678();
extern int fn_82791BD8();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern int fn_82794EE8();
extern int fn_82795918();
extern int fn_82795E00();
extern unsigned int iStack_54;
extern unsigned int iStack_64;
extern unsigned int iStack_80;
extern unsigned int uStack_50;


void fn_82796240(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,__int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int auStack_90 [2];
  unsigned char auStack_88 [8];
  int iStack_80;
  unsigned char auStack_70 [12];
  int iStack_64;
  int iStack_54;
  unsigned int uStack_50;
  
  if ((param_6 & 0xffffffff) != 0) {
    fn_82795E00(param_1,param_2,(param_4 & 0x7fffffff) * 2 + (unsigned __int64)*param_3,param_5,param_6,0
                 );
    fn_82791BD8(auStack_70,param_3 + 4,param_3,param_4);
    while( true ) {
      if ((*(unsigned int *)(iStack_54 + 4) <= uStack_50) || ((param_6 & 0xffffffff) == 0)) break;
      iVar4 = fn_82791CF0(auStack_70);
      uVar1 = *(unsigned int *)(iVar4 + 4);
      if ((int)uVar1 < (int)param_4) {
        lVar5 = 0;
        uVar6 = (*(unsigned int *)(iVar4 + 8) - param_4) + (unsigned __int64)uVar1;
      }
      else {
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 8);
        lVar5 = uVar1 - param_4;
      }
      if ((param_6 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
        uVar6 = param_6;
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        uVar2 = fn_8278E7B0(param_2);
        auStack_90[0] = (unsigned int)uVar2;
        uVar3 = fn_82790678(auStack_88,lVar5 + param_5,uVar6,auStack_90);
        fn_82794EE8(param_1 + 0x10,uVar3);
        if (iStack_80 != 0) {
          fn_8267C4F0();
        }
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
      }
      param_6 = param_6 - uVar6;
      fn_82791DF0(auStack_70);
    }
    fn_82795918(param_1);
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    if (iStack_64 != 0) {
      fn_8267C4F0();
    }
  }
  return;
}

