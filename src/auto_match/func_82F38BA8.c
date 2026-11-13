extern unsigned int *auStack_90;
extern int fn_82F36EE8();
extern int fn_82F37278();
extern int fn_82F37780();
extern int fn_82F38430();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AA8;
extern unsigned int lbl_82154AB8;
extern unsigned int lbl_82154B48;
extern unsigned int lbl_82154B58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_98;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82F38BA8(int param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  int *piStack_a0;
  int *piStack_9c;
  unsigned __int64 uStack_98;
  unsigned int auStack_90 [4];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  
  if (((param_4 == (unsigned int *)0x0) || ((param_2 & 0xffffffff) == 0)) || (param_3 == (int *)0x0))
  {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    auStack_90[1] = 0;
    auStack_90[0] = 0;
    lVar4 = (**(int (***)())(*param_3 + 0x14))(param_3,auStack_90 + 1,auStack_90);
    if (-1 < lVar4) {
      if (auStack_90[0] == 0) {
        lVar4 = 0;
        *param_4 = 0;
      }
      else {
        piStack_9c = (int *)0x0;
        if ((*(__int64 *)(param_1 + 0x80) == 0) &&
           (iVar5 = (**(int (***)())**(unsigned int **)(param_1 + 4))
                              (*(unsigned int **)(param_1 + 4),0xffffffff82154c48,&piStack_9c),
           -1 < iVar5)) {
          (**(int (***)())(*piStack_9c + 0x14))(piStack_9c,0,param_1 + 0x78);
          uStack_98 = 0;
          (**(int (***)())(*piStack_9c + 0x14))(piStack_9c,&uStack_98,0);
          *(unsigned __int64 *)(param_1 + 0x80) = uStack_98;
          if (piStack_9c != (int *)0x0) {
            (**(int (***)())(*piStack_9c + 8))();
            piStack_9c = (int *)0x0;
          }
        }
        uVar8 = 0;
        if ((*(int *)(param_1 + 0x100) != 0) && (*(int *)(param_1 + 0x104) == 0)) {
          fn_82F37780(param_1 + 0x8c,param_3,0);
          (**(int (***)())(*param_3 + 4))(param_3);
        }
        if (auStack_90[0] != 0) {
          do {
            piStack_a0 = (int *)0x0;
            uStack_98 = uStack_98 & 0xffffffff;
            if (*(int *)(param_1 + 0x74) == 0) {
              if ((*(unsigned __int64 *)(param_1 + 0x78) == 0) ||
                 (*(unsigned __int64 *)(param_1 + 0x80) < *(unsigned __int64 *)(param_1 + 0x78))) {
                lVar4 = fn_82F36EE8(param_1,param_2,param_3,uVar8,&piStack_a0,&uStack_98);
                if (-1 < lVar4) {
                  uVar8 = (uStack_98 >> 0x20) + uVar8;
                }
                if ((int)lVar4 == 0) goto LAB_82f38e0c;
                goto LAB_82f38d9c;
              }
              lVar4 = 0;
            }
            else {
              piStack_a0 = param_3;
              (**(int (***)())(*param_3 + 4))(param_3);
LAB_82f38e0c:
              piVar3 = *(int **)(param_1 + 0x74);
              if (piVar3 == (int *)0x0) {
                lVar4 = -0x3ff2c945;
LAB_82f38d9c:
                if (piStack_a0 != (int *)0x0) {
                  (**(int (***)())(*piStack_a0 + 8))();
                  piStack_a0 = (int *)0x0;
                }
              }
              else {
                lVar4 = (**(int (***)())(*piVar3 + 0x18))(piVar3,piStack_a0,&uStack_98);
                if (-1 < lVar4) {
                  uVar8 = (uStack_98 >> 0x20) + uVar8;
                }
                if ((int)lVar4 != 0) goto LAB_82f38d9c;
                if (*(int *)(param_1 + 0x100) == 0) {
                  uStack_80 = lbl_8202E618;
                  uStack_7c = lbl_8202E61C;
                  uStack_78 = lbl_8202E620;
                  uStack_74 = lbl_8202E624;
                  (**(int (***)())(**(int **)(param_1 + 0x74) + 0xc))
                            (*(int **)(param_1 + 0x74),&uStack_80);
                  pbVar6 = (unsigned char *)&uStack_80;
                  pbVar7 = &lbl_82154AA8;
                  do {
                    bVar1 = *pbVar7;
                    bVar2 = *pbVar6;
                    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                  } while (pbVar7 != (unsigned char *)&lbl_82154AB8);
                  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                    *(int *)(param_1 + 0xf8) = (int)uVar8;
                    *(unsigned int *)(param_1 + 0x100) = 1;
                    fn_82F37780(param_1 + 0x8c,param_3,0);
                    (**(int (***)())(*param_3 + 4))(param_3);
                  }
                }
                else if (*(int *)(param_1 + 0x104) == 0) {
                  uStack_70 = lbl_8202E618;
                  uStack_6c = lbl_8202E61C;
                  uStack_68 = lbl_8202E620;
                  uStack_64 = lbl_8202E624;
                  (**(int (***)())(**(int **)(param_1 + 0x74) + 0xc))
                            (*(int **)(param_1 + 0x74),&uStack_70);
                  pbVar6 = (unsigned char *)&uStack_70;
                  pbVar7 = (unsigned char *)&lbl_82154B48;
                  do {
                    bVar1 = *pbVar7;
                    bVar2 = *pbVar6;
                    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                  } while (pbVar7 != &lbl_82154B58);
                  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                    *(int *)(param_1 + 0xfc) = (int)uVar8;
                    *(unsigned int *)(param_1 + 0x104) = 1;
                  }
                }
                lVar4 = fn_82F37278(param_1);
                if (lVar4 < 0) goto LAB_82f38d9c;
                if (piStack_a0 != (int *)0x0) {
                  (**(int (***)())(*piStack_a0 + 8))();
                  piStack_a0 = (int *)0x0;
                  goto LAB_82f38d9c;
                }
              }
              if ((int)lVar4 != 0) break;
            }
            if (((*(int *)(param_1 + 0x74) == 0) && (*(unsigned __int64 *)(param_1 + 0x78) != 0)) &&
               (*(unsigned __int64 *)(param_1 + 0x78) <= *(unsigned __int64 *)(param_1 + 0x80))) {
              lVar4 = 0;
              if ((*(int *)(param_1 + 0x100) != 0) && (*(int *)(param_1 + 0x104) == 0)) {
                fn_82F38430(param_1);
              }
              break;
            }
          } while ((uVar8 & 0xffffffff) < (unsigned __int64)auStack_90[0]);
        }
        *param_4 = (int)uVar8;
      }
    }
  }
  return lVar4;
}

