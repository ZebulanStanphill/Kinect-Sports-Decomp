typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE2E0();


unsigned __int64 fn_82AF58C0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  char cVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  if (((uVar1 >> 0x19 & 1) == 0) && ((uVar1 >> 5 & 1) == 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((uVar1 == 0) || (bVar2 = true, 0x66 < uVar1)) {
      bVar2 = false;
    }
    if (((bVar2) && (cVar3 = fn_82ABE2E0(param_2), cVar3 == '\0')) && (uVar1 != 0x60)) {
      if (((uVar1 == 0x61) || (uVar1 == 99)) || (bVar2 = false, uVar1 == 100)) {
        bVar2 = true;
      }
      if (!bVar2) {
        return 0;
      }
    }
  }
  return 1;
}

