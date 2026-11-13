extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82E083F8();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;


void fn_82E084C8(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uStack_290;
  unsigned int uStack_28c;
  unsigned int uStack_288;
  unsigned char auStack_280 [16];
  unsigned char auStack_270 [624];
  
  fn_82E083F8();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar8 = 0;
    do {
      iVar9 = 0;
      iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0xc));
      uVar1 = *(unsigned int *)(iVar2 + 0x10);
      uVar4 = *(unsigned int *)(iVar2 + 0x1c) | uVar1;
      uVar3 = (-(unsigned __int64)uVar1 & ~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f;
      if (0 < (int)uVar4) {
        do {
          if (*(char *)(iVar2 + 8) == '\x01') {
            if (uVar3 == 0) {
              uStack_290 = *(unsigned int *)(iVar9 * 4 + *(int *)(iVar2 + 0x18));
              uStack_28c = *(unsigned int *)((iVar9 + 1) * 4 + *(int *)(iVar2 + 0x18));
              uStack_288 = *(unsigned int *)((iVar9 + 2) * 4 + *(int *)(iVar2 + 0x18));
            }
            else {
              uStack_290 = (unsigned int)*(unsigned short *)(iVar9 * 2 + *(int *)(iVar2 + 0xc));
              uStack_28c = (unsigned int)*(unsigned short *)((iVar9 + 1) * 2 + *(int *)(iVar2 + 0xc));
              uStack_288 = (unsigned int)*(unsigned short *)((iVar9 + 2) * 2 + *(int *)(iVar2 + 0xc));
            }
            iVar9 = iVar9 + 3;
LAB_82e086c4:
            iVar5 = fn_82CE5410();
            if (*(unsigned int *)(param_2 + 0x10) == (*(unsigned int *)(param_2 + 0x14) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),(int *)(param_2 + 0xc),0x10);
            }
            puVar6 = (unsigned int *)(*(int *)(param_2 + 0x10) * 0x10 + *(int *)(param_2 + 0xc));
            *puVar6 = uStack_290;
            puVar6[1] = uStack_28c;
            puVar6[2] = uStack_288;
            puVar6[3] = param_3;
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          }
          else {
            if (*(char *)(iVar2 + 8) != '\x02') {
              fn_82CEE578(auStack_280,auStack_270,0x200);
              fn_82CEDB38(auStack_280,0xffffffff82149f50);
              (**(int (***)())(*lbl_8323B464 + 0xc))
                        (lbl_8323B464,1,0xffffffffabbaa883,auStack_270,0xffffffff82149f7c,0x8d);
                    /* WARNING: Subroutine does not return */
              fn_82CED958(auStack_280);
            }
            if (1 < iVar9) {
              if (iVar9 == 2) {
                if (uVar3 == 0) {
                  uStack_290 = **(unsigned int **)(iVar2 + 0x18);
                  uStack_28c = *(unsigned int *)(*(int *)(iVar2 + 0x18) + 4);
                  iVar9 = 3;
                  uStack_288 = *(unsigned int *)(*(int *)(iVar2 + 0x18) + 8);
                }
                else {
                  uStack_290 = (unsigned int)**(unsigned short **)(iVar2 + 0xc);
                  uStack_28c = (unsigned int)*(unsigned short *)(*(int *)(iVar2 + 0xc) + 2);
                  iVar9 = 3;
                  uStack_288 = (unsigned int)*(unsigned short *)(*(int *)(iVar2 + 0xc) + 4);
                }
              }
              else {
                iVar5 = *(int *)(param_2 + 0x10) * 0x10 + *(int *)(param_2 + 0xc);
                uStack_290 = *(unsigned int *)(iVar5 + -8);
                uStack_28c = *(unsigned int *)(iVar5 + -0xc);
                if (uVar3 == 0) {
                  iVar5 = iVar9 * 4;
                  iVar9 = iVar9 + 1;
                  uStack_288 = *(unsigned int *)(iVar5 + *(int *)(iVar2 + 0x18));
                }
                else {
                  iVar5 = iVar9 * 2;
                  iVar9 = iVar9 + 1;
                  uStack_288 = (unsigned int)*(unsigned short *)(iVar5 + *(int *)(iVar2 + 0xc));
                }
              }
              goto LAB_82e086c4;
            }
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)uVar4);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}

