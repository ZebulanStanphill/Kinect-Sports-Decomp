extern int fn_827F3C30();
extern int fn_827F3C48();


unsigned __int64 fn_827F05E0(__int64 param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar3 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0xe8);
  lVar4 = uVar3 - 1;
  iVar1 = *(int *)(((param_2 & 0xffff) + 0x28) * 4 + (int)param_1);
  if (-1 < lVar4) {
    param_1 = (uVar3 + 0x27) * 4 + param_1;
    do {
      if ((unsigned int)lVar4 != (param_2 & 0xffff)) {
        uVar3 = fn_827F3C30(*(unsigned int *)param_1);
        uVar3 = uVar3 & 0xffff;
        while (uVar3 = uVar3 - 1, -1 < (__int64)uVar3) {
          iVar2 = fn_827F3C48(*(unsigned int *)param_1,uVar3 & 0xffff);
          if (iVar2 == iVar1) {
            return 1;
          }
        }
      }
      lVar4 = lVar4 + -1;
      param_1 = param_1 + -4;
    } while (-1 < lVar4);
  }
  return 0;
}

