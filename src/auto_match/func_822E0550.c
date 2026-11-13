typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int fStack_90;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_822CEE40();
extern int fn_822CF260();
extern int fn_822DF348();
extern int fn_822E0BE8();
extern int fn_82365BD8();
extern int fn_823727D8();
extern int fn_823754D8();
extern int fn_82560100();
extern int iRam831cd624;
extern int iRam831cd628;
extern unsigned int iStack_8c;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int fn_822E0550(int param_1,int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  int iVar8;
  int *piVar9;
  unsigned __int64 uVar5;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  double dVar12;
  double dVar13;
  float fStack_90;
  int iStack_8c;
  float afStack_88 [2];
  unsigned int auStack_80 [2];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [112];
  
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  iVar6 = fn_822CEE40(uVar10);
  iVar8 = *(int *)((int)uVar10 + 0x274);
  auStack_80[0] = 0;
  iStack_8c = 0;
  dVar12 = (double)ltcg_pool_0_0f;
  bVar3 = false;
  fStack_90 = ltcg_pool_0_0f;
  afStack_88[0] = ltcg_pool_0_0f;
  iVar7 = fn_822CF260(uVar10,0);
  dVar13 = (double)lbl_8218EC10;
  if (iVar7 == 0) {
    uVar4 = fn_82365BD8(auStack_78,param_2);
    iVar8 = fn_822E0BE8(param_1,uVar4,8,&fStack_90,afStack_88,&iStack_8c,0,auStack_80);
    if (iVar8 == 0) goto LAB_822e0858;
    uVar11 = 0xc;
LAB_822e06dc:
    if (((iRam831cd624 == 0) || (dVar13 <= (double)fStack_90)) || (iStack_8c != 0)) {
      *(float *)(*(int *)(param_1 + 0x14) + 0x278) = (float)dVar12;
      if ((iRam831cd628 == 0) || (!bVar3)) {
        uVar4 = fn_82230110(auStack_70,0xffffffff82196582);
        uVar5 = fn_82365BD8(auStack_78,param_2);
        fn_822DF348((double)afStack_88[0],(double)fStack_90,param_1,uVar5,uVar4,uVar11);
      }
      else {
        piVar9 = (int *)fn_82365BD8(auStack_78,param_2);
        fn_8228E658(param_1 + 0xb4,piVar9);
        *(unsigned int *)(param_1 + 0xa0) = uVar11;
        *(unsigned int *)(param_1 + 0xa4) = 0;
        *(unsigned int *)(param_1 + 0xac) = 0;
        *(unsigned int *)(*piVar9 + 0xac) = 0;
        piVar2 = (int *)*piVar9;
        if (piVar2[0x833] != 0) {
          fn_82560100((double)lbl_821CA460,*(unsigned int *)(*piVar2 + 0x4c),piVar2 + 0x833,
                            *piVar2 + 0x50,0xffffffff821ca45c,0,0,0,0);
        }
        if (uVar11 == 0xb) {
          fn_823727D8(*(unsigned int *)(param_1 + 0x10),
                          *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x2c));
        }
        if (piVar9[1] != 0) {
          fn_822315A0();
        }
      }
      goto LAB_822e0858;
    }
  }
  else {
    if (iVar8 != 0) {
      uVar4 = fn_82365BD8(auStack_78,param_2);
      iVar8 = fn_822E0BE8(param_1,uVar4,7,&fStack_90,afStack_88,&iStack_8c,0,auStack_80);
      if (iVar8 == 0) goto LAB_822e0858;
      if (((iVar6 == 0) || (*(int *)(iVar6 + 0x254) != 7)) && (*(int *)(*param_2 + 0x2148) != 0x12))
      {
        uVar11 = 10;
      }
      else {
        uVar11 = 0xb;
      }
      bVar3 = true;
LAB_822e06d4:
      if (0x17 < uVar11) goto LAB_822e0858;
      goto LAB_822e06dc;
    }
    uVar4 = fn_82365BD8(auStack_78,param_2);
    iVar8 = fn_822E0BE8(param_1,uVar4,6,&fStack_90,afStack_88,&iStack_8c,0,auStack_80);
    if ((iVar8 == 0) || (iVar8 = fn_822CF260(*(unsigned int *)(param_1 + 0x14),1), iVar8 == 0))
    goto LAB_822e0858;
    if ((iRam831cd624 == 0) || (dVar13 <= (double)fStack_90)) {
      uVar11 = 9;
      bVar3 = false;
      goto LAB_822e06d4;
    }
  }
  iVar8 = fn_82365BD8(auStack_78,param_2);
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  uVar4 = fn_82365BD8(afStack_88,iVar8);
  fn_823754D8(uVar1,uVar4,1);
  if (*(int *)(iVar8 + 4) != 0) {
    fn_822315A0();
  }
  *(unsigned int *)(param_1 + 0xbc) = 1;
LAB_822e0858:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return auStack_80[0];
}

