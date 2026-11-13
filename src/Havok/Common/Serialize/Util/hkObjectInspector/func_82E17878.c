extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5A8();
extern int fn_82CFD868();
extern int fn_82E17660();
extern int fn_82E176B8();
extern int fn_82E17730();
extern int fn_82E177D0();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82E17878(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 in_r0;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar6;
  unsigned int uVar7;
  __int64 lVar8;
  int *piVar9;
  unsigned char auStack_250 [16];
  unsigned char auStack_240 [496];
  
  lVar8 = 0;
  iVar4 = fn_82CEAE80(param_2);
  if (0 < iVar4) {
    do {
      iVar4 = fn_82CEAEA8(param_2,lVar8);
      uVar7 = *(unsigned char *)(iVar4 + 0xc) - 1;
      piVar9 = (int *)((unsigned int)*(unsigned short *)(iVar4 + 0x12) + param_1);
      if (0x20 < uVar7) {
        fn_82CEE578(auStack_250,auStack_240,0x200);
        fn_82CEDB38(auStack_250,0xffffffff8214b4d8);
        iVar4 = (**(int (***)())(*lbl_8323B464 + 0xc))
                          (lbl_8323B464,3,0x641e3e03,auStack_240,0xffffffff8214b4b8,0x100);
        if (iVar4 != 0) {
          trapWord(0x1f,in_r0,0x16);
        }
                    /* WARNING: Subroutine does not return */
        fn_82CED958(auStack_250);
      }
      in_r0 = (unsigned __int64)*(unsigned int *)(uVar7 * 4 + -0x7d1e871c);
      switch(*(unsigned char *)(iVar4 + 0xc)) {
      case 0x14:
        if (*(char *)(iVar4 + 0xd) == '\x19') {
          uVar1 = fn_82CFD5A8(iVar4);
          uVar2 = fn_82E17660(iVar4);
          fn_82E17730(piVar9,uVar2,uVar1,param_3);
        }
        break;
      case 0x16:
      case 0x17:
      case 0x1a:
        iVar5 = fn_82CFD868(iVar4);
        piVar6 = (int *)*piVar9;
        if (piVar6 != (int *)0x0) {
          if (iVar5 == 0x14) {
            uVar1 = fn_82CFD5A8(iVar4);
            fn_82E17730(*piVar9,piVar9[1],uVar1,param_3);
          }
          else {
            if (iVar5 == 0x19) {
              uVar1 = fn_82CFD5A8(iVar4);
              iVar4 = fn_82E176B8(*piVar9,piVar9[1],uVar1,param_3);
              goto joined_r0x82e17a7c;
            }
            if (iVar5 == 0x1c) {
              uVar3 = (unsigned __int64)(unsigned int)piVar9[1];
              goto LAB_82e17a94;
            }
          }
        }
        break;
      case 0x19:
        uVar1 = fn_82CFD5A8(iVar4);
        uVar2 = fn_82E17660(iVar4);
        iVar4 = fn_82E176B8(piVar9,uVar2,uVar1,param_3);
joined_r0x82e17a7c:
        if (iVar4 == 1) {
          return 1;
        }
        break;
      case 0x1b:
        if ((piVar9[1] != 0) && (*piVar9 != 0)) {
          iVar4 = fn_82E176B8(piVar9[1],piVar9[2],*piVar9,param_3);
          goto joined_r0x82e17a7c;
        }
        break;
      case 0x1c:
        uVar3 = fn_82E17660(iVar4);
        piVar6 = piVar9;
LAB_82e17a94:
        fn_82E177D0(piVar6,uVar3,param_3);
      }
      lVar8 = lVar8 + 1;
      iVar4 = fn_82CEAE80(param_2);
    } while ((int)lVar8 < iVar4);
  }
  return 0;
}

