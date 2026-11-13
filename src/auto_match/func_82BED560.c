extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BECE78();
extern int fn_82BF6D38();
extern int fn_82BF6FC0();
extern int fn_82BF7098();
extern int fn_82BF7630();
extern int fn_82BF7C38();
extern unsigned int iStack_50;
extern unsigned int lbl_83175468;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82BED560(int param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iStack_50;
  int aiStack_4c [19];
  
  if (*(int *)(param_1 + 0x50) != 2) {
    uVar8 = 0;
    uVar3 = thunk_FUN_82be5550(0x1c);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      uVar7 = *(unsigned int *)(param_1 + 0x44);
      if (uVar7 < 0x201) {
        uVar7 = 0x200;
      }
      iVar4 = fn_82BF6D38(uVar3,uVar7,1);
    }
    if (iVar4 != 0) {
      aiStack_4c[1] = 0;
      iVar5 = fn_82BF6FC0(iVar4,*(unsigned int *)(iVar4 + 0xc),aiStack_4c + 1,4);
      if (iVar5 != 0) {
        lVar2 = -(unsigned __int64)(*(int *)(param_1 + 0x1c) != 0);
        aiStack_4c[0] = (int)lVar2;
        if (lVar2 != 0) {
          do {
            aiStack_4c[2] = 0;
            iStack_50 = 0;
            fn_82BF7630(param_1 + 0xc,aiStack_4c,aiStack_4c + 2,&iStack_50);
            iVar5 = iStack_50;
            if (iStack_50 == 0) goto LAB_82bed6d8;
            aiStack_4c[3] = 0;
            iVar1 = *(int *)(iVar4 + 0xc);
            iVar6 = fn_82BF6FC0(iVar4,iVar1,aiStack_4c + 3,4);
            if ((iVar6 == 0) || (iVar5 = fn_82BECE78(iVar5,iVar4), iVar5 == 0)) goto LAB_82bed6d8;
            aiStack_4c[4] = (*(int *)(iVar4 + 0xc) - iVar1) + -4;
            fn_82BF7098(iVar4,iVar1,aiStack_4c + 4,4);
          } while (aiStack_4c[0] != 0);
        }
        uVar3 = thunk_FUN_82be5550(0x18);
        if ((uVar3 & 0xffffffff) != 0) {
          uVar8 = fn_82BF7C38(uVar3,0,*(unsigned int *)(param_1 + 8),lbl_83175468,
                                    iVar4);
        }
        if (((uVar8 & 0xffffffff) != 0) && (iVar5 = fn_82BECB18(param_1,uVar8), iVar5 != 0)) {
          *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(iVar4 + 0xc);
          fn_82BE8D50(iVar4);
          fn_82BE8D50(uVar8);
          return 1;
        }
      }
LAB_82bed6d8:
      fn_82BE8D50(iVar4);
      if ((uVar8 & 0xffffffff) != 0) {
        fn_82BE8D50(uVar8);
      }
    }
  }
  return 0;
}

