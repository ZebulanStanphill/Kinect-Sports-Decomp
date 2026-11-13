extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3a2;
extern unsigned int uStack_3a4;
extern unsigned int uStack_70;


unsigned int fn_8303A800(int *param_1,unsigned int *param_2)

{
  int aiStack_3b0;
  unsigned short uStack_3a4;
  unsigned short uStack_3a2;
  unsigned short uStack_3a0;
  unsigned int uStack_39c;
  unsigned int uStack_70;
  
  aiStack_3b0 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_3a4 = (unsigned short)*param_2;
  (**(int (***)())(*param_1 + 0x28))(param_1,&aiStack_3b0);
  if (aiStack_3b0 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = (unsigned int)uStack_3a2;
    (**(int (***)())(*param_1 + 8))(param_1);
  }
  return uStack_70;
}

