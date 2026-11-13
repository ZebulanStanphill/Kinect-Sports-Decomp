typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int uStack_28;


unsigned __int64 fn_827A1460(unsigned __int64 param_1,double param_2,__int64 param_3)

{
  bool bVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  int aiStack_30 [2];
  unsigned int uStack_28;
  
  fn_827A0BD0();
  uVar3 = fn_827A8770(param_3 + 0x24);
  fn_827A9328((double)(float)((double)uVar3 + param_2),aiStack_30,param_3 + 0x24);
  uVar2 = (unsigned __int64)uStack_28;
  if (((aiStack_30[0] == 0) || (*(unsigned int *)(aiStack_30[0] + 4) <= uVar2)) ||
     (bVar1 = false, (int)uStack_28 < 0)) {
    bVar1 = true;
  }
  if ((bVar1) || ((int)uStack_28 < 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

