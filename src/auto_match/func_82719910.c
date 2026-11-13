#define true 1
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826DF4E8();
extern int fn_826E7408();
extern int fn_826E7B08();
extern int fn_82715378();
extern int fn_827155B8();
extern int fn_82715898();
extern int fn_82715918();
extern int fn_82716570();
extern int fn_827166A0();
extern int fn_827197F8();
extern unsigned int uStack_40;
extern unsigned int uStack_90;


void fn_82719910(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  char cVar10;
  __int64 lVar6;
  int *piVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  int aiStack_d0 [16];
  unsigned short uStack_90;
  int aiStack_80 [16];
  unsigned short uStack_40;
  
  if (param_3 == 7) {
    fn_827155B8(aiStack_d0);
    cVar10 = fn_82715918(aiStack_d0,param_2,7);
    if (cVar10 != '\0') {
      do {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar9 = 0;
          do {
            if (uStack_90 < *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x18) + 0x40)) break;
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + 0x4c;
          } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c));
        }
        fn_827166A0((int *)(param_1 + 0x18),uVar11,aiStack_d0);
        if (aiStack_d0[0] != 0) {
          fn_8267C498();
        }
        fn_827155B8(aiStack_d0);
        cVar10 = fn_82715918(aiStack_d0,param_2,7);
      } while (cVar10 != '\0');
    }
    if (aiStack_d0[0] != 0) {
      fn_8267C498();
    }
    fn_827197F8((unsigned int *)(param_1 + 0x24),(unsigned __int64)*(unsigned int *)(param_1 + 0x28) + 1);
    iVar9 = *(int *)(param_2 + 0x314);
    if (iVar9 == 0) {
      iVar9 = param_2 + 0x28;
    }
    lVar6 = fn_826E7408(iVar9);
    iVar9 = param_2 + 0x28;
    if (*(int *)(param_2 + 0x314) != 0) {
      iVar9 = *(int *)(param_2 + 0x314);
    }
    fn_82716570(((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xfffffff) * 0x10 +
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x24) + -0x10,iVar9,7,
                  (((unsigned __int64)*(unsigned int *)(iVar9 + 0x30) - (unsigned __int64)*(unsigned int *)(iVar9 + 0x34)) -
                  (unsigned __int64)*(unsigned int *)(iVar9 + 0x2c)) + lVar6);
  }
  else if (param_3 == 0x11) {
    piVar7 = *(int **)(*(int *)(param_2 + 0x10) + 0x34);
    if (piVar7 == (int *)0x0) {
      fn_82715378(param_2);
      fn_82715898(param_2 + 0x14,0xffffffff8200f9c8);
    }
    else {
      piVar7 = (int *)(**(int (***)())(*piVar7 + 8))();
      uVar8 = (**(int (***)())(*piVar7 + 4))(piVar7,param_2);
      *(unsigned int *)(param_1 + 0x10) = uVar8;
    }
  }
  else if (param_3 == 0x22) {
    cVar10 = fn_826DF4E8(param_2);
    *(char *)(param_1 + 0x14) = '\x01' - (cVar10 == '\0');
    uVar11 = fn_826A6A38(param_2);
    iVar9 = *(int *)(param_2 + 0x314);
    if (iVar9 == 0) {
      iVar9 = param_2 + 0x28;
    }
    uVar1 = *(unsigned int *)(iVar9 + 0x34);
    uVar2 = *(unsigned int *)(iVar9 + 0x30);
    uVar3 = *(unsigned int *)(iVar9 + 0x2c);
    fn_827155B8(aiStack_80);
    cVar10 = fn_82715918(aiStack_80,param_2,0x22);
    if (cVar10 != '\0') {
      do {
        uVar12 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar9 = 0;
          do {
            if (uStack_40 < *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x18) + 0x40)) break;
            uVar12 = uVar12 + 1;
            iVar9 = iVar9 + 0x4c;
          } while ((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c));
        }
        fn_827166A0((int *)(param_1 + 0x18),uVar12,aiStack_80);
        if (aiStack_80[0] != 0) {
          fn_8267C498();
        }
        fn_827155B8(aiStack_80);
        cVar10 = fn_82715918(aiStack_80,param_2,0x22);
      } while (cVar10 != '\0');
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
    if ((int)(uVar11 & 0xffff) != 0) {
      iVar9 = *(int *)(param_2 + 0x314);
      if (iVar9 == 0) {
        iVar9 = param_2 + 0x28;
      }
      fn_826E7B08(iVar9,((unsigned __int64)uVar1 - (unsigned __int64)uVar2) + (unsigned __int64)uVar3 +
                              (uVar11 & 0xffff) + -2);
      while( true ) {
        uVar11 = fn_826A6A38(param_2);
        iVar9 = *(int *)(param_2 + 0x314);
        uVar11 = uVar11 & 0xffff;
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        uVar1 = *(unsigned int *)(iVar9 + 0x34);
        uVar2 = *(unsigned int *)(iVar9 + 0x30);
        uVar3 = *(unsigned int *)(iVar9 + 0x2c);
        fn_827197F8((unsigned int *)(param_1 + 0x24),(unsigned __int64)*(unsigned int *)(param_1 + 0x28) + 1);
        if (uVar11 == 0) {
          iVar9 = *(int *)(param_2 + 0x314);
          if (iVar9 == 0) {
            iVar9 = param_2 + 0x28;
          }
          lVar6 = fn_826E7408(iVar9);
          iVar9 = *(int *)(param_2 + 0x314);
          if (iVar9 == 0) {
            iVar9 = param_2 + 0x28;
          }
          lVar6 = (((unsigned __int64)*(unsigned int *)(iVar9 + 0x30) - (unsigned __int64)*(unsigned int *)(iVar9 + 0x34)) -
                  (unsigned __int64)*(unsigned int *)(iVar9 + 0x2c)) + lVar6;
        }
        else {
          lVar6 = uVar11 - 2;
        }
        iVar9 = *(int *)(param_2 + 0x314);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        fn_82716570(((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xfffffff) * 0x10 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x24) + -0x10,iVar9,0x22,lVar6);
        if (uVar11 == 0) break;
        iVar9 = *(int *)(param_2 + 0x314);
        iVar13 = param_2 + 0x28;
        if (iVar9 != 0) {
          iVar13 = iVar9;
        }
        iVar4 = *(int *)(iVar13 + 0x34);
        iVar5 = *(int *)(iVar13 + 0x30);
        iVar13 = *(int *)(iVar13 + 0x2c);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        iVar9 = fn_826E7408(iVar9);
        if (iVar9 <= (iVar4 - iVar5) + iVar13) {
          return;
        }
        iVar9 = *(int *)(param_2 + 0x314);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        fn_826E7B08(iVar9,((unsigned __int64)uVar1 - (unsigned __int64)uVar2) + (unsigned __int64)uVar3 + uVar11 +
                                -2);
      }
    }
  }
  return;
}

