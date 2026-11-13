typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE2E0();


unsigned __int64 fn_82AF6268(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  char cVar4;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  if ((uVar1 >> 0x19 & 1) == 0) {
    uVar3 = uVar1 >> 7 & 0x7f;
    if ((uVar3 < 0x20) || (bVar2 = true, 0x52 < uVar3)) {
      bVar2 = false;
    }
    if ((!bVar2) && ((uVar1 >> 5 & 1) == 0)) {
      if ((uVar3 == 0) || (bVar2 = true, 0x66 < uVar3)) {
        bVar2 = false;
      }
      if ((bVar2) && (cVar4 = fn_82ABE2E0(param_2), cVar4 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}

