extern int fn_827F6310();
extern int fn_827F6318();
extern int fn_827F6320();
extern int fn_827F9DF8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8255FA88(__int64 param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = fn_827F6320();
  if (iVar1 != 1) {
    return 0;
  }
  dVar2 = (double)fn_827F6310(param_1);
  dVar3 = (double)ltcg_pool_0_0f;
  if ((dVar2 < dVar3) || (iVar1 = fn_827F9DF8(param_1 + 0x24), iVar1 == 1)) {
    dVar2 = (double)fn_827F6318(param_1);
    if (dVar2 <= dVar3) {
      return 1;
    }
  }
  else {
    dVar2 = (double)fn_827F6318(param_1);
    if ((double)lbl_821CA460 <= dVar2) {
      return 1;
    }
  }
  return 0;
}

