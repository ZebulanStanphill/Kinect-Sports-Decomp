extern unsigned int *auStack_50;
extern int fn_8275E678();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_827603C0();
extern int memcpy();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_82760EC0(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char uStack_60;
  unsigned char auStack_50 [64];
  
  puVar4 = (unsigned int *)(param_1 + 0x54);
  memcpy(param_2,puVar4,0x18);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    if (iVar3 == 2) {
      iVar3 = param_1 + 8;
      if (*(unsigned int *)(param_1 + 0x20) < *(unsigned int *)(param_1 + 0x24)) {
        if ((**(unsigned char **)(param_1 + 0xc) & 7) == 0) {
          fn_827603C0(iVar3);
        }
        *puVar4 = 0;
        fn_8275FFC0(iVar3,param_1 + 0x60,param_1 + 100,param_1 + 0x68);
        uVar1 = fn_8275FE18(auStack_50,iVar3);
        memcpy(param_1 + 0x2c,uVar1,0x28);
        *(float *)(param_1 + 0x58) =
             (float)(__int64)*(int *)(param_1 + 0x38) * *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x5c) =
             (float)(__int64)*(int *)(param_1 + 0x3c) * *(float *)(param_1 + 0x50);
      }
      else {
        *puVar4 = 4;
      }
      goto LAB_8276105c;
    }
    if (iVar3 != 3) goto LAB_8276105c;
  }
  if (*(unsigned int *)(param_1 + 0x30) < *(unsigned int *)(param_1 + 0x34)) {
    fn_8275E678(param_1 + 0x2c,&uStack_70,0);
    *puVar4 = 3;
    *(unsigned int *)(param_1 + 0x58) = uStack_70;
    *(unsigned int *)(param_1 + 0x5c) = uStack_6c;
    *(unsigned int *)(param_1 + 0x60) = uStack_68;
    *(unsigned int *)(param_1 + 100) = uStack_64;
    *(unsigned char *)(param_1 + 0x68) = uStack_60;
  }
  else {
    *puVar4 = 2;
    if (*(unsigned int *)(param_1 + 0x34) <= *(unsigned int *)(param_1 + 0x30)) {
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x4c);
      }
      *(int *)(param_1 + 0xc) = iVar3;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      fn_8275EB90();
    }
  }
LAB_8276105c:
  lVar2 = (unsigned __int64)*param_2 - 4;
  return lVar2 - (((unsigned __int64)*param_2 - 5) + (unsigned __int64)(lVar2 == 0));
}

