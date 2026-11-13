extern int fn_82ACA5E0();
extern int fn_82B80200();


__int64 fn_82B81270(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  cVar2 = fn_82B80200();
  if (cVar2 == '\0') {
    cVar2 = fn_82ACA5E0(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0xe4) {
      uVar3 = 0;
      if ((param_2 & 0xffffffff) != 0) {
        uVar4 = 0;
        uVar5 = param_2;
        do {
          uVar1 = uVar4 & 0x3f;
          uVar4 = uVar4 + 2;
          uVar3 = (unsigned int)(1 << (param_3 >> uVar1 & 3)) | uVar3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return -((unsigned __int64)
               (4 < (((unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 0xe) & 7) -
                    (((0x8da691691448U >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f) & 7))
                    + param_2) - 1);
    }
  }
  return 1;
}

