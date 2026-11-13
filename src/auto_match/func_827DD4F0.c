extern int fn_827D50B8();
extern int fn_827D9D20();
extern int fn_827D9ED0();
extern int fn_82A29D80();


unsigned int  fn_827DD4F0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int uVar2;
  
  uVar1 = *param_2;
  iVar3 = fn_827D9ED0(uVar1);
  if (iVar3 == -1) {
    uVar2 = fn_827D50B8(param_2[1]);
  }
  else {
    uVar2 = fn_827D9ED0(uVar1);
    uVar2 = fn_82A29D80(uVar2,0);
    fn_827D9D20(uVar1,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

