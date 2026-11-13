extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826B44A0();


unsigned int fn_826F7800(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char cVar4;
  int iVar3;
  int lVar5;
  int aiStack_40 [4];
  char acStack_30 [24];
  
  if (*(unsigned *)(param_1 + 0x68) != 0) {
    iVar2 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))((int *)*(unsigned *)(param_1 + 0x68));
    aiStack_40[0] = fn_82694700((unsigned int)*(unsigned int *)(iVar2 + 0x78) + 0x254,param_2);
    *(int *)(aiStack_40[0] + 8) = *(int *)(aiStack_40[0] + 8) + 1;
    acStack_30[0] = '\0';
    cVar4 = fn_826B44A0(iVar2,aiStack_40,acStack_30,0,0,0,0);
    if ((((cVar4 != '\0') && (acStack_30[0] == '\x06')) &&
        (iVar2 = fn_82696958(acStack_30,iVar2), iVar2 != 0)) &&
       (iVar3 = (*(int (**)())(*(int *)(iVar2 + 0x10) + 8))(iVar2 + 0x10), iVar3 == 7)) {
      uVar1 = *(unsigned int *)(iVar2 + 0x38);
      fn_82696330(acStack_30);
      { int *r = (int *)aiStack_40[0];
      lVar5 = r[2] - 1;
      r[2] = lVar5;
      if (lVar5 == 0) fn_826944C8(r); }
      return uVar1;
    }
    fn_82696330(acStack_30);
    { int *r=(int *)aiStack_40[0]; if(--r[2]==0) fn_826944C8(r); }
  }
  return 0;
}

