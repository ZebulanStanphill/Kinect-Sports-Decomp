extern unsigned int *auStack_5c;
extern int fn_82E2DE78();
extern int fn_82E2EB60();
extern int fn_82E2FA90();
extern int fn_82E31128();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_60;
extern unsigned int uStack_80;


unsigned __int64 fn_82E31218(int *param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  
  piStack_7c = (int *)0x0;
  piStack_78 = (int *)0x0;
  uVar6 = 0;
  piStack_74 = (int *)0x0;
  piVar5 = (int *)0x0;
  piStack_70 = (int *)0x0;
  uStack_80 = 0;
  piStack_6c = (int *)0x0;
  piStack_68 = (int *)0x0;
  piStack_64 = (int *)0x0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 0x15);
  uVar3 = fn_82E50BE8(0x1e8,0,0,0,0);
  if ((uVar3 & 0xffffffff) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82E31128(uVar3,&uStack_80);
    uVar6 = (unsigned __int64)uStack_80;
  }
  if (piVar4 == (int *)0x0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    if ((-1 < (int)uVar6) &&
       (uVar6 = (**(int (***)())(*param_1 + 0x80))(param_1,piVar4), -1 < (__int64)uVar6)) {
      stack_pair_60.first = 0;
      uVar6 = (**(int (***)())(*param_1 + 0x84))(param_1,&stack_pair_60.first);
      if (-1 < (__int64)uVar6) {
        uVar3 = 0;
        if (stack_pair_60.first != 0) {
          do {
            uStack_80 = uStack_80 & 0xffff;
            uVar6 = (**(int (***)())(*param_1 + 0x88))(param_1,uVar3,&uStack_80,&piStack_7c);
            if ((((__int64)uVar6 < 0) ||
                (uVar6 = (**(int (***)())(*piStack_7c + 0xa8))(piStack_7c,&piStack_78),
                (__int64)uVar6 < 0)) ||
               (uVar6 = (**(int (***)())(*piVar4 + 0x90))(piVar4,piStack_78), (__int64)uVar6 < 0))
            goto LAB_82e315fc;
            if (piStack_7c != (int *)0x0) {
              (**(int (***)())(*piStack_7c + 8))();
              piStack_7c = (int *)0x0;
            }
            if (piStack_78 != (int *)0x0) {
              (**(int (***)())(*piStack_78 + 8))();
              piStack_78 = (int *)0x0;
            }
            uVar3 = uVar3 + 1;
          } while ((uVar3 & 0xffffffff) < (unsigned __int64)stack_pair_60.first);
        }
        stack_pair_60.second = 0;
        uVar6 = (**(int (***)())(*param_1 + 0x9c))(param_1,&stack_pair_60.second);
        if (-1 < (__int64)uVar6) {
          uVar3 = 0;
          if (stack_pair_60.second != 0) {
            do {
              uVar6 = (**(int (***)())(*param_1 + 0xa0))(param_1,uVar3,&piStack_74);
              if ((((__int64)uVar6 < 0) ||
                  (uVar6 = (**(int (***)())(*piStack_74 + 0x2c))(piStack_74,&piStack_70),
                  (__int64)uVar6 < 0)) ||
                 (uVar6 = (**(int (***)())(*piVar4 + 0xa4))(piVar4,piStack_70), (__int64)uVar6 < 0))
              goto LAB_82e315fc;
              if (piStack_74 != (int *)0x0) {
                (**(int (***)())(*piStack_74 + 8))();
                piStack_74 = (int *)0x0;
              }
              if (piStack_70 != (int *)0x0) {
                (**(int (***)())(*piStack_70 + 8))();
                piStack_70 = (int *)0x0;
              }
              uVar3 = uVar3 + 1;
            } while ((uVar3 & 0xffffffff) < (unsigned __int64)stack_pair_60.second);
          }
          uStack_80 = 0;
          uVar6 = fn_82E2DE78(param_1,&uStack_80);
          uVar2 = uStack_80;
          if (-1 < (__int64)uVar6) {
            uVar3 = 0;
            if (uStack_80 != 0) {
              do {
                uVar6 = fn_82E2FA90(param_1,uVar3,&piStack_68);
                piVar5 = piStack_68;
                if ((((__int64)uVar6 < 0) ||
                    (uVar6 = (**(int (***)())(*piStack_68 + 0x28))(piStack_68,&piStack_6c),
                    (__int64)uVar6 < 0)) ||
                   (uVar6 = fn_82E2EB60(piVar4,piStack_6c), (__int64)uVar6 < 0))
                goto LAB_82e315fc;
                (**(int (***)())(*piVar5 + 8))(piVar5);
                piStack_68 = (int *)0x0;
                if (piStack_6c != (int *)0x0) {
                  (**(int (***)())(*piStack_6c + 8))();
                  piStack_6c = (int *)0x0;
                }
                uVar3 = uVar3 + 1;
              } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar2);
            }
            piVar5 = (int *)0x0;
            piVar1 = (int *)param_1[0x76];
            if (((piVar1 == (int *)0x0) ||
                ((uVar6 = (**(int (***)())(*piVar1 + 0x1c))(piVar1,&piStack_64), -1 < (__int64)uVar6 &&
                 (uVar6 = (**(int (***)())(*piVar4 + 0xb4))(piVar4,piStack_64), -1 < (__int64)uVar6))))
               && (uVar6 = (**(int (***)())*piVar4)(piVar4,0xffffffff8215465c,param_2),
                  -1 < (__int64)uVar6)) goto LAB_82e31614;
          }
        }
      }
    }
LAB_82e315fc:
    (**(int (***)())(*piVar4 + 0xc4))(piVar4,1);
  }
LAB_82e31614:
  if (piStack_7c != (int *)0x0) {
    (**(int (***)())(*piStack_7c + 8))();
    piStack_7c = (int *)0x0;
  }
  if (piStack_78 != (int *)0x0) {
    (**(int (***)())(*piStack_78 + 8))();
    piStack_78 = (int *)0x0;
  }
  if (piStack_74 != (int *)0x0) {
    (**(int (***)())(*piStack_74 + 8))();
    piStack_74 = (int *)0x0;
  }
  if (piStack_70 != (int *)0x0) {
    (**(int (***)())(*piStack_70 + 8))();
    piStack_70 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    (**(int (***)())(*piVar5 + 8))(piVar5);
  }
  if (piStack_6c != (int *)0x0) {
    (**(int (***)())(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
  if (piStack_64 != (int *)0x0) {
    (**(int (***)())(*piStack_64 + 8))();
    piStack_64 = (int *)0x0;
  }
  fn_82E50F10(param_1 + 0x15);
  return uVar6;
}

