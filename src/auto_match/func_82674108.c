extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8268AB00();
extern unsigned int lbl_82002AE0;


unsigned char fn_82674108(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned char bVar4;
  __int64 lVar5;
  double dVar6;
  
  lVar1 = fn_8251F718(param_2);
  uVar2 = fn_8251FBA8();
  uVar2 = (uVar2 & 0xffffffff) >> 8;
  bVar4 = 1;
  if (uVar2 != 0) {
    dVar6 = (double)lbl_82002AE0;
    lVar5 = lVar1;
    do {
      cVar3 = fn_8268AB00(dVar6,param_1,lVar5,lVar5 + 0x80,0x10);
      lVar5 = lVar5 + 0x100;
      uVar2 = uVar2 - 1;
      bVar4 = -(cVar3 != '\0') & bVar4;
    } while (uVar2 != 0);
  }
  fn_8251FA58(lVar1);
  return bVar4;
}

