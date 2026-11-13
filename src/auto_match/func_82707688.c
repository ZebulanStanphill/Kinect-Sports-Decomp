typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826F5070();
extern int fn_826F71B0();
extern int fn_826F7318();
extern int fn_826F7480();
extern int fn_826FC7A0();
extern int fn_82704EB0();
extern int fn_82706B78();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82707688(int param_1)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  char cVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  char in_RESERVE;
  unsigned char bVar12;
  unsigned int auStack_30 [12];
  
  iVar2 = *(int *)(param_1 + 0xb20);
  while (iVar2 != 0) {
    puVar3 = *(unsigned int **)(param_1 + 0xb20);
    *(unsigned int *)(param_1 + 0xb20) = *puVar3;
    uVar6 = fn_8267B890(lbl_831E7E64,0x54,0);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x100) + 8;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x100) == 0) {
        lVar8 = 0;
      }
      uVar6 = fn_826F5070(uVar6,*(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x14),lVar8,0);
    }
    fn_8268B330(auStack_30);
    fn_826F7480(param_1,auStack_30);
    uVar4 = puVar3[1];
    bVar1 = (uVar4 & 4) == 0;
    bVar12 = bVar1 << 1;
    if (bVar1) {
      bVar1 = (uVar4 & 8) == 0;
      bVar12 = bVar1 << 1;
      if (bVar1) {
        bVar1 = (uVar4 & 0x10) == 0;
        bVar12 = bVar1 << 1;
        if (bVar1) {
          fn_82706B78(param_1,puVar3,uVar6,auStack_30);
        }
        else {
          fn_826F7318();
        }
      }
      else {
        fn_826F71B0();
      }
    }
    else {
      fn_82704EB0();
    }
    fn_826FC7A0(puVar3);
    fn_8267BE38(puVar3);
    lVar8 = ((unsigned __int64)auStack_30[0] & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar8;
      uVar10 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar10 - 1,0,lVar8);
        *puVar9 = uVar4;
        bVar12 = 2;
      }
    } while (!(bool)(bVar12 >> 1 & 1));
    if (uVar10 == 1) {
      fn_8267BE38();
    }
    if ((uVar6 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar6);
    }
    iVar2 = *(int *)(param_1 + 0xb20);
  }
  piVar11 = *(int **)(param_1 + 0xb28);
  while( true ) {
    if (piVar11 == (int *)0x0) {
      piVar11 = *(int **)(param_1 + 0xb28);
      while (piVar11 != (int *)0x0) {
        cVar7 = (**(int (***)())(*piVar11 + 4))(piVar11);
        if (cVar7 == '\0') {
          piVar11 = (int *)piVar11[1];
        }
        else {
          piVar5 = (int *)piVar11[1];
          if (piVar5 != (int *)0x0) {
            piVar5[2] = piVar11[2];
          }
          if (piVar11[2] != 0) {
            *(int **)(piVar11[2] + 4) = piVar5;
          }
          if (*(int **)(param_1 + 0xb28) == piVar11) {
            *(int **)(param_1 + 0xb28) = piVar5;
          }
          (**(int (***)())*piVar11)(piVar11,1);
          piVar11 = piVar5;
        }
      }
      return;
    }
    cVar7 = (**(int (***)())(*piVar11 + 8))(piVar11);
    if (cVar7 == '\0') break;
    piVar11 = (int *)piVar11[1];
  }
  return;
}

