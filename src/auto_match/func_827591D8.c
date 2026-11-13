extern int fn_82F655D8();
extern int fn_82F68918();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200DD28;


unsigned __int64 fn_827591D8(unsigned __int64 param_1,unsigned short param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_82F655D8((double)((float)param_2 * lbl_8200DD28),param_1);
  dVar1 = (double)fn_82F68918((double)((float)dVar1 * lbl_82005CCC + lbl_82002C5C));
  return (__int64)dVar1 & 0xff;
}

