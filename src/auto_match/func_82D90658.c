extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DAE778();
extern int fn_82DBC718();
extern int fn_83081390();


void fn_82D90658(int param_1,int param_2)

{
  int iVar1;
  char cVar4;
  int iVar3;
  __int64 lVar2;
  int iVar5;
  
  cVar4 = fn_82DBC718((unsigned int *)(param_1 + 0x1d0),*(unsigned int *)(param_2 + 0x48),
                       *(unsigned int *)(param_2 + 0x4c),0xe0);
  if (cVar4 == '\0') {
    *(unsigned char *)(param_2 + 0x26) = *(unsigned char *)(param_2 + 0x26) & 0xcf | 0x10;
  }
  else {
    iVar3 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0x38) == (*(unsigned int *)(param_1 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),(int *)(param_1 + 0x34),4);
    }
    iVar3 = 0;
    *(int *)(*(int *)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x34)) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    *(unsigned int *)((unsigned int)*(unsigned short *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x28)) =
         *(unsigned int *)(*(int *)(param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28) + -4);
    *(unsigned short *)(*(int *)((unsigned int)*(unsigned short *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x28)) + 0x20) =
         *(unsigned short *)(param_2 + 0x20);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) + 0xffff;
    *(short *)(param_2 + 0x20) = (short)lVar2;
    *(unsigned char *)(param_2 + 0x26) = *(unsigned char *)(param_2 + 0x26) & 0x3f;
    *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_1 + 0x1d0);
    if (0 < *(int *)(param_2 + 0x4c)) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(iVar5 + *(int *)(param_2 + 0x48));
        fn_83081390((double)*(float *)(param_2 + 0x44),lVar2,iVar1 + 0xf0);
        (**(int (***)())(*(int *)(iVar1 + 0xe0) + 0x40))(iVar1 + 0xe0,0xffffffff8323b1a0);
        lVar2 = (**(int (***)())(*(int *)(iVar1 + 0xe0) + 0x44))(iVar1 + 0xe0,0xffffffff8323b1a0);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *(int *)(param_2 + 0x4c));
    }
    fn_82DAE778(param_1,param_2);
  }
  return;
}

