extern unsigned int *auStack_30;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_829A1470(int *param_1)

{
  int *piVar1;
  int (**pcVar2)();
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char auStack_30 [48];
  
  uVar4 = *(unsigned int *)param_1[0x41] & 0xfffff;
  uVar3 = *(unsigned int *)(*(int *)((unsigned int *)param_1[0x41])[4] * 4 + param_1[5]);
  if (*(short *)((int)param_1 + 0xca) == 0x104) {
    uVar5 = fn_8295D0A8(param_1,0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x140))(param_1,uVar3,&uStack_40,0,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x144))
                      (param_1,*(unsigned int *)(param_1[0x41] + 0x10),uVar4,&uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_40,0x70000,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    piVar1 = *(int **)(param_1[0x41] + 8);
    uVar5 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(*piVar1 * 4 + param_1[5]),&uStack_40,&uStack_34);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x14c))(param_1,piVar1,uVar4,uStack_38,auStack_30);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = 0xe40000;
    pcVar2 = *(int (***)())(*param_1 + 0x13c);
  }
  else {
    uVar5 = fn_8295D0A8(param_1,0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x140))(param_1,uVar3,&uStack_40,0,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x144))
                      (param_1,*(unsigned int *)(param_1[0x41] + 0x10),uVar4,&uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_34 = 0;
    uVar5 = 0xf0000;
    pcVar2 = *(int (***)())(*param_1 + 0x138);
  }
  uVar5 = (*pcVar2)(param_1,uStack_40,uVar5,uStack_34);
  if (((-1 < (int)uVar5) && (uVar5 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

