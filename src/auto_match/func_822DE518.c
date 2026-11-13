extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_822CEF30();
extern int fn_822CF260();
extern int fn_822D0570();
extern int fn_822DF348();
extern int fn_82365BD8();
extern int fn_824D2AE8();
extern int fn_824D6F28();
extern int fn_824D7000();
extern int fn_8288B760();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_821916F4;


void fn_822DE518(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar7;
  unsigned __int64 in_r7;
  unsigned __int64 in_r8;
  double dVar8;
  double dVar9;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  unsigned char auStack_60 [48];
  
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x168) == 0) {
    uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x16c);
  }
  else {
    uVar4 = fn_8288B760();
    uVar4 = uVar4 & 0xff;
  }
  if (uVar4 != 0) {
    if ((*(int *)(param_1 + 0xcc) == 0) &&
       (iVar5 = fn_822CF260(*(unsigned int *)(param_1 + 0x14),0), iVar5 != 0)) {
      iVar5 = *(int *)(param_1 + 0x14);
      iVar6 = fn_822CEF30((double)lbl_821916F4,iVar5);
      if ((iVar6 == 0) &&
         (iVar5 = fn_822C72E0(*(unsigned int *)(*(int *)(iVar5 + 0x114) + 0x20),
                                    0xffffffff821ad284), iVar5 != 0)) {
        *(unsigned int *)(param_1 + 0xcc) = 1;
      }
    }
    fn_822D0570(param_1,0,0,0);
    if (*(int *)(param_1 + 0xa0) < 0x18) {
      uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x24);
      if ((*(int *)(param_1 + 0xa4) == 0) &&
         (iVar5 = fn_824D6F28(uVar7,param_1 + 0xa8), iVar5 != 0)) {
        *(unsigned int *)(param_1 + 0xa4) = 1;
      }
      if ((*(int *)(param_1 + 0xac) == 0) &&
         (iVar5 = fn_824D7000(uVar7,param_1 + 0xb0), iVar5 != 0)) {
        *(unsigned int *)(param_1 + 0xac) = 1;
      }
      if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
        fn_824D2AE8(&iStack_70,param_1 + 0xb4);
        if (iStack_70 != 0) {
          dVar9 = (double)*(float *)(param_1 + 0xb0);
          dVar8 = (double)*(float *)(param_1 + 0xa8);
          uVar1 = *(unsigned int *)(param_1 + 0xa0);
          uVar2 = fn_82230110(auStack_60,0xffffffff82196582);
          uVar3 = fn_82365BD8(&iStack_68,&iStack_70);
          fn_822DF348(dVar8,dVar9,param_1,uVar3,uVar2,uVar1,in_r7,in_r8,1,0);
        }
        *(unsigned int *)(param_1 + 0xa0) = 0x18;
        fn_824D2AE8(&iStack_68,param_1 + 0xb4);
        if (iStack_68 != 0) {
          *(unsigned int *)(iStack_68 + 0xac) = 1;
        }
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        if (iStack_6c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  return;
}

