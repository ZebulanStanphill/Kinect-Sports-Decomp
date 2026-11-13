extern int fn_82BBE320();
extern int fn_82BBF428();
extern int fn_82BBFB58(param_1,param_2,param_3);
extern int lbl_83223534;


void fn_82BBFCE8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (lbl_83223534 != 0) { fn_82BBFB58(param_1,param_2,param_3); }
  else { iVar1 = fn_82BBE320(param_1 + 8,param_2,0,param_3);
    if (iVar1 >= 0) fn_82BBF428(param_1,param_2,param_3);
  }
}
