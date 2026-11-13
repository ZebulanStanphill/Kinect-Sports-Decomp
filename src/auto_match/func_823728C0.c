extern int fn_824E6890();
extern int fn_824E7360(int, float, int);


void fn_823728C0(unsigned param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x648) != 0) || (*(int *)(param_1 + 0x64c) != 0)) {
    {int obj=fn_824E6890(*(int *)(param_1 + 0x7e0),
                      (unsigned int)*(unsigned int *)(*(int *)(param_1 + 0x7e0) + 0xd54) + 0x20);
    float f=*(float *)(param_1+0x654);fn_824E7360(obj,f,param_2);}
    *(unsigned int *)(param_1 + 0x648) = 0;
    *(unsigned int *)(param_1 + 0x64c) = 0;
  }
  return;
}

