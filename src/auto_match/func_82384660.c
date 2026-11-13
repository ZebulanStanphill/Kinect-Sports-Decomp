#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_8255AEF0();
extern unsigned int lbl_821B3ED0;
extern unsigned int lbl_821B3F50;


void fn_82384660(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned int auStack_30 [12];
  
  iVar3 = fn_8255AEF0((unsigned __int64)*param_1 + 0x81c,param_1 + 3);
  if ((iVar3 != 0) && ((uVar1 = param_1[6], uVar1 < 0x1f || (param_1[7] < 0x1f)))) {
    uVar6 = uVar1;
    if (0x1d < (int)uVar1) {
      uVar6 = 0x1e;
    }
    uVar2 = param_1[7];
    uVar8 = uVar2;
    if (0x1d < (int)uVar2) {
      uVar8 = 0x1e;
    }
    if (uVar1 == uVar2) {
      fn_82536070(0xffffffff821b3fcc,(&lbl_821B3F50)[uVar6]);
      uVar4 = 0xffffffff821b3d30;
    }
    else {
      fn_82536070(0xffffffff821b3fcc,(&lbl_821B3ED0)[uVar6]);
      uVar4 = ZEXT48((&lbl_821B3ED0)[uVar8]);
    }
    fn_82536070(0xffffffff821b3fe8,uVar4);
    uVar7 = 0xffffffff821b4008;
    uVar5 = uVar7;
    if (param_1[4] != 0) {
      uVar5 = 0xffffffff821b4004;
    }
    fn_82536070(0xffffffff821b4010,uVar5);
    if (param_1[5] != 0) {
      uVar7 = 0xffffffff821b4030;
    }
    fn_82536070(0xffffffff821b4038,uVar7);
    auStack_30[0] = param_1[2];
    auStack_30[0] =
         fn_82535298(auStack_30,*(unsigned int *)(*param_1 + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(auStack_30);
  }
  return;
}

