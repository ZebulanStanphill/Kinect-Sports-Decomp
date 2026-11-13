extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822C4448();
extern int fn_82305EC8();
extern int fn_82306100();
extern int fn_823691B0();
extern int fn_823692A0();
extern int fn_823D9758();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_82305850(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned char uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar8;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 extraout_f1;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [160];
  
  iVar8 = fn_82F6DA24();
  iVar2 = *(int *)(*(int *)(iVar8 + 0x10) + 0x9a0);
  if (iVar2 != 0) {
    iVar9 = (*(int *)(*(int *)(iVar8 + 0xc) + 0x2c) * 7 + *(int *)(*(int *)(iVar8 + 0xc) + 0x28)) *
            0x30 + *(int *)(iVar8 + 0x10);
    uVar1 = *(unsigned char *)(iVar9 + 0x10b4);
    *(unsigned char *)(iVar9 + 0x10b4) = 0;
    uVar7 = extraout_f1;
    uVar4 = fn_823691B0(*(unsigned int *)(iVar8 + 0x10),*(unsigned int *)(iVar8 + 0xc),auStack_a0,
                              0);
    *(unsigned char *)(iVar9 + 0x10b4) = uVar1;
    uVar5 = fn_823691B0(*(unsigned int *)(iVar8 + 0x10),iVar2,auStack_b0,0);
    if (((uVar5 & uVar4) != 0) &&
       ((iVar9 = fn_823D9758(*(unsigned int *)(iVar8 + 0x10)), iVar9 == 0 ||
        (iVar9 = fn_823D9758(*(unsigned int *)(iVar8 + 0x10)), iVar9 == 0)))) {
      uVar3 = *(unsigned int *)(iVar8 + 0x10);
      uVar10 = fn_823692A0(uVar3,*(unsigned int *)(iVar2 + 0x28),*(unsigned int *)(iVar2 + 0x2c));
      if ((uVar10 != 0) && ((-(unsigned int)(*(int *)(*(int *)(uVar10 + 0x110) + 0x1c) == 3) & uVar10) != 0)
         ) {
        fn_822C4448(auStack_a0,iVar2,uVar3,1,1);
        uVar6 = fn_82305EC8(uVar7,*(unsigned int *)(iVar8 + 0x10),
                                  *(unsigned int *)(*(int *)(iVar8 + 0xc) + 0x2c));
        if ((int)uVar6 != 0) {
          uVar7 = 1;
          goto LAB_82305a1c;
        }
        if (param_3 != 0) {
          uVar7 = fn_82306100(uVar7,uVar6,param_4);
          goto LAB_82305a1c;
        }
      }
    }
  }
  uVar7 = 0;
LAB_82305a1c:
  fn_82F6DCBC(uVar7);
  return;
}

