extern int fn_825077E8();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82193D04;


void fn_82457328(double param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    if ((double)lbl_821917B4 <= param_1) {
      if ((double)lbl_82193D04 <= param_1) {
        if ((double)lbl_82192D74 <= param_1) {
          iVar1 = param_2 + 4;
          if ((double)lbl_82193B00 <= param_1) {
            iVar1 = param_2;
          }
        }
        else {
          iVar1 = param_2 + 8;
        }
      }
      else {
        iVar1 = param_2 + 0xc;
      }
    }
    else {
      iVar1 = param_2 + 0x10;
    }
    fn_825077E8(*(int *)(param_2 + 0x18),iVar1,1);
    *(unsigned int *)(param_2 + 0x1c) = 1;
  }
  return;
}

