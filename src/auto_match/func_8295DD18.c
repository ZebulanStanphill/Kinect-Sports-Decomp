extern unsigned int *auStack_2c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern int fn_82963318();
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int fn_8295DD18(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  int uVar5;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  puVar1 = (unsigned int *)param_1[0x41];
  uVar2 = puVar1[3];
  uVar4 = *puVar1 & 0xfffff;
  fn_82963318(puVar1,0,&piStack_3c);
  fn_82963318(param_1[0x41],1,&piStack_40);
  fn_82963318(param_1[0x41],2,&piStack_38);
  fn_82963318(param_1[0x41],3,&piStack_34);
  piVar3 = *(int **)(param_1[0x41] + 0x10);
  if ((((piStack_40 == (int *)0x0) || (piStack_3c == (int *)0x0)) || (piStack_38 == (int *)0x0)) ||
     (piStack_34 == (int *)0x0)) {
    uVar5 = 0x80004005;
  }
  else {
    uVar5 = (*(int (**)())(*param_1 + 0x130))(param_1,0x5d);
    uVar5 = fn_8295D0A8(param_1,uVar5);
    if (uVar5 >= 0) {
      uVar5 = (*(int (**)())(*param_1 + 0x140))
                        (param_1,*(unsigned int *)(*piVar3 * 4 + param_1[5]),&uStack_50,&auStack_2c,
                         &uStack_30);
      if (uVar5 >= 0) {
        uVar5 = (*(int (**)())(*param_1 + 0x144))(param_1,piVar3,uVar2,&uStack_44,uStack_30);
        if (((uVar5 >= 0) &&
            (uVar5 = (*(int (**)())(*param_1 + 0x138))(param_1,uStack_50,uStack_44,auStack_2c),
            uVar5 >= 0)) &&
           (uVar5 = (*(int (**)())(*param_1 + 0x148))
                              (param_1,*(unsigned int *)(*piStack_40 * 4 + param_1[5]),&uStack_50,
                               &uStack_4c), uVar5 >= 0)) {
          uVar5 = (*(int (**)())(*param_1 + 0x14c))(param_1,piStack_40,uVar4,uStack_44,&uStack_48);
          if ((((int)uVar5 >= 0) &&
              (uVar5 = (*(int (**)())(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c),
              (int)uVar5 >= 0)) &&
             (uVar5 = (*(int (**)())(*param_1 + 0x148))
                                (param_1,*(unsigned int *)(*piStack_3c * 4 + param_1[5]),&uStack_50,
                                 &uStack_4c), (int)uVar5 >= 0)) {
            uVar5 = (*(int (**)())(*param_1 + 0x14c))(param_1,piStack_3c,uVar4,uStack_44,&uStack_48);
            if ((int)uVar5 >= 0) {
              uVar5 = (*(int (**)())(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c);
              if (((int)uVar5 >= 0) &&
                 (uVar5 = (*(int (**)())(*param_1 + 0x148))
                                    (param_1,*(unsigned int *)(*piStack_38 * 4 + param_1[5]),
                                     &uStack_50,&uStack_4c), (int)uVar5 >= 0)) {
                uVar5 = (*(int (**)())(*param_1 + 0x14c))
                                  (param_1,piStack_38,uVar4,uStack_44,&uStack_48);
                if (((int)uVar5 >= 0) &&
                   ((uVar5 = (*(int (**)())(*param_1 + 0x13c))(param_1,uStack_50,uStack_48,uStack_4c),
                    (int)uVar5 >= 0 &&
                    (uVar5 = (*(int (**)())(*param_1 + 0x148))
                                       (param_1,*(unsigned int *)(*piStack_34 * 4 + param_1[5]),
                                        &uStack_50,&uStack_4c), (int)uVar5 >= 0)))) {
                  uVar5 = (*(int (**)())(*param_1 + 0x14c))
                                    (param_1,piStack_34,uVar4,uStack_44,&uStack_48);
                  if (((int)uVar5 >= 0) &&
                     (((uVar5 = (*(int (**)())(*param_1 + 0x13c))
                                          (param_1,uStack_50,uStack_48,uStack_4c), (int)uVar5 >= 0
                       && (uVar5 = (*(int (**)())(*param_1 + 0x134))(param_1), (int)uVar5 >= 0)) &&
                      (uVar5 = fn_829548C8(param_1), (int)uVar5 >= 0)))) {
                    uVar5 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}

