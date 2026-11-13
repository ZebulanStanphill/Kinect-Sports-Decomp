typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_828B5738(short *param_1,short *param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  if ((*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7)) ||
     (bVar1 = true, *param_1 != *param_2)) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, param_1[1] != param_2[1])) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar2 = 1, param_1[2] != param_2[2])) {
    uVar2 = 0;
  }
  return uVar2;
}

