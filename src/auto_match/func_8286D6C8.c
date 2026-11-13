extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8287A4E0();
extern unsigned int lbl_8201FBC8;
extern unsigned int lbl_82186E64;


int * fn_8286D6C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                   unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int * apiStack_40;
  
  uVar1 = fn_8265C9E0(0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    apiStack_40 = (int *)0x0;
  }
  else {
    apiStack_40 = (int *)fn_8287A4E0(param_1,param_2,param_3,uVar1,param_5);
  }
  if (apiStack_40 != (int *)0x0) {
    (**(int (***)())(*apiStack_40 + 0x24))((double)lbl_8201FBC8,(double)lbl_82186E64);
    fn_8257A9F0(param_4 + 4,&apiStack_40);
  }
  return apiStack_40;
}

