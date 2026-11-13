extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_829A0FD0(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  
  uVar1 = *(unsigned int *)param_1[0x41];
  uVar4 = fn_8295D0A8(param_1,0x42);
  if ((-1 < (int)uVar4) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x140))
                        (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_30,0,0), -1 < (int)uVar4)) {
    uVar4 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_30,0xf0000,0);
    if (-1 < (int)uVar4) {
      iVar3 = (uVar1 & 0xfffff) * 4;
      iVar2 = *(int *)(param_1[0x41] + 8);
      uVar4 = (**(int (***)())(*param_1 + 0x148))
                        (param_1,*(unsigned int *)(*(int *)(iVar3 + iVar2) * 4 + param_1[5]),
                         &uStack_30,&auStack_28);
      if (-1 < (int)uVar4) {
        uVar4 = (**(int (***)())(*param_1 + 0x14c))
                          (param_1,iVar3 + iVar2,uVar1 & 0xfffff,0xf0000,&uStack_2c);
        if ((-1 < (int)uVar4) &&
           (uVar4 = (**(int (***)())(*param_1 + 0x13c))
                              (param_1,uStack_30,uStack_2c | 0x9000000,auStack_28),
           -1 < (int)uVar4)) {
          uVar4 = (**(int (***)())(*param_1 + 0x134))(param_1);
          if ((-1 < (int)uVar4) && (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)) {
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

