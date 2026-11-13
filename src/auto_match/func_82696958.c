extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82696610();
extern int fn_82696728();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82696958(char *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char bStack_38;
  unsigned char abStack_30 [24];
  
  cVar3 = *param_1;
  if (cVar3 == '\x06') {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
  }
  else {
    if (cVar3 == '\b') {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 4) != 0) {
        return (unsigned __int64)*(unsigned int *)(param_1 + 4);
      }
    }
    else if (cVar3 == '\t') {
      iVar1 = *(int *)(param_2 + 0x74);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        abStack_30[0] = 0;
        cVar3 = fn_82696610(param_1,param_2,iVar1 + 0x68,abStack_30);
        if (cVar3 != '\0') {
          uVar2 = fn_82696958(abStack_30,param_2);
          if (4 < abStack_30[0]) {
            fn_826959C8(abStack_30);
          }
          fn_8267C498(iVar1);
          return uVar2;
        }
        if (4 < abStack_30[0]) {
          fn_826959C8(abStack_30);
        }
        fn_8267C498(iVar1);
      }
    }
    else if (cVar3 == '\v') {
      fn_82696728(&uStack_40,param_1,param_2);
      uVar2 = (unsigned __int64)uStack_40;
      if (uVar2 != 0) {
        if ((bStack_38 & 2) == 0) {
          fn_826824B0();
        }
        uStack_40 = 0;
        if ((bStack_38 & 1) != 0) {
          return uVar2;
        }
        if (iStack_3c == 0) {
          return uVar2;
        }
        fn_826824B0();
        return uVar2;
      }
      uStack_40 = 0;
      if (((bStack_38 & 1) == 0) && (iStack_3c != 0)) {
        fn_826824B0();
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

