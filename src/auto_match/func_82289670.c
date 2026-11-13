extern int fn_8225C590();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern int fn_8225DA18();


unsigned __int64 fn_82289670(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) != 1) || (param_2 != 3)) {
    uVar1 = fn_8225C590();
    param_1 = param_2 * 0x40 + param_1;
    if ((*(int *)(param_1 + 0x6a8) == 1) &&
       (iVar2 = fn_8225DA18(uVar1,*(unsigned int *)(param_1 + 0x6ac)),
       *(char *)(iVar2 + 0xd8) != '\0')) {
      fn_8225D8B8(uVar1,iVar2);
      fn_8225D388(uVar1,*(unsigned int *)(param_1 + 0x6ac));
      return 1;
    }
  }
  return 0;
}

