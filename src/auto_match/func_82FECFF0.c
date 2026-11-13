extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEF008();
extern int fn_82FEF170();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_83024C50();
extern unsigned int lbl_831BC770;


unsigned int * fn_82FECFF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC770,0x1a0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_82FEF170();
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = fn_83024C50(puVar1 + 4,param_2,param_3,param_1);
    if ((iVar2 == 1) &&
       (puVar3 = (unsigned int *)fn_82FEF008(0xffffffff832643f4), puVar3 != (unsigned int *)0x0))
    {
      *puVar3 = puVar1;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      fn_83024470(puVar1 + 4);
      fn_830224E8(puVar1 + 0x24);
      fn_82FA5190(lbl_831BC770,puVar1);
      puVar1 = (unsigned int *)0x0;
    }
  }
  return puVar1;
}

