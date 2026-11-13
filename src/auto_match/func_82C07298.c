extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C11AE0();


void fn_82C07298(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned char auStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  unsigned int *apuStack_34 [1];
  
  uStack_38 = 0;
  iStack_3c = 0;
  auStack_40 = 0;
  apuStack_34[0] = (unsigned int *)0x0;
  iVar1 = fn_82C10F68(param_1[0x8f],&uStack_38,apuStack_34,&auStack_40);
  if (iVar1 != 0x80500016) {
    if (iVar1 < 0) {
      return;
    }
    do {
      if (iVar1 < 0) {
        return;
      }
      iVar1 = fn_82C11AE0(*apuStack_34[0]);
      if (iVar1 < 0) {
        return;
      }
      iVar1 = fn_82C10FD0(param_1[0x8f],uStack_38,apuStack_34,&auStack_40);
    } while (iVar1 != 0x80500016);
  }
  fn_82C11038(param_1[0x8f],uStack_38);
  iVar1 = fn_82C10F68(param_1[0x8e],&uStack_38,&iStack_3c,&auStack_40);
  if (iVar1 != 0x80500016) {
    if (iVar1 < 0) {
      return;
    }
    do {
      if (iVar1 < 0) {
        return;
      }
      if (*(int *)(iStack_3c + 4) == 3) {
        *(unsigned int *)(iStack_3c + 4) = 1;
      }
      else if (*(int *)(iStack_3c + 4) == 2) {
        *(unsigned int *)(iStack_3c + 4) = 0;
      }
      *(unsigned int *)(iStack_3c + 0x10) = 0;
      *(unsigned char *)(iStack_3c + 0x14) = 0;
      *(unsigned int *)(iStack_3c + 8) = 0;
      *(unsigned int *)(iStack_3c + 0xc) = 0;
      *(unsigned int *)(iStack_3c + 0x50) = 0;
      *(unsigned int *)(iStack_3c + 0x18) = 0;
      *(unsigned int *)(iStack_3c + 0x1c) = 0;
      iVar1 = fn_82C10FD0(param_1[0x8e],uStack_38,&iStack_3c,&auStack_40);
    } while (iVar1 != 0x80500016);
  }
  fn_82C11038(param_1[0x8e],uStack_38);
  iVar1 = (*(int (**)())(*param_1 + 0x14))(*param_1,param_2);
  if (iVar1 >= 0) {
    *(unsigned __int64 *)(param_1 + 0x8c) = param_2;
    param_1[0x86] = 0;
    param_1[0x85] = 2;
    param_1[0x8b] = 1;
    param_1[0x93] = 0;
    param_1[0x9e] = 0;
  }
  return;
}
