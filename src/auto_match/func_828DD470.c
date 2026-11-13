extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_828E9DB8();
extern int fn_828E9F18();


static void wb(unsigned __int64 s, unsigned int v, int n)
{
  fn_8223C478(s,n,0);
  fn_828E9DB8(s,v,n);
}
static void wb64(unsigned __int64 s, unsigned __int64 v, int n)
{
  fn_8223C478(s,n,0);
  fn_828E9F18(s,v,n);
}
void fn_828DD470(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = fn_8288A398();
  wb(param_2,*(unsigned int *)(iVar2 + 0x38),0x20);
  wb64(param_2,*(unsigned __int64 *)(param_1 + 0x80),0x40);
  wb(param_2,*(unsigned int *)(param_1 + 0x88),8);
  wb(param_2,*(unsigned int *)(param_1 + 0x8c),8);

  return;
}

