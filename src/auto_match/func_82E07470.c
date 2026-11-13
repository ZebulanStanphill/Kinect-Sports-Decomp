extern int fn_82CFC050();
extern int fn_82E06C88();
extern int fn_82E07080();
extern int fn_82E07698();


void fn_82E07470(int param_1,int param_2,char param_3)

{
  char cVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  
  cVar1 = fn_82E07698(param_1 + 0x5c,param_2 + 0x5c);
  if (param_3 != '\0') {
    fn_82E07080(param_1,*(unsigned int *)(param_2 + 0x44),param_1 + 0x5c);
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(int *)(param_2 + 0x44) != 0) {
      do {
        fn_82E06C88(param_1,param_2,uVar2,uVar2);
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_2 + 0x44));
    }
  }
  else {
    uVar3 = *(unsigned int *)(param_2 + 0x44);
    if (*(unsigned int *)(param_1 + 0x44) <= *(unsigned int *)(param_2 + 0x44)) {
      uVar3 = *(unsigned int *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      fn_82CFC050(*(unsigned int *)(param_1 + 0x38),*(unsigned int *)(param_2 + 0x38),
                   (__int64)*(int *)(param_1 + 0x58) * (__int64)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      fn_82CFC050(*(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_2 + 0x2c),
                   (__int64)*(int *)(param_1 + 0x54) * (__int64)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_82CFC050(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_2 + 0x20),
                   (__int64)*(int *)(param_1 + 0x50) * (__int64)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      fn_82CFC050(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_2 + 0x14),
                   (__int64)*(int *)(param_1 + 0x4c) * (__int64)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      fn_82CFC050(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_2 + 8),
                   (__int64)*(int *)(param_1 + 0x48) * (__int64)(int)uVar3);
    }
  }
  return;
}

