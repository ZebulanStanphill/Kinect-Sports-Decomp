extern unsigned int fStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_3c;


void fn_83035568(double param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  struct { int first; unsigned int second; } stack_pair_40;

  int iStack_38;
  float fStack_34;
  unsigned char uStack_2c;
  
  if (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0x10);
    fStack_34 = (float)param_1;
    stack_pair_40.second = (unsigned int)(LZCOUNT((int)param_3) << 0x1a) & 0x80000000 | stack_pair_40.second & 0x3fffffff;
    stack_pair_40.first = param_2;
    if (iVar1 != *(int *)(param_2 + 0x14)) {
      do {
        if ((*(int *)(iVar1 + 8) != 0) && (*(short *)(*(int *)(iVar1 + 8) + 0x18) != 0)) {
          iStack_38 = iVar1 + 0xc;
          uStack_2c = 0;
          (**(int (***)())(**(int **)(iVar1 + 8) + 0x4c))
                    (*(int **)(iVar1 + 8),0xffffffff830354f8,param_3,&stack_pair_40.first);
        }
        iVar1 = iVar1 + 0x18;
      } while (iVar1 != *(int *)(param_2 + 0x14));
    }
  }
  return;
}

