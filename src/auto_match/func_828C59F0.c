#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_40 ((*(unsigned __int64*)&iStack_40))
extern int fn_828C4EA8();
extern unsigned int iStack_40;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_3c;


void fn_828C59F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  int iStack_40;
  unsigned int uStack_3c;
  
  uVar3 = (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
  lVar4 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  if (0 < lVar4) {
    do {
      lVar4 = lVar4 + -1;
      iStack_40 = (int)(param_1 >> 0x20);
      uVar1 = (param_1 & 0xffffffff) + lVar4;
      uVar2 = (uVar1 & 0xffffffff) >> 2;
      if (*(unsigned int *)(iStack_40 + 8) <= uVar2) {
        uVar2 = uVar2 - *(unsigned int *)(iStack_40 + 8);
      }
      _iStack_40 = CONCAT44(*(unsigned int *)
                             (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar2 & 0xffffffff) << 2)) +
                             (int)((uVar1 & 3) << 2)),(int)param_1);
      fn_828C4EA8(param_1,lVar4,uVar3,&iStack_40,param_3);
    } while (0 < (int)lVar4);
  }
  return;
}

