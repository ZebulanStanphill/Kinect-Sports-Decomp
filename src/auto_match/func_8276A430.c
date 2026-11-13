#define true 1
extern int fn_8267BE38();
extern int fn_82684A58();
extern int fn_826C8C70();
extern int fn_826E7A08();
extern int fn_827663E0();
extern int fn_82766DF8();
extern int fn_827694B8();
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_82014E48;
extern unsigned int lbl_82014E4C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8276A430(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int (**pcVar2)();
  unsigned char *puVar3;
  float fVar4;
  int iVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar7;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uStack_60;
  unsigned int uStack_58;
  
  iVar10 = param_2 + 0x28;
  if (*(int *)(param_2 + 0x314) != 0) {
    iVar10 = *(int *)(param_2 + 0x314);
  }
  fn_826C8C70(iVar10,0xffffffff82014ed8);
  uStack_60 = 0;
  uStack_58 = 0;
  lVar11 = (unsigned __int64)*(unsigned int *)(param_3 + 8) - 2;
  fn_827663E0(&uStack_60,0x1000,0);
  fn_82766DF8(param_1 + 7,lVar11,0);
  iVar5 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
  lVar13 = 0;
  while( true ) {
    lVar12 = 0x1000;
    if ((int)(lVar11 - lVar13) < 0x1001) {
      lVar12 = lVar11 - lVar13;
    }
    lVar6 = fn_826E7A08(iVar10,iVar5,lVar12);
    lVar13 = lVar6 + lVar13;
    iVar8 = (int)lVar6;
    if ((0 < iVar8) && (iVar9 = 0, 0 < iVar8)) {
      do {
        iVar1 = param_1[8];
        param_1[8] = iVar1 + 1;
        puVar3 = (unsigned char *)(iVar5 + iVar9);
        iVar9 = iVar9 + 1;
        *(unsigned char *)(iVar1 + param_1[7]) = *puVar3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (iVar8 != (int)lVar12) break;
    if ((int)lVar11 <= (int)lVar13) {
LAB_8276a530:
      fn_827694B8(param_1 + 10,0);
      if (param_1[0x15] == 0) {
        uVar7 = (**(int (***)())(*param_1 + 0x3c))();
        fn_82684A58(iVar10,0xffffffff82014e50,uVar7);
        iVar8 = lbl_82014E4C;
        iVar10 = lbl_82014E48;
        param_1[4] = lbl_821AAD20;
        param_1[2] = iVar8;
        param_1[3] = iVar10;
      }
      else {
        uStack_60 = (unsigned __int64)(unsigned int)param_1[0x15];
        pcVar2 = *(int (***)())(*param_1 + 0x3c);
        fVar4 = lbl_82014C4C / (float)uStack_60;
        param_1[4] = (int)((float)param_1[0x18] * fVar4);
        param_1[2] = (int)((float)param_1[0x16] * fVar4);
        param_1[3] = (int)((float)param_1[0x17] * fVar4);
        uVar7 = (*pcVar2)(param_1);
        fn_826C8C70(iVar10,0xffffffff82014e38,uVar7);
        param_1[5] = param_1[0x14];
      }
      fn_8267BE38(iVar5);
      return;
    }
  }
  fn_82684A58(iVar10,0xffffffff82014e9c);
  goto LAB_8276a530;
}

