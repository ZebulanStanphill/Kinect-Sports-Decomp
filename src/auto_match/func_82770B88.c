typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_d0;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826E30D0();
extern int fn_827228C8();
extern int fn_82761DE8();
extern int fn_8276A0F0();
extern int fn_8276FF08();
extern int fn_827704D0();
extern int fn_82770948();
extern unsigned int lbl_820151BC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82770B88(int param_1,int param_2,unsigned int param_3)

{
  bool bVar1;
  int iVar5;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int auStack_d0 [2];
  unsigned __int64 uStack_c8;
  __int64 lStack_c0;
  unsigned int uStack_b8;
  int *piStack_b4;
  unsigned int uStack_b0;
  struct { float first; float second; } stack_pair_a0;

  float fStack_98;
  float fStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  iVar5 = (**(int (***)())(**(int **)(param_3 + 0xc) + 0x38))();
  if (iVar5 != 0) {
    lVar2 = fn_8267B890(*(unsigned int *)(param_1 + 0x2c),0x2c,0);
    if (lVar2 == 0) {
      iVar5 = 0;
    }
    else {
      uVar3 = (**(int (***)())(**(int **)(param_3 + 0xc) + 0x38))();
      iVar5 = fn_826E30D0(lVar2,uVar3,0);
    }
    *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int *)(iVar5 + 0xc) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(iVar5 + 0x10) = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int *)(iVar5 + 0x14) = *(unsigned int *)(param_1 + 0x18);
    fn_827228C8(param_3,iVar5);
    uStack_c8 = (__int64)*(int *)(param_1 + 0xc);
    dVar12 = (double)((float)uStack_c8 * lbl_820151BC);
    uVar4 = (**(int (***)())(**(int **)(param_3 + 0xc) + 0x38))();
    uVar9 = 0;
    if (uVar4 != 0) {
      dVar13 = (double)lbl_821AAD20;
      do {
        iVar6 = fn_8276A0F0(iVar5,uVar9);
        if ((*(int *)(iVar6 + 8) != 0) || (bVar1 = true, *(int *)(iVar6 + 0xc) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          piVar7 = (int *)(**(int (***)())(**(int **)(param_3 + 0xc) + 0x18))
                                    (*(int **)(param_3 + 0xc),uVar9,0);
          if (piVar7 != (int *)0x0) {
            stack_pair_a0.first = (float)dVar13;
            fStack_94 = (float)dVar13;
            stack_pair_a0.second = (float)dVar13;
            fStack_98 = (float)dVar13;
            (**(int (***)())(*piVar7 + 0x14))(piVar7,&stack_pair_a0.first);
            if (dVar13 < (double)(float)((double)fStack_98 - (double)stack_pair_a0.first)) {
              if (dVar13 < (double)(float)((double)fStack_94 - (double)stack_pair_a0.second)) {
                lStack_c0 = (__int64)*(int *)(param_1 + 0x10);
                fStack_70 = (float)dVar13;
                fStack_6c = (float)dVar13;
                dVar11 = (double)lStack_c0;
                fStack_80 = (float)((double)stack_pair_a0.first * dVar12 - dVar11);
                fStack_78 = (float)((double)fStack_98 * dVar12 + dVar11);
                fStack_7c = (float)((double)stack_pair_a0.second * dVar12 - dVar11);
                fStack_74 = (float)((double)fStack_94 * dVar12 + dVar11);
                if ((dVar13 < (double)(fStack_78 - fStack_80)) &&
                   (dVar13 < (double)(fStack_74 - fStack_7c))) {
                  uStack_8c = (unsigned int)uVar9;
                  uStack_88 = 0xffffffff;
                  uStack_84 = 0xffffffff;
                  uStack_90 = param_3;
                  uStack_b0 = (**(int (***)())(*piVar7 + 0x1c))(piVar7);
                  iVar10 = param_1 + 0x148;
                  uStack_b8 = param_3;
                  piStack_b4 = piVar7;
                  iVar6 = fn_8276FF08(iVar10,&uStack_b8);
                  puVar8 = (unsigned int *)(-(unsigned int)(iVar6 != 0) & iVar6 + 0xcU);
                  if (puVar8 == (unsigned int *)0x0) {
                    auStack_d0[0] = *(unsigned int *)(param_2 + 4);
                    uStack_c8 = CONCAT44(&uStack_b8,auStack_d0);
                    fn_82770948(iVar10,iVar10,&uStack_c8,uStack_b8 >> 6 ^ uStack_b0 ^ uStack_b8);
                  }
                  else {
                    uStack_88 = *puVar8;
                  }
                  fn_827704D0(param_2,&uStack_90);
                }
              }
            }
            fn_82761DE8(piVar7);
          }
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
    fn_8267C498(iVar5);
  }
  return;
}

