extern unsigned int *auStack_60;
extern int fn_82FF4858();
extern int fn_8300F198();
extern int fn_8300F208();
extern int fn_83014B70();
extern unsigned int iStack_44;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;
extern unsigned int lbl_83264348;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;


unsigned int
fn_82FE6F38(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned short uVar2;
  int iVar1;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [2];
  unsigned short uStack_5e;
  struct { unsigned int first; unsigned int second; } stack_pair_5c;

  unsigned __int64 uStack_54;
  unsigned int uStack_4c;
  int iStack_44;
  
  uStack_5e = 0x16;
  uVar3 = (unsigned __int64)lbl_83264348;
  lbl_83264348 = (unsigned int)(uVar3 + 1);
  stack_pair_5c.second = lbl_83264348;
  iStack_44 = fn_83014B70(uVar3 + 1,param_5);
  if (iStack_44 != 0) {
    uStack_4c = 0;
    uStack_54 = 0;
    stack_pair_5c.first = param_1;
    uVar2 = fn_8300F198();
    iVar1 = fn_8300F208(lbl_832642E4,auStack_60,uVar2);
    if (iVar1 == 1) {
      if (((param_3 & 0xffffffff) == 0) && ((param_2 & 0x10000) == 0)) {
        return stack_pair_5c.second;
      }
      iVar1 = fn_82FF4858(lbl_83264304,&stack_pair_5c.first,param_3,param_4,param_2,stack_pair_5c.second);
      if (iVar1 == 1) {
        return stack_pair_5c.second;
      }
    }
  }
  return 0;
}

