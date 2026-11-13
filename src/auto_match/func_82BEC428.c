extern int fn_82BE5240();
extern int fn_82BE64E0();
extern int fn_82BE6B58();
extern int fn_82BEBE48();


extern char lbl_82196582[];
unsigned __int64 fn_82BEC428(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if ((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
     ((param_4 & 0xffffffff) == 0)) {
    fn_82BE5240(param_1,0x44c,lbl_82196582);
  }
  if (fn_82BE6B58(param_1,param_2,0x100,0x100)==0) return 0;
  if (fn_82BEBE48(param_1,param_3,param_4)==0) return 0;
  fn_82BE64E0(param_1,2); return 1;
}
