extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_8200B690;
extern unsigned int lbl_8200B6E8;


extern void fn_826C0C68(void);
extern char lbl_8200B598[];
unsigned int * fn_826C0ED0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_826C0C68);
  *param_1 = &lbl_8200B6E8;
  param_1[4] = &lbl_8200B690;
  fn_826B1688(param_1 + 4,param_2,lbl_8200B598,7);
  return param_1;
}

