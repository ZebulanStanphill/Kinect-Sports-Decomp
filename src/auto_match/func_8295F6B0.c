extern unsigned int *auStack_2c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_8295F6B0(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  uVar4 = 0;
  uVar1 = *(unsigned int *)param_1[0x41];
  uVar5 = (unsigned __int64)uVar1;
  uVar2 = uVar1 & 0xfffff;
  if (uVar5 == 0x70500003) {
    uVar4 = 0x18;
  }
  else if (uVar5 - 0x70600003 == 0) {
    uVar4 = 0x17;
  }
  else if ((uVar5 - 0x70600003 & 0xffffffff) == 1) {
    uVar4 = 0x15;
  }
  else if ((uVar5 - 0x70700003 & 0xffffffff) == 0) {
    uVar4 = 0x16;
  }
  else if ((uVar5 - 0x70700003 & 0xffffffff) == 1) {
    uVar4 = 0x14;
  }
  uVar4 = fn_8295D0A8(param_1,uVar4);
  if ((-1 < (int)uVar4) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x140))
                        (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_3c,&auStack_2c,&uStack_30), -1 < (int)uVar4)) {
    uVar4 = (**(int (***)())(*param_1 + 0x144))
                      (param_1,*(unsigned int *)(param_1[0x41] + 0x10),
                       *(unsigned int *)(param_1[0x41] + 0xc),&uStack_40,uStack_30);
    if ((-1 < (int)uVar4) &&
       (uVar4 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_3c,uStack_40,auStack_2c),
       -1 < (int)uVar4)) {
      uStack_40 = 0x70000;
      if (uVar2 != 3) {
        uStack_40 = 0xf0000;
      }
      uVar4 = (**(int (***)())(*param_1 + 0x148))
                        (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                         &uStack_3c,&uStack_38);
      if ((-1 < (int)uVar4) &&
         (uVar4 = (**(int (***)())(*param_1 + 0x14c))
                            (param_1,*(unsigned int *)(param_1[0x41] + 8),uVar2,uStack_40,&uStack_34),
         -1 < (int)uVar4)) {
        uVar4 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_3c,uStack_34,uStack_38);
        if (-1 < (int)uVar4) {
          iVar3 = (uVar1 & 0xfffff) * 4;
          uVar4 = (**(int (***)())(*param_1 + 0x148))
                            (param_1,*(unsigned int *)
                                      (*(int *)(*(int *)(param_1[0x41] + 8) + iVar3) * 4 +
                                      param_1[5]),&uStack_3c,&uStack_38);
          if ((-1 < (int)uVar4) &&
             (uVar4 = (**(int (***)())(*param_1 + 0x14c))
                                (param_1,*(int *)(param_1[0x41] + 8) + iVar3,uVar2,uStack_40,
                                 &uStack_34), -1 < (int)uVar4)) {
            uVar4 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_3c,uStack_34,uStack_38);
            if ((-1 < (int)uVar4) &&
               ((uVar4 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar4 &&
                (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)))) {
              uVar4 = 0;
            }
          }
        }
      }
    }
  }
  return uVar4;
}

