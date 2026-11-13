#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82681898();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A1F0();
extern int fn_826BD078();
extern unsigned int lbl_8200E890;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_8270FF08(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar8;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar9;
  __int64 lVar10;
  double dVar11;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int auStack_50 [2];
  unsigned __int64 auStack_48;
  
  cVar8 = fn_82695468(param_1,8);
  if (cVar8 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_82681898(lbl_8200E890,*(unsigned int *)(param_1 + 4));
    }
    else {
      puStack_5c = *(unsigned int **)(iVar4 + 0x30);
      puStack_5c[2] = puStack_5c[2] + 1;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      fn_82696D38(&puStack_60,uVar3,uVar1,0xffffffffffffffff,0);
      iVar4 = fn_82693A98(&puStack_60);
      if (iVar4 == 0) {
        auStack_48 = fn_82693A98(&puStack_5c);
        auStack_48 = auStack_48 & 0xffffffff;
        fn_82681898((double)auStack_48,*(unsigned int *)(param_1 + 4));
      }
      else {
        iVar4 = 0x7ffffff;
        uStack_58 = *puStack_5c;
        uStack_54 = *puStack_60;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar1 = *(unsigned int *)(param_1 + 0x18);
          uVar3 = fn_826957D0(param_1,1);
          dVar11 = (double)fn_826972E0(uVar3,uVar1);
          iVar4 = (int)dVar11;
          auStack_48 = (unsigned __int64)iVar4;
        }
        iVar5 = fn_826BD078(&uStack_54);
        lVar9 = -1;
        lVar10 = 0;
        while( true ) {
          iVar7 = fn_826BD078(&uStack_58);
          if (iVar7 == 0) break;
          if (((int)lVar10 <= iVar4) && (iVar7 == iVar5)) {
            auStack_50[0] = uStack_58;
            auStack_48 = CONCAT44(uStack_54,((unsigned int)(auStack_48)));
            do {
              iVar7 = fn_826BD078(auStack_50);
              iVar6 = fn_826BD078(&auStack_48);
              if (iVar7 == 0) break;
              if (iVar6 == 0) goto LAB_827100a8;
            } while (iVar7 == iVar6);
            if (iVar6 == 0) {
LAB_827100a8:
              lVar9 = lVar10;
            }
            if (iVar7 == 0) break;
          }
          lVar10 = lVar10 + 1;
        }
        fn_8269A1F0(*(unsigned int *)(param_1 + 4),lVar9);
      }
      uVar2 = puStack_60[2];
      puStack_60[2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(puStack_60);
      }
      uVar2 = puStack_5c[2];
      puStack_5c[2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(puStack_5c);
      }
    }
  }
  return;
}

