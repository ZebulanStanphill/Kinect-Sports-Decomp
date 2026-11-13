extern unsigned int *auStack_3c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8295F1D8(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int auStack_3c [15];
  
  uVar1 = *(unsigned int *)param_1[0x41];
  uVar3 = uVar1 & 0xfffff;
  uVar4 = (**(int (***)())(*param_1 + 0x130))(param_1,0x12);
  uVar4 = fn_8295D0A8(param_1,uVar4);
  if ((((-1 < (int)uVar4) &&
       (uVar4 = (**(int (***)())(*param_1 + 0x140))
                          (param_1,*(unsigned int *)
                                    (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),&uStack_50,
                           &uStack_44,&uStack_48), -1 < (int)uVar4)) &&
      (uVar4 = (**(int (***)())(*param_1 + 0x144))
                         (param_1,*(unsigned int *)(param_1[0x41] + 0x10),uVar3,&uStack_4c,uStack_48),
      -1 < (int)uVar4)) &&
     (uVar4 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_50,uStack_4c,uStack_44),
     -1 < (int)uVar4)) {
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar2 = *(int *)(param_1[0x41] + 8);
      uVar4 = (**(int (***)())(*param_1 + 0x148))
                        (param_1,*(unsigned int *)(*(int *)(iVar2 + iVar6) * 4 + param_1[5]),
                         &uStack_50,&uStack_40);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = (**(int (***)())(*param_1 + 0x14c))(param_1,iVar2 + iVar6,uVar3,uStack_4c,auStack_3c);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_50,auStack_3c[0],uStack_40);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar5 = uVar5 + 1;
      iVar6 = (uVar1 & 0xfffff) * 4 + iVar6;
    } while (uVar5 < 3);
    uVar4 = (**(int (***)())(*param_1 + 0x134))(param_1);
    if ((-1 < (int)uVar4) && (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

