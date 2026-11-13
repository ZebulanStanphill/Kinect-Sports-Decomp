extern int fn_82BE5848();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8322B130;


unsigned char fn_82BE28A8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  unsigned char bVar3;
  
  iVar2 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8d0c);
  if (iVar2 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 != 0) {
    bVar3 = 0xc9;
    goto LAB_82be2930;
  }
  if ((param_1 & 0xffffffff) == 0) {
    if ((param_2 & 0xffffffff) != 0) {
LAB_82be2950:
      bVar3 = 0x6a;
      goto LAB_82be2930;
    }
  }
  else if ((param_2 & 0xffffffff) == 0) goto LAB_82be2950;
  lVar1 = fn_82BE5848(param_1,param_2,1);
  bVar3 = -(lVar1 == 0) & 0x69;
LAB_82be2930:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8d0c);
  return bVar3;
}

