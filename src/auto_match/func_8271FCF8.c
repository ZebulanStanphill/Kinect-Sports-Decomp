extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826A2B48();


unsigned __int64 fn_8271FCF8(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = fn_8267B890(*(unsigned int *)(*param_1 + 0x288),0x48,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_826A2B48(uVar4,param_1);
    }
    uVar1 = *param_1;
    iVar2 = *param_2;
    auStack_50[0] = 1;
    uVar3 = fn_826961B0(auStack_40,uVar4);
    (**(int (***)())(iVar2 + 0x28))(param_2,param_1,(unsigned __int64)uVar1 + 0x140,uVar3,auStack_50);
    fn_82696330(auStack_40);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_826824B0(uVar4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

