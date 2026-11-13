extern unsigned int *auStack_11c;
extern int fn_82635D20();
extern int fn_82635DB8();
extern int fn_82A29A38();
extern int fn_82A9FA90();
extern int fn_82AB72A0();
extern unsigned int iStack_8c;
extern unsigned int uStack_120;


void fn_82AA10A0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned int uStack_120;
  unsigned int auStack_11c [3];
  int aiStack_110 [17];
  int aiStack_cc [16];
  int iStack_8c;
  
  if (param_3 == 0) {
    fn_82635DB8(param_2,0,1,0x90);
  }
  uVar5 = 0;
  uVar6 = 0;
  do {
    fn_82AB72A0(param_1,uVar6,aiStack_110);
    if (aiStack_110[0] == 1) {
      if ((uVar5 & 0xffffffff) != (uVar6 & 0xffffffff)) {
        fn_82A29A38();
      }
      uVar5 = uVar5 + 1;
      iVar9 = -1;
      iVar8 = -1;
      uVar4 = 0;
      uVar10 = 0;
      if ((param_3 == 0) || (bVar3 = 1, iStack_8c != 1)) {
        bVar3 = 0;
      }
      uVar7 = 0;
      piVar11 = aiStack_cc;
      do {
        iVar1 = piVar11[-4];
        iVar2 = *piVar11;
        if (piVar11[4] != 0) {
          if ((iVar1 != iVar9) || (iVar2 != iVar8)) {
            if (uVar10 != 0) {
              fn_82635D20(param_2,uVar6,uVar10,uVar4);
              uVar10 = 0;
            }
            fn_82A9FA90(piVar11[-8],piVar11[-0xc],iVar1,iVar2,&uStack_120,auStack_11c);
            uVar4 = ((unsigned int)bVar3 << 4 | uStack_120 & 0xf) << 4 | auStack_11c[0] & 0xf;
            iVar9 = iVar1;
            iVar8 = iVar2;
          }
          uVar10 = 1 << (uVar7 & 0x3f) | uVar10;
        }
        uVar7 = uVar7 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar7 < 4);
      if (uVar10 != 0) {
        fn_82635D20(param_2,uVar6,uVar10,uVar4);
      }
    }
    uVar6 = uVar6 + 1;
  } while ((uVar6 & 0xffffffff) < 0x10);
  return;
}

