extern int fn_827D50C0();
extern unsigned int fn_82A1F470();
extern int fn_827D9EB0();
extern int fn_827D9ED0();
extern int fn_82A1E658();


unsigned int  fn_827DD560(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int uVar2;
  
  uVar1 = *param_2;
  fn_827D9ED0(uVar1);
  iVar3 = fn_82A1E658();
  fn_827D9EB0(uVar1,0xffffffffcdcdcdcd);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    uVar2 = fn_82A1F470();
    fn_827D50C0(uVar1,uVar2);
    uVar2 = fn_82A1F470();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

