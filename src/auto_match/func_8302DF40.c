extern int fn_8302D408();


int fn_8302DF40(int param_1,int param_2,unsigned int param_3)

{
  unsigned char cVar2;
  int uVar1;
  
  if ((param_3 & 0xff) != 0x32) {
    *(unsigned char *)(param_1 + 0x11f) = *(unsigned char *)(param_1 + 0x11f) | 0x10;
  }
  if (((*(unsigned char *)(param_1 + 0x11f) & 0xe0) == 0x20) ||
     (cVar2 = (*(int (**)())(**(int **)(param_1 + 0x88) + 0x20))(*(int **)(param_1 + 0x88),param_2),
     cVar2 == '\0')) {
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x88) + 0x14))
                      (*(int **)(param_1 + 0x88),param_2,param_3);
    if (uVar1 == 1) {
      fn_8302D408(param_1);
    }
  }
  else {
    uVar1 = 0x23;
  }
  return uVar1;
}

