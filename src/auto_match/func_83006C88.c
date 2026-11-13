typedef unsigned char bool;
#define false 0
extern int fn_830069B8();


bool fn_83006C88(double param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = fn_830069B8();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = (double)*(float *)(*(int *)(param_2 + 0x20) + 4) != param_1;
    *(float *)(*(int *)(param_2 + 0x20) + 4) = (float)param_1;
  }
  return bVar2;
}

