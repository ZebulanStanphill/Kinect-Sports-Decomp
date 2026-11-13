extern unsigned int *auStack_30;
extern int fn_826A6A38();
extern int fn_826D8EA8();
extern int fn_826DFA28();
extern int fn_826DFA28();


void fn_826E03B8(int param_1,unsigned int *param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int auStack_30;

  uVar2 = fn_826A6A38();
  auStack_30 = uVar2 & 0xffff;
  uVar1 = fn_826D8EA8(*(unsigned int *)(param_1 + 0x20),&auStack_30);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_826DFA28(param_1 + 0x14,0xffffffff8200ca94,uVar2 & 0xffff);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) {
      iVar3 = param_1 + 0x28;
    }
    fn_826DFA28(uVar1,iVar3,*param_2);
  }
  return;
}
