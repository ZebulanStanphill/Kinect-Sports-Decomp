extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00450();
extern int fn_82E1ADB0();
extern int fn_82E1B428();
extern int fn_82E1BDF0();
extern unsigned int iStack_6c;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64
fn_82E1B6F8(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar1;
  int iVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  int *piVar8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  int *piStack_74;
  unsigned int uStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 0x80000000;
  piStack_74 = (int *)0x0;
  uStack_70 = 0;
  iStack_6c = -1;
  iVar6 = fn_82CE5410();
  fn_82CEAB00(&piStack_74,*(unsigned int *)(iVar6 + 0x10),0);
  uStack_68 = 0xffffffff;
  uVar2 = fn_82CEAC20(param_2);
  uVar3 = fn_82CEAC20(param_2);
  uVar2 = fn_82D00450(param_4,uVar3,uVar2);
  uVar2 = fn_82E1B428(param_1,param_2,uVar2,&stack_pair_80.first);
  uVar3 = fn_82CEAC20();
  fn_82D000A0(param_5,uVar3,uVar2);
  if ((uStack_70 & 0x7fffffff) != 0) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_a0,*(unsigned int *)(iVar6 + 0x10),0);
    iVar6 = 0;
    piVar8 = piStack_74;
    if (-1 < iStack_6c) {
      do {
        if (*piVar8 != -1) break;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar6 <= iStack_6c);
    }
    if (iVar6 <= iStack_6c) {
      do {
        iVar1 = piStack_74[iVar6 * 2];
        uVar3 = fn_82CEAC20(iVar1);
        uVar4 = fn_82CEAC20(iVar1);
        uVar3 = fn_82D00450(param_4,uVar4,uVar3);
        uVar5 = (**(int (***)())(*param_3 + 0x2c))(param_3,uVar3);
        if (((uVar5 & 0xffffffff) != 0) ||
           (uVar5 = fn_82D00450(param_5,uVar3,0), (uVar5 & 0xffffffff) != 0)) {
          iVar7 = fn_82CE5410();
          fn_82CEA160(&uStack_a0,*(unsigned int *)(iVar7 + 0x10),iVar1,uVar5);
        }
        iVar6 = iVar6 + 1;
        if (iVar6 <= iStack_6c) {
          piVar8 = piStack_74 + iVar6 * 2;
          do {
            if (*piVar8 != -1) break;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 2;
          } while (iVar6 <= iStack_6c);
        }
      } while (iVar6 <= iStack_6c);
    }
    fn_82E1ADB0(&stack_pair_80.first,&uStack_a0);
    iVar6 = fn_82CE5410();
    fn_82CEA4B8(&uStack_a0,*(unsigned int *)(iVar6 + 0x10));
    fn_82BA02A8(&uStack_a0);
  }
  if ((uStack_70 & 0x7fffffff) != 0) {
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0xffffffff;
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_90,*(unsigned int *)(iVar6 + 0x10),0);
    iVar6 = 0;
    piVar8 = piStack_74;
    if (-1 < iStack_6c) {
      do {
        if (*piVar8 != -1) break;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar6 <= iStack_6c);
    }
    if (iVar6 <= iStack_6c) {
      do {
        iVar1 = piStack_74[iVar6 * 2];
        uVar3 = fn_82E1B6F8(param_1,iVar1,param_3,param_4,param_5);
        iVar7 = fn_82CE5410();
        fn_82CEA160(&uStack_90,*(unsigned int *)(iVar7 + 0x10),iVar1,uVar3);
        iVar6 = iVar6 + 1;
        if (iVar6 <= iStack_6c) {
          piVar8 = piStack_74 + iVar6 * 2;
          do {
            if (*piVar8 != -1) break;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 2;
          } while (iVar6 <= iStack_6c);
        }
      } while (iVar6 <= iStack_6c);
    }
    fn_82E1ADB0(&stack_pair_80.first,&uStack_90);
    iVar6 = fn_82CE5410();
    fn_82CEA4B8(&uStack_90,*(unsigned int *)(iVar6 + 0x10));
    fn_82BA02A8(&uStack_90);
  }
  fn_82E1BDF0(&stack_pair_80.first);
  return uVar2;
}

