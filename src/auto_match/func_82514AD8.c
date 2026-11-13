#define true 1
extern int fn_82248B90();
extern int fn_823AA2A8();
extern int fn_823AB158();
extern int fn_823AB478();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828A9288();
extern int fn_828A9948();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82AB8588();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;


void fn_82514AD8(__int64 param_1,char param_2)

{
  unsigned int *puVar1;
  unsigned char bVar2;
  int iVar5;
  unsigned __int64 uVar3;
  char cVar7;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int aiStack_5c [23];
  
  uVar10 = 0;
  do {
    iVar5 = fn_828A9948(param_1,uVar10);
    uVar11 = 0;
    iVar6 = 0;
    uVar3 = fn_828EB518(uVar10);
    if ((uVar3 & 0xffffffff) == 0) {
LAB_82514c30:
      uVar4 = fn_828A12E8(param_1);
      iVar6 = fn_8288F9A0(uVar4,1);
      aiStack_5c[0] = **(int **)(iVar6 + 4);
      while( true ) {
        iVar6 = aiStack_5c[0];
        uVar4 = fn_828A12E8((int)param_1);
        iVar5 = fn_8288F9A0(uVar4,1);
        if (iVar6 == *(int *)(iVar5 + 4)) break;
        puVar1 = *(unsigned int **)(iVar6 + 0x14);
        fn_823AB158(puVar1);
        uVar11 = fn_823AB478();
        if ((uVar11 & 0xffffffff) == (uVar10 & 0xffffffff)) {
          if (puVar1 != (unsigned int *)0x0) {
            (**(int (***)())*puVar1)(puVar1,1);
          }
          break;
        }
        fn_82248B90(aiStack_5c);
      }
    }
    else {
      uVar8 = 0;
      puVar9 = &lbl_83265988;
      if (lbl_832659AC != 0) {
        do {
          if ((unsigned __int64)*puVar9 == (uVar3 & 0xffffffff)) {
            bVar2 = 1;
            goto LAB_82514b58;
          }
          uVar8 = uVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 < lbl_832659AC);
      }
      bVar2 = 0;
LAB_82514b58:
      uVar3 = -(unsigned __int64)bVar2 & uVar3;
      if ((uVar3 & 0xffffffff) == 0) goto LAB_82514c30;
      cVar7 = fn_828EA610(uVar3);
      if (cVar7 != '\0') {
        fn_82AB8588(uVar3);
        uVar11 = fn_828EB518();
        uVar4 = fn_82AB8588(uVar3);
        iVar6 = fn_828A9948(param_1,uVar4);
        if (((uVar11 & 0xffffffff) == 0) || (iVar6 == 0)) goto LAB_82514c30;
      }
      if (((cVar7 != '\0') && (iVar6 == 0)) && (param_2 != '\0')) {
        iVar6 = fn_823AA2A8(param_1 + 0x60);
        fn_828A9288(param_1,uVar11,iVar6 == 0);
      }
      if ((iVar5 == 0) && (param_2 != '\0')) {
        iVar6 = fn_823AA2A8(param_1 + 0x60);
        fn_828A9288(param_1,uVar3,iVar6 == 0);
      }
    }
    uVar10 = uVar10 + 1;
    if (3 < (uVar10 & 0xffffffff)) {
      return;
    }
  } while( true );
}

