extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822DF348();
extern int fn_822E0BE8();
extern int fn_82365BD8();
extern int fn_823754D8();
extern int iRam831cd624;
extern unsigned int iStack_8c;
extern unsigned int lbl_8218EC10;
extern unsigned int uStack_90;


unsigned int fn_822E0200(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  double dVar6;
  unsigned int uStack_90;
  int iStack_8c;
  float afStack_88 [2];
  float afStack_80 [2];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [112];
  
  uStack_90 = 0;
  uVar3 = fn_82365BD8(auStack_78);
  iVar5 = fn_822E0BE8(param_1,uVar3,((int)param_3 != 0) + '\x03',afStack_88,afStack_80,
                            &iStack_8c,param_3,&uStack_90);
  uVar2 = uStack_90;
  if (iVar5 != 0) {
    dVar6 = (double)afStack_88[0];
    *(int *)(*(int *)(param_1 + 0x14) + 0x204) = iStack_8c;
    if (((iRam831cd624 == 0) || ((double)lbl_8218EC10 <= dVar6)) || (iStack_8c != 0)) {
      uVar3 = fn_82230110(auStack_70,0xffffffff82196582);
      uVar4 = fn_82365BD8(auStack_78,param_2);
      fn_822DF348((double)afStack_80[0],dVar6,param_1,uVar4,uVar3,(iStack_8c != 0) + '\x03');
    }
    else {
      iVar5 = fn_82365BD8(auStack_78,param_2);
      uVar1 = *(unsigned int *)(param_1 + 0x10);
      uVar3 = fn_82365BD8(afStack_80,iVar5);
      fn_823754D8(uVar1,uVar3,1);
      if (*(int *)(iVar5 + 4) != 0) {
        fn_822315A0();
      }
      *(unsigned int *)(param_1 + 0xbc) = 1;
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return uVar2;
}

