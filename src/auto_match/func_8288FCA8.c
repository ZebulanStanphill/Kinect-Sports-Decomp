typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack00000020 ((*(unsigned __int64*)&iStack00000020))
#define _iStack00000028 ((*(unsigned __int64*)&iStack00000028))
extern int fn_8288B918();
extern int fn_8288BE40();
extern int fn_8288CA40();
extern int fn_8288E3F0();
extern unsigned int iStack00000020;
extern unsigned int iStack00000028;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern unsigned int uStack_70;


unsigned __int64 fn_8288FCA8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iStack00000020;
  int iStack00000028;
  unsigned char uStack_70;
  int iStack_68;
  unsigned int uStack_64;
  struct { int first; unsigned int second; } stack_pair_60;

  int iStack_58;
  unsigned int uStack_54;
  struct { int first; unsigned int second; } stack_pair_50;


  iVar1 = *param_2;
  iVar2 = param_2[4];
  uVar5 = 0;
  uStack_64 = 0;
  _iStack00000020 = param_3;
  _iStack00000028 = param_4;
  iStack_68 = iVar1;
  if (iVar2 != 0) {
    iStack00000020 = (int)(param_3 >> 0x20);
    iVar4 = iStack00000020 - iVar1;
    fn_8288B918(&iStack_68,
                  ((unsigned __int64)(unsigned int)(iVar4 >> 2) & 0x7ffffff) * 0x20 + (param_3 & 0xffffffff));
    uVar5 = (unsigned __int64)uStack_64;
  }
  iVar4 = iStack_68;
  stack_pair_60.second = 0;
  stack_pair_60.first = iVar1;
  if (iVar2 != 0) {
    fn_8288B918(&stack_pair_60.first,
                  ((unsigned __int64)(unsigned int)(iStack00000028 - iVar1 >> 2) & 0x7ffffff) * 0x20 +
                  (_iStack00000028 & 0xffffffff));
  }
  if ((iVar4 != stack_pair_60.first) || (bVar3 = true, uVar5 != stack_pair_60.second)) {
    bVar3 = false;
  }
  if (!bVar3) {
    uStack_54 = 0;
    iStack_58 = iVar1;
    if (iVar2 != 0) {
      fn_8288B918(&iStack_58,iVar2);
    }
    fn_8288CA40(&stack_pair_50.first,CONCAT44(stack_pair_60.first,stack_pair_60.second),CONCAT44(iStack_58,uStack_54),
                  CONCAT44(iStack_68,uStack_64),uStack_70);
    fn_8288E3F0(param_2,((unsigned __int64)(unsigned int)(stack_pair_50.first - *param_2 >> 2) & 0x7ffffff) * 0x20 +
                          (unsigned __int64)stack_pair_50.second);
  }
  stack_pair_50.first = *param_2;
  stack_pair_50.second = 0;
  fn_8288BE40(param_1,&stack_pair_50.first,
                ((unsigned __int64)(unsigned int)(iVar4 - iVar1 >> 2) & 0x7ffffff) * 0x20 + uVar5);
  return param_1;
}
