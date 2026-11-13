typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230040();
extern int fn_8260C2F0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CAA78;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_6c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int *
fn_825B7B58(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6)

{
  bool bVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  char in_RESERVE;
  unsigned char **ppuStack_70;
  unsigned int uStack_6c;
  
  uVar6 = lbl_8326B7C8;
  uVar5 = lbl_83265A24;
  lVar7 = fn_8265C9E0(0x1cc);
  if (lVar7 != 0) {
    uVar10 = lVar7 + 0xc;
    puVar4 = (unsigned int *)lVar7;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821CAA78;
    if (uVar10 != 0) {
      fn_8260C2F0(uVar10,param_2,param_3,*param_4,*param_5,*param_6,uVar5,uVar6);
    }
    param_1[1] = puVar4;
    bVar1 = (uVar10 & 0xffffffff) == 0;
    *param_1 = (int)uVar10;
    if (!bVar1) {
      do {
        puVar9 = (unsigned int *)(lVar7 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar7 + 8);
          *puVar9 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      piVar2 = (int *)puVar4[5];
      if (ZEXT48(piVar2) != 0) {
        lVar7 = ZEXT48(piVar2) + 8;
        do {
          puVar9 = (unsigned int *)lVar7;
          lVar8 = (unsigned __int64)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar8,0,lVar7);
            *puVar9 = uVar3;
            bVar1 = true;
          }
        } while (!bVar1);
        if ((int)lVar8 == 0) {
          (**(int (***)())(*piVar2 + 4))();
        }
      }
      puVar4[5] = puVar4;
      puVar4[4] = (int)uVar10;
    }
    return param_1;
  }
  uStack_6c = 0;
  ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_70);
}

