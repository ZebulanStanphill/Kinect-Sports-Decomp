extern int fn_83023110();
extern int fn_83025108();


void fn_83024B20(int param_1,int param_2)

{
  if (*(short *)(param_2 + 0xe) != 0) {
    *(unsigned int *)(param_1 + 0x108) = 0x2d;
    if (*(int *)(param_1 + 0x74) == 4) {
      *(unsigned int *)(param_1 + 0x74) = 1;
    }
    fn_83025108(param_2);
    *(unsigned short *)(param_2 + 0xe) = *(unsigned short *)(param_2 + 0xc);
    fn_83023110(param_1 + 0x80,param_2,param_1 + 0x100);
  }
  return;
}

