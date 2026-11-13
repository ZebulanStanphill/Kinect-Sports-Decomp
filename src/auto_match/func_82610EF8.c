extern int fn_827D9698();
extern int fn_827D9ED8();
extern int fn_827DBA00();
extern unsigned int lbl_8326B7C8;


void fn_82610EF8(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    lVar2 = fn_827D9698((unsigned __int64)uVar1 + 0x70);
    lVar3 = fn_827D9ED8((unsigned __int64)uVar1);
    fn_827DBA00(lbl_8326B7C8,*(unsigned int *)(param_1 + 0x18),-(lVar2 != 0x36) & 1,
                      lVar3 + param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

