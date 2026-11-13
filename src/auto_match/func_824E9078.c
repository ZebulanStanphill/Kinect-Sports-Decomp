extern int fn_824EFEE0();
extern int fn_824F0500();
extern int fn_824F0B20();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;


void fn_824E9078(unsigned __int64 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int in_r7;
  unsigned char in_r8;
  int in_r9;
  unsigned int in_r10;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  double dVar6;
  
  dVar6 = (double)fn_82F6A548();
  iVar1 = lbl_8320A898;
  if (lbl_8329618C == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0xd54);
    if (iVar3 != 0) {
      iVar5 = iVar3 + 0x40;
      if (in_r9 == 0) {
        *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
        *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
        fn_82631920(lbl_8320A898,*(unsigned int *)(iVar3 + 0x44));
                    /* WARNING: Subroutine does not return */
        fn_82631578(lbl_8320A898,*(unsigned int *)(iVar3 + 0x60));
      }
      if (in_r9 == 2) {
        if (*(int *)(iVar3 + 0x1344) != 0) {
          fn_824EFEE0(iVar5);
        }
        iVar1 = *(int *)(iVar3 + 0x1340);
        puVar4 = (unsigned int *)(iVar1 * 0x60 + iVar5 + 0x40);
        if (iVar1 == 0x32) {
LAB_824e91a0:
          uVar2 = 0;
          goto LAB_824e94e0;
        }
        *(int *)(iVar3 + 0x1340) = iVar1 + 1;
      }
      else if (in_r9 == 3) {
        if (*(int *)(iVar3 + 0x1714) != 0) {
          fn_824F0500(iVar5);
        }
        iVar1 = *(int *)(iVar3 + 0x1710);
        puVar4 = (unsigned int *)(iVar1 * 0x60 + iVar5 + 0x1310);
        if (iVar1 == 10) goto LAB_824e91a0;
        *(int *)(iVar3 + 0x1710) = iVar1 + 1;
      }
      else {
        if (in_r9 != 4) goto LAB_824e94dc;
        if (*(int *)(iVar3 + 0x1ae4) != 0) {
          fn_824F0B20(iVar5);
        }
        iVar1 = *(int *)(iVar3 + 0x1ae0);
        puVar4 = (unsigned int *)((iVar1 + 0x3d) * 0x60 + iVar5);
        if (iVar1 == 10) goto LAB_824e91a0;
        *(int *)(iVar3 + 0x1ae0) = iVar1 + 1;
      }
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = 6;
        puVar4[1] = (float)dVar6;
        puVar4[2] = (float)param_2;
        puVar4[3] = (float)param_3;
        puVar4[4] = (float)param_4;
        *(unsigned char *)(puVar4 + 10) = in_r8;
        puVar4[0x15] = in_r10;
        puVar4[0x16] = in_r7;
      }
    }
  }
LAB_824e94dc:
  uVar2 = 1;
LAB_824e94e0:
  fn_82F6A594(uVar2);
  return;
}

