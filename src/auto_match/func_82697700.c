extern int fn_826972E0();
extern int fn_82F68918();
extern int fn_82F6A7A0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82006268;
extern unsigned int lbl_82006280;


unsigned __int64 fn_82697700(char *param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  
  if (*param_1 == '\x04') {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  }
  else {
    dVar2 = (double)fn_826972E0();
    if ((dVar2 == lbl_82005710) || (((unsigned __int64)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000))
    {
      uVar1 = 0;
    }
    else if ((dVar2 < lbl_82005710) || (lbl_82006280 < dVar2)) {
      dVar5 = lbl_82005710;
      uVar3 = fn_82F68918(ABS(dVar2));
      dVar4 = (double)fn_82F6A7A0(uVar3,lbl_82006268);
      uVar1 = (__int64)dVar4 & 0xffffffff;
      if (dVar2 < dVar5) {
        uVar1 = -uVar1;
      }
    }
    else {
      uVar1 = (__int64)dVar2 & 0xffffffff;
    }
  }
  return uVar1;
}

