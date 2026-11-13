extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_822315A0();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8261BF58();
extern int fn_8261C010();
extern int fn_8261C080();
extern int fn_8261C118();
extern int fn_8261C1B8();
extern int fn_8261C270();
extern int fn_8261C2F8();
extern int fn_8261C390();
extern int fn_8261C400();
extern int fn_8265BD18();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D9698();
extern int fn_827DEA50();
extern int fn_82A29AC0();
extern int fn_82A29D80();
extern int fn_82F64020();
extern int iRam83281150;
extern unsigned int lbl_821CA460;


unsigned int fn_825FCF20(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  double dVar7;
  unsigned int auStack_150 [4];
  unsigned char auStack_140 [320];
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_825fd264;
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  if (uVar1 == 0) {
    if (iRam83281150 != 0) goto LAB_825fd240;
    uVar5 = 1;
    iRam83281150 = 1;
LAB_825fd260:
    *(unsigned int *)(param_1 + 0x28) = uVar5;
  }
  else {
    if (uVar1 == 1) {
      fn_8261BF58(param_1 + 0x30,*(unsigned int *)(iVar3 + 0x19c),iVar3 + 0x170,iVar3 + 0x68);
      fn_8261C118(*(unsigned int *)(param_1 + 0x30),3);
      uVar5 = 2;
      goto LAB_825fd260;
    }
    if (uVar1 < 3) {
      fn_8261C010(*(unsigned int *)(param_1 + 0x30));
      if (*(int *)(*(int *)(param_1 + 0x30) + 0x238) == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 600);
        if (iVar4 == 0) {
          iVar4 = fn_827D9698(iVar3 + 0x1a0);
          if (iVar4 == 0x43) {
            *(unsigned int *)(param_1 + 0x24) = 0;
            goto LAB_825fd054;
          }
          puVar6 = (unsigned int *)(iVar3 + 0x34);
          if (0xf < *(unsigned int *)(iVar3 + 0x48)) {
            puVar6 = (unsigned int *)*puVar6;
          }
          fn_82F64020(auStack_140,0x104,0xffffffff821c4da8,puVar6);
          fn_8261C1B8(param_1 + 0x34,*(unsigned int *)(param_1 + 0x30),auStack_140);
          fn_8261C400(*(unsigned int *)(param_1 + 0x34),0xffffffff90000000,1,3);
          uVar5 = 3;
        }
        else {
          *(int *)(param_1 + 0x24) = iVar4;
LAB_825fd010:
          fn_82522ED8();
          uVar5 = 7;
          *(unsigned int *)(param_1 + 0x2c) = 0;
        }
        goto LAB_825fd260;
      }
LAB_825fd240:
      iVar3 = param_3[1];
      goto LAB_825fd244;
    }
    if (uVar1 == 3) {
      fn_8261C270(*(unsigned int *)(param_1 + 0x34));
      iVar3 = *(int *)(param_1 + 0x34);
      if (*(int *)(iVar3 + 0x308) == 0) {
        iVar4 = *(int *)(iVar3 + 800);
        if (iVar4 == 0) {
          iVar3 = fn_82A29D80(*(unsigned int *)(iVar3 + 0x304),0);
          *(int *)(param_1 + 0x38) = iVar3;
          if ((iVar3 != 0) && (*(int *)(*(int *)(param_1 + 0x34) + 800) == 0)) {
                    /* WARNING: Subroutine does not return */
            fn_82522D98();
          }
          iVar3 = *(int *)(param_1 + 0x34);
          iVar4 = *(int *)(iVar3 + 800);
        }
        *(int *)(param_1 + 0x24) = iVar4;
LAB_825fd050:
        fn_82522ED8(iVar3);
LAB_825fd054:
        fn_8261C080(*(unsigned int *)(param_1 + 0x30));
        uVar5 = 6;
        goto LAB_825fd260;
      }
      goto LAB_825fd240;
    }
    if (4 < uVar1) {
      if (uVar1 == 5) {
        fn_8261C270(*(unsigned int *)(param_1 + 0x34));
        iVar3 = *(int *)(param_1 + 0x34);
        if (*(int *)(iVar3 + 0x308) != 0) goto LAB_825fd240;
        if (*(int *)(iVar3 + 800) == 0) {
          lVar2 = fn_82A29AC0(*(unsigned int *)(iVar3 + 0x304),iVar3 + 0x30c,auStack_150,1);
          *(unsigned int *)(param_1 + 0x24) = 0;
          *(unsigned int *)(param_1 + 0x20) = -(unsigned int)(lVar2 != 0) & auStack_150[0];
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(iVar3 + 800);
        }
        fn_8261C390(*(unsigned int *)(param_1 + 0x34));
        fn_82522ED8(*(unsigned int *)(param_1 + 0x34));
        fn_8261C080(*(unsigned int *)(param_1 + 0x30));
        *(unsigned int *)(param_1 + 0x28) = 6;
      }
      else if (6 < uVar1) goto LAB_825fd264;
      fn_8261C010(*(unsigned int *)(param_1 + 0x30));
      if (*(int *)(*(int *)(param_1 + 0x30) + 0x238) == 0) goto LAB_825fd010;
      goto LAB_825fd240;
    }
    fn_8261C270(*(unsigned int *)(param_1 + 0x34));
    if (*(int *)(*(int *)(param_1 + 0x34) + 0x308) != 0) goto LAB_825fd240;
    iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 800);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x24) = iVar4;
      fn_8261C390();
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_825fd050;
    }
    if (*(float *)(param_1 + 0x18) == lbl_821CA460) {
      fn_827D9698(iVar3 + 0x1a0);
      dVar7 = (double)fn_8265BD18();
      if ((double)*(float *)(param_1 + 0x1c) == dVar7) {
        fn_8261C2F8(*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x14),
                          *(unsigned int *)(param_1 + 0x38),8);
        uVar5 = 5;
        goto LAB_825fd260;
      }
    }
    fn_8261C390(*(unsigned int *)(param_1 + 0x34));
    fn_82522ED8(*(unsigned int *)(param_1 + 0x34));
    fn_8261C080(*(unsigned int *)(param_1 + 0x30));
    *(unsigned int *)(param_1 + 0x24) = 0xd;
    *(unsigned int *)(param_1 + 0x28) = 6;
  }
LAB_825fd264:
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x14) != 0)) {
      if (*(int *)(param_1 + 0x10) != 0) {
        fn_827DEA50();
      }
      fn_827D5090(*param_3,*(unsigned int *)(param_1 + 0x20));
      fn_827D50A8(*param_3,0);
      uVar5 = *(unsigned int *)(param_1 + 0x14);
    }
    else {
      uVar5 = 0;
    }
    fn_827D5078(*param_3,uVar5);
  }
  iVar3 = param_3[1];
  if (*(int *)(param_1 + 0x28) == 7) {
    uVar5 = *(unsigned int *)(param_1 + 0x24);
    iRam83281150 = 0;
    if (iVar3 == 0) {
      iRam83281150 = 0;
      return uVar5;
    }
    fn_822315A0();
    return uVar5;
  }
LAB_825fd244:
  if (iVar3 != 0) {
    fn_822315A0();
  }
  return 0x3e5;
}

