typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_820E7F9C;


unsigned __int64 fn_82BB5E00(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0xe4);
  if (((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) {
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (((uVar1 >> 1 & 1) != 0 ||
        (bVar2 = true, (&lbl_820E7F9C)[*(int *)(param_1 + 0x50) * 0xc] == '\0')))) {
      bVar2 = false;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}

