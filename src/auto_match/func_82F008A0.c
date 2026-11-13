extern int fn_82ED3678();
extern unsigned int lbl_8325F878;
extern unsigned int lbl_8325F88C;


void fn_82F008A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int (**pcVar1)();
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1f24) != 0) || (*(int *)(param_1 + 0x1f30) != 0)) {
    if ((((*(unsigned int *)(param_1 + 0x7b2c) & 1) != 0) ||
        (pcVar1 = lbl_8325F88C, *(char *)(param_1 + 0x7b30) != '\0')) &&
       (iVar2 = fn_82ED3678(*(unsigned int *)(param_1 + 0x7b40),param_3,param_2,0,0),
       pcVar1 = lbl_8325F88C, iVar2 != 0)) {
      pcVar1 = lbl_8325F878;
    }
    (*pcVar1)(param_4);
  }
  return;
}

