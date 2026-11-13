#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_38;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_829A0DC0(int *param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38;
  
  puVar2 = (unsigned int *)param_1[0x41];
  uVar6 = (unsigned __int64)*puVar2;
  uVar4 = uVar6 & 0xfffff;
  piVar3 = (int *)puVar2[2];
  if (uVar4 == puVar2[1]) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uVar6 & 0xfffff) * 4 + ZEXT48(piVar3);
  }
  if ((uVar6 & 0xfffff) << 1 < (unsigned __int64)*(unsigned int *)(param_1[0x41] + 4)) {
    uVar6 = (uVar6 & 0xfffff) * 8 + ZEXT48(piVar3);
  }
  else {
    uVar6 = 0;
  }
  uVar5 = fn_8295D0A8(param_1);
  if (-1 < (int)uVar5) {
    bVar1 = *(unsigned char *)(*(int *)(*piVar3 * 4 + param_1[5]) + 0x6e);
    uStack_3c = bVar1 | 0xb0000000;
    uStack_40 = (unsigned int)bVar1;
    uVar5 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_3c,0xf0000,0);
    if (-1 < (int)uVar5) {
      if ((uVar7 & 0xffffffff) != 0) {
        uVar5 = (**(int (***)())(*param_1 + 0x148))
                          (param_1,*(unsigned int *)(*(int *)uVar7 * 4 + param_1[5]),&uStack_3c,
                           &uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(int (***)())(*param_1 + 0x14c))(param_1,uVar7,uVar4,0xf0000,&auStack_38);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_3c,auStack_38,uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      if ((uVar6 & 0xffffffff) != 0) {
        uVar5 = (**(int (***)())(*param_1 + 0x148))
                          (param_1,*(unsigned int *)(*(int *)uVar6 * 4 + param_1[5]),&uStack_3c,
                           &uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(int (***)())(*param_1 + 0x14c))(param_1,uVar6,uVar4,0xf0000,&auStack_38);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_3c,auStack_38,uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar5 = (**(int (***)())(*param_1 + 0x134))(param_1);
      if ((-1 < (int)uVar5) && (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

