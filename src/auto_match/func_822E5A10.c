typedef unsigned char bool;
#define true 1
#define false 0
extern float fRam831d14e8;
extern int fn_822E6008();
extern int fn_822E64E0();
extern int fn_822E7C78();


void fn_822E5A10(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  bool bVar4;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1bc) + 0x54);
  if ((uVar1 < 2) || ((5 < uVar1 && ((uVar1 < 8 || (uVar1 == 0x10)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x178) == 2;
  if (((bVar4) && (*(int *)(param_1 + 0x20c) == 0)) && (*(int *)(param_1 + 0x210) == 0)) {
    if (bVar2) {
      uVar3 = fn_822E64E0((double)fRam831d14e8,param_1,param_2,0,0,bVar2,1);
      *(unsigned int *)(param_1 + 0x210) = uVar3;
      uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
      *(unsigned int *)(param_1 + 0x20c) = uVar3;
    }
    else if ((uVar1 == 3) && (*(int *)(param_1 + 0x278) != 0)) {
      if (*(int *)(param_1 + 0x214) == 0) {
        fn_822E6008(param_1,0);
        *(unsigned int *)(param_1 + 0x20c) = 0;
        uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
        *(unsigned int *)(param_1 + 0x210) = uVar3;
      }
      else {
        fn_822E6008(param_1,0);
        *(unsigned int *)(param_1 + 0x210) = 0;
        uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
        *(unsigned int *)(param_1 + 0x20c) = uVar3;
      }
      fn_822E7C78(param_1);
    }
  }
  return;
}

