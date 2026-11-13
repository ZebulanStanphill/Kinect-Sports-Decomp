extern unsigned int *auStack_30;
extern int fn_8304DD90();
extern int fn_8304DE60();
extern int fn_8304DF58();


unsigned __int64 fn_8304E098(int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int auStack_30;
  
  puVar3 = (unsigned int *)(param_1 + 0xf);
  iVar2 = (**(int (***)())(*(int *)param_1[10] + 0x2c))((int *)param_1[10],param_1 + 0xd,puVar3,0);
  if (iVar2 == 0x2e) {
    return 0x3f;
  }
  if (((iVar2 == 0x2d) || (iVar2 == 0x11)) && (param_1[0xd] != 0)) {
    uVar1 = (**(int (***)())(*param_1 + 0x38))(param_1,*(unsigned short *)(param_1[2] + 0xd4));
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    *(unsigned char *)((int)param_1 + 0x41) = 0;
    if ((*(unsigned char *)(param_1[2] + 0xdb) & 0x80) != 0) {
      uVar1 = fn_8304DD90(param_1,&auStack_30);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      if (*puVar3 <= auStack_30) {
        iVar2 = fn_8304DE60(param_1);
        if (iVar2 == 1) {
          (**(int (***)())(*(int *)param_1[10] + 0x30))();
          *puVar3 = 0;
          return 1;
        }
        goto LAB_8304e100;
      }
      param_1[0x15] = auStack_30;
    }
    fn_8304DF58(param_1);
    uVar1 = 1;
  }
  else {
LAB_8304e100:
    uVar1 = 2;
  }
  return uVar1;
}

