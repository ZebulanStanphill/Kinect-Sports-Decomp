extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DBBDA8();


void fn_82D901D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0xb0) - 1;
  if (-1 < (__int64)uVar6) {
    lVar5 = (uVar6 + (uVar6 & 0x7fffffff) * 2 & 0xfffffff) << 4;
    do {
      iVar2 = *(int *)((int)lVar5 + *(int *)(param_1 + 0xac));
      fn_82CE4040(iVar2);
      *(unsigned char *)(*(int *)(iVar2 + 8) + 0x25) = *(unsigned char *)(*(int *)(iVar2 + 8) + 0x25) & 0x3f | 0x40;
      if (*(int *)(iVar1 + 0x94) == 0) {
        *(unsigned int *)(iVar1 + 0x94) = 1;
        fn_82DBBDA8(iVar2);
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x94) - 1;
        *(int *)(iVar1 + 0x94) = (int)lVar4;
        if ((lVar4 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
          if (*(int *)(iVar1 + 0x8c) != 0) {
            fn_82D80C18(iVar1);
          }
          if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
            fn_82D80C30(iVar1);
          }
        }
      }
      else {
        fn_82DBBDA8(iVar2);
      }
      iVar3 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -0x30;
      *(int *)(param_2[1] * 4 + *param_2) = iVar2;
      param_2[1] = param_2[1] + 1;
    } while (-1 < (__int64)uVar6);
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xb8) - 1;
  if (-1 < (__int64)uVar6) {
    lVar5 = (uVar6 & 0x3fffffff) << 2;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + (int)lVar5);
      fn_82CE4040(iVar2);
      *(unsigned char *)(*(int *)(iVar2 + 8) + 0x25) = *(unsigned char *)(*(int *)(iVar2 + 8) + 0x25) & 0x3f | 0x40;
      if (*(int *)(iVar1 + 0x94) == 0) {
        *(unsigned int *)(iVar1 + 0x94) = 1;
        fn_82DBBDA8(iVar2);
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x94) - 1;
        *(int *)(iVar1 + 0x94) = (int)lVar4;
        if ((lVar4 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
          if (*(int *)(iVar1 + 0x8c) != 0) {
            fn_82D80C18(iVar1);
          }
          if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
            fn_82D80C30(iVar1);
          }
        }
      }
      else {
        fn_82DBBDA8(iVar2);
      }
      iVar3 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -4;
      *(int *)(param_2[1] * 4 + *param_2) = iVar2;
      param_2[1] = param_2[1] + 1;
    } while (-1 < (__int64)uVar6);
  }
  return;
}

