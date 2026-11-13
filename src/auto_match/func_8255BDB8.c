extern unsigned int lbl_8218EE24;
extern unsigned int lbl_8218EFB4;
extern unsigned int lbl_831C1198;
extern unsigned int lbl_831C14C8;


void fn_8255BDB8(int param_1,unsigned __int64 param_2,int *param_3,int *param_4,unsigned int param_5)

{
  __int64 lVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  int *piVar4;
  
  if (param_3 != (int *)0x0) {
    puVar2 = &lbl_831C14C8;
    lVar1 = 0x33;
    do {
      for (piVar4 = (int *)(-(unsigned int)(*param_3 != 0) & (unsigned int)(param_3 + 2)); piVar4 != (int *)0x0;
          piVar4 = (int *)(-(unsigned int)((unsigned int)((*piVar4 + (int)piVar4) - (int)param_3) < (unsigned int)param_3[1]
                                  ) & *piVar4 + (int)piVar4)) {
        if (*(unsigned short *)(piVar4 + 1) == *puVar2) {
          if (param_5 == 0) {
            if ((*(char *)(piVar4 + 4) != '\0') || (piVar4[3] == 0)) {
LAB_8255be54:
              if (*(int (***)())(&lbl_831C1198 + (unsigned int)*(unsigned short *)(piVar4 + 1) * 0x10) != (int (**)())0x0) {
                (**(int (***)())(&lbl_831C1198 + (unsigned int)*(unsigned short *)(piVar4 + 1) * 0x10))
                          (piVar4,param_2,0);
              }
            }
          }
          else if (((piVar4[3] & param_5) != 0) && (*(char *)(piVar4 + 4) == '\0'))
          goto LAB_8255be54;
        }
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if ((param_4 != (int *)0x0) &&
     (piVar4 = (int *)(-(unsigned int)(*param_4 != 0) & (unsigned int)(param_4 + 2)), piVar4 != (int *)0x0)) {
    do {
      puVar2 = &lbl_8218EE24;
      if (**(char **)(*(int *)(param_1 + 8) + 0xd48) == '\0') {
        puVar2 = &lbl_8218EFB4;
      }
      for (uVar3 = 0;
          uVar3 < (-(unsigned int)(**(char **)(*(int *)(param_1 + 8) + 0xd48) != '\0') & 0xfffffff6) + 0x10;
          uVar3 = uVar3 + 1) {
        if (*(unsigned short *)(piVar4 + 1) == *puVar2) {
          if (param_5 == 0) {
            if ((*(char *)(piVar4 + 4) != '\0') || (piVar4[3] == 0)) {
LAB_8255bf64:
              if (*(int (***)())(&lbl_831C1198 + (unsigned int)*(unsigned short *)(piVar4 + 1) * 0x10) != (int (**)())0x0) {
                (**(int (***)())(&lbl_831C1198 + (unsigned int)*(unsigned short *)(piVar4 + 1) * 0x10))
                          (piVar4,param_2,0);
              }
            }
          }
          else if (((piVar4[3] & param_5) != 0) && (*(char *)(piVar4 + 4) == '\0'))
          goto LAB_8255bf64;
        }
        puVar2 = puVar2 + 1;
      }
      piVar4 = (int *)(-(unsigned int)((unsigned int)((*piVar4 + (int)piVar4) - (int)param_4) < (unsigned int)param_4[1]) &
                      *piVar4 + (int)piVar4);
    } while (piVar4 != (int *)0x0);
  }
  return;
}

