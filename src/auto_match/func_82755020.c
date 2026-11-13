extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_826C62B8();
extern int fn_826C6368();
extern int fn_827532F0();
extern int fn_827533C8();
extern int fn_82753490();
extern int fn_82753860();
extern int fn_82754460();
extern int fn_827546D8();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_90;


/* WARNING: Type propagation algorithm not settling */

unsigned int fn_82755020(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  int iVar6;
  unsigned int uStack_90;
  int aiStack_8c [35];
  
  iVar6 = 0;
  if (param_4 != (int *)0x0) {
    iVar6 = *param_4;
    fn_827533C8(param_4,0xffffffff82014344,param_2,0xffffffff820141ec,param_3,0xffffffff82196582);
  }
  aiStack_8c[0] = 0;
  uVar3 = fn_827546D8(param_1,param_2,param_3,aiStack_8c,param_4);
  if ((uVar3 == 0) && ((param_3 & 3) != 0)) {
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
      fn_827533C8(param_4,0xffffffff82014344,param_2,0xffffffff820141ec,param_3 & 0xfffffffc,
                    0xffffffff82196582);
    }
    puVar4 = (unsigned int *)fn_827546D8(param_1,param_2,param_3 & 0xfffffffc,0,param_4);
    if (puVar4 != (unsigned int *)0x0) {
      aiStack_8c[1] = 0x146;
      uVar2 = fn_8267BED0(param_1,0x1c,aiStack_8c + 1);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_82753860(uVar2,puVar4);
      }
      *(unsigned int *)(uVar3 + 8) = *(unsigned int *)(uVar3 + 8) | (unsigned int)(param_3 & 3);
      uStack_90 = uVar3;
      if (param_4 == (int *)0x0) {
        fn_82754460(param_1 + 8,&uStack_90);
      }
      else {
        fn_82753490(param_4,0xffffffff82014320,param_2,0xffffffff820141ec,param_3,
                      0xffffffff82014328,param_2,0xffffffff8200c4f8);
      }
      uVar5 = *puVar4;
      *puVar4 = (unsigned int)((unsigned __int64)uVar5 - 1);
      if ((unsigned __int64)uVar5 - 1 == 0) {
        fn_826C6368(puVar4);
        fn_8267BE38(puVar4);
      }
    }
  }
  iVar1 = aiStack_8c[0];
  if (param_4 != (int *)0x0) {
    *param_4 = iVar6;
  }
  if (uVar3 == 0) {
    if (aiStack_8c[0] != 0) {
      if (param_4 != (int *)0x0) {
        fn_8268AFB0(aiStack_8c + 3,lbl_831E7E64);
        fn_8268B1F0(aiStack_8c + 3,0xffffffff82014310,0xffffffffffffffff);
        fn_8268B1F0(aiStack_8c + 3,param_2,0xffffffffffffffff);
        fn_8268B1F0(aiStack_8c + 3,0xffffffff82014300,0xffffffffffffffff);
        uVar2 = (unsigned __int64)(unsigned int)aiStack_8c[3];
        if ((unsigned __int64)(unsigned int)aiStack_8c[3] == 0) {
          uVar2 = 0xffffffff82196582;
        }
        fn_827532F0(param_4,uVar2);
        fn_8268AFD8(aiStack_8c + 3);
      }
      aiStack_8c[2] = 0x146;
      uVar2 = fn_8267BED0(param_1,0x1c,aiStack_8c + 2);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_826C62B8(uVar2,-(unsigned __int64)(param_4 == (int *)0x0) & param_1,iVar1,param_2,
                                  0,0);
      }
      uStack_90 = uVar5;
      if (param_4 == (int *)0x0) {
        fn_82754460(param_1 + 8,&uStack_90);
      }
      uVar3 = 0;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    fn_827532F0(param_4,0xffffffff820142f0);
  }
  return uVar3;
}

