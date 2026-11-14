extern unsigned int *auStack_2060;
extern unsigned int *auStack_4080;
extern int fn_82AB15D0();
extern int fn_82AB7070();
extern int fn_82AB73B0();
extern int fn_82B69A00();
extern int fn_82B7BEB0();
extern int fn_82B7C530();
extern int fn_82B7C848();
extern int fn_82B7C9B8();
extern int fn_82B7CA68();
extern int fn_82B7CAE0();
extern int fn_82B7CD90();
extern int fn_82BA02A8();
extern int fn_82BA71D8();
extern int fn_82BA7278();
extern int fn_82F691F0();
extern int setjmp();
extern int longjmp();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000034;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82B7D3B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5,
                 unsigned int param_6)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int iStack0000002c;
  int iStack00000034;
  unsigned char auStack_4080 [8224];
  unsigned char auStack_2060 [8288];
  
  uStack0000001c = (unsigned int)param_2;
  uStack00000024 = (unsigned int)param_3;
  iStack00000014 = param_1;
  iStack0000002c = param_4;
  iStack00000034 = param_5;
  fn_82B7C9B8();
  fn_82B7CA68(param_1);
  *(unsigned int *)(param_1 + 0x600) = param_6;
  uVar7 = fn_82B7CAE0(param_2,param_3,param_1);
  *(unsigned int *)(param_1 + 0x5d0) = uVar7;
  iVar8 = setjmp(param_1 + 0x10);
  uVar6 = uStack00000024;
  uVar7 = uStack0000001c;
  iVar5 = iStack00000014;
  if (iVar8 == 0) {
    iVar8 = fn_82B69A00(*(unsigned int *)(param_1 + 0x568),8);
    if (iVar8 == 0) {
      uVar9 = 0xffffffff820db694;
    }
    else {
      uVar9 = 0xffffffff820db6c4;
    }
    fn_82BA02A8(iVar5,uVar9);
    if ((iStack0000002c == 0) || (iStack00000034 == 0)) {
      *(unsigned int *)(iVar5 + 0x554) = 0x15;
                    /* WARNING: Subroutine does not return */
      longjmp(iVar5 + 0x10,1);
    }
    iVar8 = fn_82BA7278(iStack0000002c,iStack00000034,param_1);
    fn_82B7CD90(iVar5,iVar8);
    if (iVar8 != 0) {
      fn_82BA71D8(iVar8);
      fn_82B7BEB0(*(unsigned int *)(iVar8 + -4),iVar8 + -4);
    }
    iVar8 = fn_82AB7070(uVar7,*(unsigned int *)(iVar5 + 0x604),*(unsigned int *)(iVar5 + 0x654));
    if (iVar8 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820db408,0x346);
    }
    iVar8 = fn_82AB7070(uVar6,*(unsigned int *)(iVar5 + 0x608),*(unsigned int *)(iVar5 + 0x658));
    if (iVar8 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820db408,0x34a);
    }
    if ((*(int *)(iVar5 + 0x604) != 0) &&
       (*(unsigned int *)(iVar5 + 0x7f4) = 0, *(char *)(iVar5 + 0x851) != '\0')) {
      fn_82BA02A8(iVar5,0xffffffff820db680);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4080,0,0x2000);
    }
    if ((*(int *)(iVar5 + 0x608) != 0) &&
       (*(unsigned int *)(iVar5 + 0x7f4) = 1, *(char *)(iVar5 + 0x851) != '\0')) {
      fn_82BA02A8(iVar5,0xffffffff820db66c);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_2060,0,0x2000);
    }
  }
  if (*(int *)(iVar5 + 0x654) != 0) {
    (**(int (***)())(iVar5 + 0x59c))(*(unsigned int *)(iVar5 + 0x5a4));
  }
  *(unsigned int *)(iVar5 + 0x604) = 0;
  *(unsigned int *)(iVar5 + 0x654) = 0;
  if (*(int *)(iVar5 + 0x658) != 0) {
    (**(int (***)())(iVar5 + 0x59c))(*(unsigned int *)(iVar5 + 0x5a4));
  }
  *(unsigned int *)(iVar5 + 0x658) = 0;
  *(unsigned int *)(iVar5 + 0x608) = 0;
  iVar8 = *(int *)(param_1 + 0x554);
  if (iVar8 != 0) goto LAB_82b7d950;
  cVar1 = *(char *)(iVar5 + 0x7e9);
  uVar9 = 0;
  if ((((cVar1 != '\0') && (*(char *)(iVar5 + 0x7ea) == '\0')) && (*(char *)(iVar5 + 0x7eb) == '\0')
      ) && (*(char *)(iVar5 + 0x7ec) == '\0')) {
    uVar9 = 2;
  }
  if (cVar1 == '\0') {
    if (((*(char *)(iVar5 + 0x7ea) == '\0') && (*(char *)(iVar5 + 0x7eb) != '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 3;
    }
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) == '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 4;
    }
LAB_82b7d720:
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) != '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 6;
    }
    if (((cVar1 == '\0') && (*(char *)(iVar5 + 0x7ea) == '\0')) &&
       ((*(char *)(iVar5 + 0x7eb) == '\0' && (*(char *)(iVar5 + 0x7ec) != '\0')))) {
      uVar9 = 7;
    }
  }
  else {
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) == '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 5;
    }
    if (cVar1 == '\0') goto LAB_82b7d720;
  }
  uVar11 = *(int *)(iVar5 + 0x748) << 1;
  if (*(char *)(iVar5 + 0x7e8) != '\0') {
    uVar11 = uVar11 | 1;
  }
  uVar2 = *(unsigned int *)(iVar5 + 0x6f4);
  if ((int)*(unsigned int *)(iVar5 + 0x6f4) <= (int)*(unsigned int *)(iVar5 + 0x6f8)) {
    uVar2 = *(unsigned int *)(iVar5 + 0x6f8);
  }
  uVar3 = *(unsigned int *)(iVar5 + 0x794);
  uVar4 = *(unsigned int *)(iVar5 + 0x798);
  uVar10 = (((unsigned __int64)uVar2 - 1 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)uVar2 - 1;
  fn_82AB73B0(uVar7,0x7ba,*(unsigned int *)(iVar5 + 0x6a4));
  fn_82AB73B0(uVar6,0x7ba,*(unsigned int *)(iVar5 + 0x6a4));
  fn_82AB73B0(uVar7,0x7bb,*(unsigned int *)(iVar5 + 0x6a8));
  fn_82AB73B0(uVar6,0x7bb,*(unsigned int *)(iVar5 + 0x6a8));
  fn_82AB73B0(uVar7,0x7bc,uVar3);
  fn_82AB73B0(uVar6,0x7bc,uVar3);
  fn_82AB73B0(uVar7,0x7bd,uVar4);
  fn_82AB73B0(uVar6,0x7bd,uVar4);
  fn_82AB73B0(uVar7,0x7be,*(unsigned char *)(iVar5 + 0x7ed));
  fn_82AB73B0(uVar6,0x7be,*(unsigned char *)(iVar5 + 0x7ed));
  fn_82AB73B0(uVar7,0x7bf,0);
  fn_82AB73B0(uVar6,0x7bf,0);
  fn_82AB73B0(uVar7,0x7c0,uVar10);
  fn_82AB73B0(uVar6,0x7c0,uVar10);
  fn_82AB73B0(uVar7,0x7c1,uVar9);
  fn_82AB73B0(uVar6,0x7c1,uVar9);
  fn_82AB73B0(uVar7,0x7c2,uVar11);
  fn_82AB73B0(uVar6,0x7c2,uVar11);
  fn_82AB73B0(uVar7,0x7c3,0);
  fn_82AB73B0(uVar6,0x7c3,0);
  fn_82AB73B0(uVar7,0x7c7,*(unsigned int *)(iVar5 + 0x7f0));
  fn_82AB73B0(uVar6,0x7c7,*(unsigned int *)(iVar5 + 0x7f0));
  fn_82AB73B0(uVar7,0x7c5,*(unsigned char *)(iVar5 + 0x7ee));
  fn_82AB73B0(uVar6,0x7c5,*(unsigned char *)(iVar5 + 0x7ee));
  fn_82BA02A8(iVar5,0xffffffff821cc86c);
  fn_82B7C848();
LAB_82b7d950:
  fn_82B7C530(param_1,0);
  return iVar8;
}

