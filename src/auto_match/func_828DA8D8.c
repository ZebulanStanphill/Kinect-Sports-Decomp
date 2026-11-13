extern int fn_8223C478();
extern int fn_828AFF88();
extern int fn_828B00A0();
extern int fn_828E9DB8();
extern int fn_828E9F18();


void fn_828DA8D8(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar2 = fn_828AFF88((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0x278);
  cVar1 = *(char *)(param_1 + 0x80);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar3 = *(unsigned __int64 *)(param_1 + 0x98);
    lVar4 = *(__int64 *)(param_1 + 0x88);
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,((int)uVar2 - (int)uVar3) + lVar4 + 100000,0x1e);
    uVar2 = fn_828B00A0((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0x278);
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,uVar2,0x1e);
  }
  else {
    *(unsigned __int64 *)(param_1 + 0x88) = uVar2;
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,uVar2,0x1e);
  }
  return;
}

