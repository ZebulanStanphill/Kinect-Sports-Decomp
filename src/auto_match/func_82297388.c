extern unsigned int *auStack_2c;
extern int fn_8223EEC8();
extern int fn_8223EF38();
extern int fn_8223F508();
extern int fn_822972A8();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62988();
extern int fn_82F64188();
extern unsigned int lbl_832975DC;
extern unsigned int uStack_30;


unsigned __int64 fn_82297388(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_30;
  unsigned char auStack_2c [44];
  
  fn_82F62680(auStack_2c,0);
  uVar1 = lbl_832975DC;
  uVar5 = (unsigned __int64)lbl_832975DC;
  uStack_30 = lbl_832975DC;
  uVar2 = fn_8223EEC8(0xffffffff832632e4);
  uVar3 = fn_8223EF38(param_1,uVar2);
  uVar6 = uVar3;
  if ((uVar3 == 0) && (uVar6 = uVar5, uVar1 == 0)) {
    iVar4 = fn_822972A8(&uStack_30,param_1);
    if (iVar4 == -1) {
      fn_82F64188();
      uVar6 = uVar3;
    }
    else {
      lbl_832975DC = uStack_30;
      uVar6 = (unsigned __int64)uStack_30;
      fn_8223F508(uVar6);
      fn_82F62988(uVar6);
    }
  }
  fn_82F626D0(auStack_2c);
  return uVar6;
}

