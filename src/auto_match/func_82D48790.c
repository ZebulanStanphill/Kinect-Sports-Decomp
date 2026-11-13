typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82D401F8();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D48790(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  int iVar3;
  int iVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    (**(int (***)())(*(int *)**(unsigned int **)(param_2 + 0x44) + 0x1c))
              (param_1,(int *)**(unsigned int **)(param_2 + 0x44),param_3,param_4,param_5);
    iVar3 = 1;
    if (1 < *(int *)(param_2 + 0x48)) {
      iVar4 = 4;
      do {
        piVar1 = *(int **)(*(int *)(param_2 + 0x44) + iVar4);
        (**(int (***)())(*piVar1 + 0x1c))(param_1,piVar1,param_3);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
        vectorMinimumFloatingPoint(in_vs32,in_vs44);
        vectorMaximumFloatingPoint(in_vs45,in_vs43);
        puVar2 = (unsigned int *)((int)in_r0 + (int)param_5 & 0xfffffff0);
        *puVar2 = in_register_000100a0;
        puVar2[1] = in_register_000100a4;
        puVar2[2] = in_register_000100a8;
        puVar2[3] = in_vr10;
        puVar2 = (unsigned int *)((int)in_r0 + (int)param_5 + 0x10 & 0xfffffff0);
        *puVar2 = in_register_00010090;
        puVar2[1] = in_register_00010094;
        puVar2[2] = in_register_00010098;
        puVar2[3] = in_vr9;
      } while (iVar3 < *(int *)(param_2 + 0x48));
    }
  }
  else {
    fn_82D401F8((double)(float)((double)*(float *)(param_2 + 0x10) + param_1),param_3,
                 param_2 + 0x20,param_2 + 0x30,param_5,param_5);
  }
  return;
}

