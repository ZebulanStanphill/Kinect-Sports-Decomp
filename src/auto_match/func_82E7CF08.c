extern unsigned char lbl_820F8F08[];
extern unsigned int *auStack_48;
extern int fn_82E5A018();


int fn_82E7CF08(int param_1,unsigned short param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int lVar2;
  unsigned short asStack_50;
  int *piStack_4c;
  unsigned int auStack_48 [2];
  
  auStack_48[0] = 0;
  piStack_4c = (int *)0x0;
  asStack_50 = 0;
  if (param_3 == (unsigned int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else if (*(void **)(param_1 + 4) == 0) {
    lVar2 = -0x7fff0001;
  }
  else {
    lVar2 = (*(int (**)())(**(int **)(param_1 + 4) + 0xc))
                      (*(int **)(param_1 + 4),&lbl_820F8F08,auStack_48);
    if (lVar2 >= 0) {
      uVar1 = 0;
      if (auStack_48[0] != 0) {
        do {
          if (piStack_4c != (int *)0x0) {
            (*(int (**)())(*piStack_4c + 8))(piStack_4c);
            piStack_4c = (int *)0x0;
          }
          lVar2 = (*(int (**)())(**(int **)(param_1 + 4) + 0x10))
                            (*(int **)(param_1 + 4),&lbl_820F8F08,uVar1,&piStack_4c);
          if ((lVar2 < 0) || (lVar2 = fn_82E5A018(piStack_4c,&asStack_50), lVar2 < 0))
          goto LAB_82e7d01c;
          if (asStack_50 == param_2) {
            *param_3 = piStack_4c;
            if (piStack_4c == (int *)0x0) {
              return lVar2;
            }
            (*(int (**)())(*piStack_4c + 4))(piStack_4c);
            goto LAB_82e7d01c;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (unsigned int)auStack_48[0]);
      }
      lVar2 = -0x3ff2c92b;
    }
LAB_82e7d01c:
    if (piStack_4c != (int *)0x0) {
      (*(int (**)())(*piStack_4c + 8))(piStack_4c);
    }
  }
  return lVar2;
}

