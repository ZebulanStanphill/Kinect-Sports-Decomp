extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;


unsigned int * fn_82E12B18(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned char auStack_b0 [64];
  unsigned char auStack_70 [112];
  
  (**(int (***)())(*param_2 + 0x1c))(param_2,0x40);
  iVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_b0,0x40);
  if (iVar1 != 0x40) {
    *param_1 = 0;
    return param_1;
  }
  (**(int (***)())(*param_2 + 0x20))(param_2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(auStack_70,0xffffffffffffffff,0x40);
}

