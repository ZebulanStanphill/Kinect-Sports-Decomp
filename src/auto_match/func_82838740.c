extern unsigned int *auStack_40;
extern int fn_8263C548();
extern int fn_8263C538();




void fn_82838740(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  struct { int data[6]; int a,b; } info;
  
  *(int *)(param_1 + 0x34) = (int)param_2;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  uVar1 = fn_8263C538(param_2);
  *(unsigned char *)(param_1 + 0x30) = uVar1;
  fn_8263C548(param_2,0,&info);
  *(unsigned short *)(param_1 + 0x24) = info.a;
  *(unsigned int *)(param_1 + 0x18) = info.data[0];
  *(unsigned short *)(param_1 + 0x26) = info.b;
  return;
}

