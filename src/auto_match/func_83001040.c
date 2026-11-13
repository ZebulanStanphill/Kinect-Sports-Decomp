typedef unsigned char bool;
extern int fn_82FFFF50();
extern int fn_82FFFFE0();
extern int fn_83027260();


unsigned __int64 fn_83001040(int *param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  if ((param_2 & 0xffffffff) < 4) {
    bVar1 = (int)param_2 != 0;
    if (param_2 == 1 && bVar1) {
      fn_82FFFFE0(param_1);
      *(unsigned char *)((int)param_1 + 0x3d) = *(unsigned char *)((int)param_1 + 0x3d) | 1;
      return 1;
    }
    if ((param_2 != 2 || !bVar1) && (!bVar1)) {
      fn_82FFFFE0(param_1);
      return 1;
    }
    if (param_1[0x19] == 0) {
      fn_82FFFF50(param_1);
    }
  }
  if (param_1[0x19] == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = fn_83027260(param_1[0x19],param_2);
    (**(int (***)())(*param_1 + 0x48))((double)(__int64)(int)param_2,param_1);
  }
  return uVar2;
}

