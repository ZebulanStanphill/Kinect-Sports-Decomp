typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82AE9600();
extern int fn_82AE9DE0();
extern int memcpy();


unsigned __int64 fn_82AEA1A0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  char cVar5;
  unsigned __int64 uVar4;
  unsigned char auStack_60 [64];
  
  uVar1 = *param_1;
  uVar2 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0) || (bVar3 = true, 0x1f < uVar2)) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((uVar2 == 0) || (bVar3 = true, 0x52 < uVar2)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
      if ((((uVar2 & 1) == 0) && (uVar2 != 0)) &&
         (((*(unsigned int *)(uVar2 + 0x14) ^ *(unsigned int *)(uVar1 + 0x14)) & 0x1fff) == 0)) {
        uVar2 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
        if ((uVar2 < 0x20) || (bVar3 = true, 0x52 < uVar2)) {
          bVar3 = false;
        }
        if (bVar3) {
          return 0;
        }
      }
      memcpy(auStack_60,param_1 + 1,0x34);
      fn_82AE9DE0(auStack_60,uVar1);
      cVar5 = fn_82AC8B10(auStack_60,param_2);
      if (cVar5 != '\0') {
        fn_82AC8CE8(auStack_60,param_2);
        cVar5 = fn_82AC8B10(auStack_60,uVar1);
        if (cVar5 != '\0') {
          uVar4 = fn_82AE9600(param_1[0xc],uVar1,param_2);
          return uVar4;
        }
      }
    }
  }
  return 0;
}

