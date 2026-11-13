extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_823AB470();
extern int fn_824C04E0();
extern int fn_82511928();
extern int fn_82512308();
extern int fn_82513728();
extern int fn_82522588();
extern int fn_82593A50();
extern int fn_8288A348();
extern int fn_8288A398();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AD0F8();
extern int fn_828AD188();
extern int fn_828AD270();
extern int fn_828EB518();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_83297810;
extern unsigned int uStack_5c;


void fn_824C34F0(int param_1)

{
  int iVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  char cVar5;
  int iVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  int iStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  
  iVar4 = lbl_83265988;
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x5c) == 0) {
    return;
  }
  piVar7 = (int *)(iVar1 + 0x48);
  if (*(int *)(iVar1 + 0x48) == 0) {
    iVar6 = 0;
    if ((lbl_83265988 == 0) ||
       (iVar3 = fn_823AB470(lbl_83265988), iVar6 = lbl_83265988, iVar3 != 2)) {
      if (*(int *)(param_1 + 8) != 0) {
        uVar2 = 1;
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(iVar1 + 0x44) = 0;
        goto LAB_824c3754;
      }
      if (((lbl_832659D4 == '\0') && (lbl_83265A58 != 1)) && (lbl_83265A5C == 0)) {
        if (iVar4 == 0) {
          uVar8 = 0;
          do {
            iVar4 = iVar6;
            if ((uVar8 & 0xffffffff) != 0xff) {
              iVar4 = fn_828EB518(uVar8);
              iVar6 = lbl_83265988;
            }
            if (iVar4 != 0) {
              fn_82593A50();
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < 4);
        }
        else {
          fn_82512308();
          *(unsigned int *)(param_1 + 8) = 1;
        }
      }
    }
    else {
      iVar4 = lbl_83297810;
      if (lbl_83297810 == 0) {
        iVar4 = fn_82511928();
      }
      if (*(int *)(iVar4 + 0x28) == 0) {
        iVar4 = lbl_83297810;
        if (lbl_83297810 == 0) {
          iVar4 = fn_82511928();
        }
        uVar2 = fn_82513728(auStack_58,iVar4,*(unsigned int *)(iVar1 + 0x50));
        fn_82522588(&iStack_60,uVar2);
        iVar4 = *(int *)(iVar1 + 0x4c);
        *(unsigned int *)(iVar1 + 0x4c) = uStack_5c;
        *piVar7 = iStack_60;
        if (iVar4 != 0) {
          fn_822315A0();
        }
        if (iStack_54 != 0) {
          fn_822315A0();
        }
      }
    }
  }
  if (*piVar7 == 0) {
    return;
  }
  iVar4 = *(int *)(*piVar7 + 8);
  if (*(int *)(iVar4 + 0xa0) == 0) {
    fn_8288A398();
    cVar5 = fn_8288A348();
    if (cVar5 != '\0') {
      fn_828AD188(iVar4);
    }
  }
  cVar5 = fn_828AD0F8(iVar4);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = fn_828ACC40(iVar4);
  if ((cVar5 != '\0') && (*(int *)(iVar4 + 0xb4) == 1)) {
    fn_828AD270(iVar4,*(unsigned int *)(iVar1 + 0x54),1,0,0,*(unsigned char *)(*piVar7 + 0x10),
                      *(unsigned char *)(*piVar7 + 0x11),0);
  }
  cVar5 = fn_828ACCE8(iVar4);
  if (cVar5 == '\0') {
    return;
  }
  uVar2 = 3;
LAB_824c3754:
  fn_824C04E0(iVar1,uVar2);
  return;
}

