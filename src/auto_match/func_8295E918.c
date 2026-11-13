extern unsigned int *auStack_40;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8295E918(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int auStack_40;
  
  if (param_1[0xd] == 0) {
    uVar6 = 0xffffffff80004001;
  }
  else {
    if (*(int *)(param_1[0x41] + 0xc) != 0) {
      uVar7 = 0;
      iVar2 = *(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]);
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 0xc) * uVar7 * 4 +
                                 *(int *)(param_1[0x41] + 8)) * 4 + param_1[5]);
        if ((((*(int *)(iVar3 + 4) != *(int *)(iVar2 + 4)) ||
             (*(int *)(iVar3 + 8) != *(int *)(iVar2 + 8))) ||
            (*(int *)(iVar3 + 0xc) != *(int *)(iVar2 + 0xc))) ||
           (*(int *)(iVar3 + 0x10) != *(int *)(iVar2 + 0x10))) {
          uVar6 = fn_8295D0A8(param_1,1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          iVar4 = *(int *)(*(int *)(iVar3 + 0x14) * 4 + param_1[5]);
          uVar1 = *(unsigned int *)(iVar4 + 0x10);
          uVar5 = *(unsigned int *)(iVar4 + 0xc) & 0x7ff;
          uVar8 = uVar5 | 0xb0001000;
          if (uVar1 != 0) {
            if (uVar1 == 1) {
              uVar8 = uVar5 | 0xb0551000;
            }
            else if (uVar1 < 3) {
              uVar8 = uVar5 | 0xb0aa1000;
            }
            else if (uVar1 == 3) {
              uVar8 = uVar5 | 0xb0ff1000;
            }
          }
          if (*(int *)(iVar3 + 0x18) == 0) {
            uVar8 = uVar8 | 0xd000000;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x140))
                            (param_1,*(unsigned int *)
                                      (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),&uStack_50
                             ,0,&uStack_48);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x144))
                            (param_1,*(unsigned int *)(param_1[0x41] + 0x10),
                             *(unsigned int *)(param_1[0x41] + 0xc),&uStack_4c,uStack_48);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_50,uStack_4c,uVar8);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x148))
                            (param_1,*(unsigned int *)
                                      (*(int *)(*(int *)(param_1[0x41] + 0xc) * uVar7 * 4 +
                                               *(int *)(param_1[0x41] + 8)) * 4 + param_1[5]),
                             &uStack_50,&uStack_44);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          iVar3 = *(int *)(param_1[0x41] + 0xc);
          uVar6 = (**(int (***)())(*param_1 + 0x14c))
                            (param_1,((__int64)iVar3 * (__int64)(int)uVar7 & 0x3fffffffU) * 4 +
                                     (unsigned __int64)*(unsigned int *)(param_1[0x41] + 8),iVar3,uStack_4c,
                             &auStack_40);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_50,auStack_40,uStack_44);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = (**(int (***)())(*param_1 + 0x134))(param_1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = fn_829548C8(param_1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 2);
    }
    uVar6 = 0;
  }
  return uVar6;
}

