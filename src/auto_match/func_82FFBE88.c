extern int fn_82FFBD98();
extern int fn_8302B618();


void fn_82FFBE88(__int64 param_1,unsigned __int64 param_2,unsigned char param_3,unsigned __int64 param_4)

{
  unsigned int iVar1;
  
  iVar1 = fn_8302B618(param_1 + 0x39c);
  if (iVar1 != 0) {
    if ((param_3 != '\0') && (*(int *)(iVar1 + 0x4c) != 0)) {
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + -1;
    }
    fn_82FFBD98(iVar1,param_4);
  }
  return;
}

