typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_82767170();
extern int fn_827671F0();


double fn_82769420(int param_1)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  
  auStack_30 = *(unsigned int *)(param_1 + 8);
  uVar2 = fn_82767170();
  fn_827671F0(&auStack_30,uVar2);
  if ((sStack_24 <= sStack_28) || (bVar1 = true, sStack_22 <= sStack_26)) {
    bVar1 = false;
  }
  if (!bVar1) {
    sStack_22 = 0;
    sStack_26 = 0;
  }
  return (double)(__int64)((int)sStack_22 - (int)sStack_26);
}

