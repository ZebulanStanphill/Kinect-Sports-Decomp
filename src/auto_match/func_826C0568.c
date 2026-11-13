extern int fn_82696330();
extern int fn_826BFF48();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


unsigned __int64 fn_826C0568(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  
  uStack_40 = 0;
  uStack_3f = 0;
  cVar2 = fn_826BFF48(param_1 + 8,param_3,&uStack_40);
  if (cVar2 == '\0') {
    if (param_4 != '\0') {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        uVar3 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x24))(iVar1 + 0x10,param_2,param_3,1);
        goto LAB_826c05ac;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
LAB_826c05ac:
  fn_82696330(&uStack_40);
  return uVar3;
}

