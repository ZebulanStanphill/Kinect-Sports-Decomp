extern char lbl_82153598[], lbl_821535E8[];
extern int fn_82E28318();


int fn_82E28460(int *param_1,int param_2,unsigned int param_3, int param_4)

{
  int uVar1;
  
  if ((param_3) < 0x58) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = fn_82E28318(param_1,param_2 + 0x30,param_3 - 0x30,param_2,param_2 + 0x10,
                          *(unsigned int *)(param_2 + 0x20),*(unsigned int *)(param_2 + 0x24),
                          *(unsigned __int64 *)(param_2 + 0x28),param_4);
    if ((*(int *)(param_2 + 0x34) != 0) || (*(int *)(param_2 + 0x38) == 0)) {
      uVar1 = (*(int (**)())(*param_1 + 0x58))(param_1,lbl_82153598,0x100000001);
      if (uVar1 >= 0) {
        uVar1 = (*(int (**)())(*param_1 + 0x54))(param_1,lbl_821535E8,2);
      }
    }
  }
  return uVar1;
}

