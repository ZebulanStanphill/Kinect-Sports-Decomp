typedef unsigned char bool;
extern int fn_82A1E508();


unsigned __int64 fn_82E665B0(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  uVar3 = 0xffffffff;
  if ((param_1 == -1) || ((param_2 & 0xffffffff) == 0)) {
LAB_82e665d4:
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar4 = 0;
    do {
      if ((param_2 & 0xffffffff) == 0) break;
      if (((param_2 & 1) != 0) && (bVar1 = uVar3 != 0xffffffff, uVar3 = uVar4, bVar1))
      goto LAB_82e665d4;
      uVar4 = uVar4 + 1;
      param_2 = (param_2 & 0xffffffff) >> 1;
    } while (uVar4 < 6);
    iVar2 = fn_82A1E508();
    if (iVar2 == -1) {
      uVar5 = 0xffffffff80004005;
    }
  }
  return uVar5;
}

