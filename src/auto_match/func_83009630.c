extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_83009630(int *param_1,unsigned __int64 param_2)

{
  int *piStack_20;
  unsigned int uStack_1c;
  unsigned __int64 uStack_18;
  
  uStack_18 = 0xff;
  uStack_1c = uStack_1c & 0x3fffffff | 0x80000000;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 0xf7;
  if (param_1[9] != 0) {
    uStack_18 = (unsigned __int64)*(unsigned char *)(param_1[9] + 0x3c);
  }
  piStack_20 = param_1;
  (**(int (***)())(*param_1 + 0x44))((double)uStack_18,param_1,param_2,&piStack_20,1);
  return;
}

