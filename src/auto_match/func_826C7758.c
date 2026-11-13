extern unsigned int *auStack_30;
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269EA50();
extern int fn_826A76D0();


unsigned __int64 fn_826C7758(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  char cVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int aiStack_40 [4];
  unsigned char auStack_30 [24];
  
  cVar4 = fn_8269EA50();
  if (cVar4 == '\0') {
    lVar3 = (**(int (***)())(*param_1 + 0x58))(param_1);
    fn_826A76D0(aiStack_40,param_2,lVar3 + 0x78);
    if (*(int *)(aiStack_40[0] + 0x10) != 0) {
      iVar1 = param_1[0x6c];
      auStack_30[0] = 0;
      if (iVar1 == 0) {
        iVar1 = param_1[0x1b];
      }
      if (iVar1 != 0) {
        cVar4 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x2c))
                          (iVar1 + 0x10,param_1 + 0x52,aiStack_40,auStack_30);
        if (cVar4 != '\0') {
          fn_82696330(auStack_30);
          lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_40[0] + 8) - 1;
          *(int *)(aiStack_40[0] + 8) = (int)lVar3;
          if (lVar3 == 0) {
            fn_826944C8(aiStack_40[0]);
          }
          goto LAB_826c7780;
        }
      }
      fn_82696330(auStack_30);
    }
    lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
    uVar2 = 0;
  }
  else {
LAB_826c7780:
    uVar2 = 1;
  }
  return uVar2;
}

