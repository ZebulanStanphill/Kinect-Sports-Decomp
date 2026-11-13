extern unsigned int *auStack_240;
extern unsigned int *auStack_270;
extern unsigned int *auStack_288;
extern unsigned int *auStack_290;
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CEAC20();
extern int fn_82CEAC60();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFBBF0();
extern unsigned int *lbl_8323B464;


int * fn_82E15A60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  int iVar5;
  unsigned __int64 uVar2;
  char *pcVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar7;
  int iVar8;
  int iVar9;
  unsigned char auStack_290 [8];
  unsigned char auStack_288 [24];
  unsigned char auStack_270 [48];
  unsigned char auStack_240 [480];
  
  iVar9 = 0;
  iVar8 = 0;
  do {
    if ((param_4 == 0) || (*(int *)(param_1 + 0x14) <= iVar9)) break;
    iVar9 = iVar9 + 1;
    piVar7 = (int *)(*(int *)(param_1 + 0x10) + iVar8);
    iVar8 = iVar8 + 4;
  } while (*piVar7 != param_4);
  if (iVar9 < *(int *)(param_1 + 0x14)) {
    iVar8 = iVar9 << 2;
    do {
      piVar7 = *(int **)(iVar8 + *(int *)(param_1 + 0x10));
      if ((param_2 & 0xffffffff) == 0) {
LAB_82e15b18:
        if ((param_3 & 0xffffffff) == 0) {
          return piVar7;
        }
        uVar2 = (**(int (***)())(*piVar7 + 0x1c))(piVar7);
        if ((param_3 & 0xffffffff) == (uVar2 & 0xffffffff)) {
          return piVar7;
        }
        pcVar6 = (char *)fn_82CEAC60(auStack_290,param_3,uVar2);
        if (*pcVar6 != '\0') {
          return piVar7;
        }
        if ((param_2 & 0xffffffff) != 0) {
          fn_82CEE578(auStack_288,auStack_240,0x200);
          uVar1 = fn_82CEAC20(uVar2);
          uVar3 = fn_82CEAC20(param_3);
          uVar4 = fn_82CEDB38(auStack_288,0xffffffff8214b300);
          uVar3 = fn_82CEDB38(uVar4,uVar3);
          uVar3 = fn_82CEDB38(uVar3,0xffffffff8214b328);
          fn_82CEDB38(uVar3,uVar1);
          (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0xfffffffff034ed22,auStack_240,0xffffffff8214b2c0,0x139);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_288);
        }
      }
      else {
        fn_82CE7EE0(auStack_270);
        uVar1 = (**(int (***)())(*piVar7 + 0x10))(piVar7,auStack_270);
        iVar5 = fn_82CFBBF0(param_2,uVar1);
        if (iVar5 == 0) {
          fn_82CE7E68(auStack_270);
          goto LAB_82e15b18;
        }
        fn_82CE7E68(auStack_270);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x14));
  }
  return (int *)0x0;
}

