extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BAC5A0();
extern int fn_82BAC750();
extern int fn_82BBFE28();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC5580();
extern int fn_82BC5AD0();
extern int fn_82BC7368();
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;


void fn_82BAE810(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar7;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  int *piVar8;
  
  iVar4 = param_2[0x25];
  if (iVar4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa78,0xffffffff820df268,0x65c);
  }
  iVar3 = fn_82BBFE28(iVar4 + 0x14);
  if ((iVar3 < 3) && (cVar7 = fn_82BC5AD0(iVar4), cVar7 != '\0')) {
    if (*(int *)(*(int *)(iVar4 + 0x38) + 4) == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(iVar4 + 0x38) + 8);
    }
    if (*piVar8 == param_2[0x26]) {
      return;
    }
  }
  cVar7 = (**(int (***)())(*param_2 + 0x30))(param_2);
  if (cVar7 == '\0') {
    if ((*(char *)(param_2 + 0x23) == '\0') || (*(int *)(param_1[0x19] + 4) != 2)) {
      uVar1 = *(unsigned int *)(param_1[0x19] + 4);
      if (uVar1 - 1 < uVar1) {
        piVar8 = (int *)((uVar1 - 1) * 4 + *(int *)(param_1[0x19] + 8));
      }
      else {
        piVar8 = (int *)0x0;
      }
      if (*piVar8 != 3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa08,0xffffffff820df268,0x675);
      }
      if (*(char *)param_1[0x23] == '\0') {
        iVar3 = fn_82BC24F0(0x57,*param_1);
        iVar6 = fn_82BA92B0(param_1);
        if (iVar6 == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x67a);
        }
        uVar2 = *(unsigned int *)(iVar6 + 0x38);
        *(unsigned int *)(iVar3 + 0x50) = 0;
        *(unsigned int *)(iVar3 + 0x38) = uVar2;
        *(unsigned int *)(iVar3 + 0x80) = lbl_820DF0C4;
        fn_82BA05E8(iVar3,1,iVar6);
        *(unsigned int *)(iVar3 + 0x84) = lbl_820DF0D0;
        *(unsigned int *)(iVar3 + 0x34) = 0;
        fn_82BC5580(iVar4,iVar3);
      }
    }
    else {
      iVar4 = fn_82BC7368();
      if (iVar4 != 3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa08,0xffffffff820df268,0x670);
      }
      puVar5 = (unsigned int *)fn_82BC0088(param_1[0x19],*(unsigned int *)(param_1[0x19] + 4));
      *puVar5 = 2;
    }
  }
  else {
    fn_82BAC5A0(param_1,(unsigned __int64)(unsigned int)param_1[0xe] + 1);
    fn_82BAC750(param_1,1,0,1);
  }
  return;
}

