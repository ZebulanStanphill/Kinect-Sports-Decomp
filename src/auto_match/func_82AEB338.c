typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACAFD8();


unsigned __int64 fn_82AEB338(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  char cVar3;
  
  cVar3 = fn_82ACAFD8();
  if (cVar3 == '\0') {
    uVar2 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
    if ((uVar2 < 0x53) || (bVar1 = true, 0x5f < uVar2)) {
      bVar1 = false;
    }
    if ((!bVar1) && (uVar2 != 0x75)) {
      return 0;
    }
  }
  return 1;
}

