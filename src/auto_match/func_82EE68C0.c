#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82EE62E8();
extern int fn_82EE6350();
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


unsigned __int64 fn_82EE68C0(int param_1,short param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  short sStack_40;
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  
  if (*(unsigned int *)(param_1 + 0x104) < 0xffff) {
    if (*(unsigned int *)(param_1 + 0x104) != 0) {
      uVar3 = 0;
      do {
        fn_82EE6350(param_1 + 0x48,uVar3,&sStack_40);
        if (*(short *)CONCAT22(sStack_40,uStack_3e) == param_2) {
          uVar1 = fn_82EE6350(param_1 + 0x48,uVar3,&sStack_40);
          uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)CONCAT22(sStack_40,uStack_3e);
          if (uVar1 == 0) {
            return 0xffffffff8000ffff;
          }
          *(unsigned int *)((int)uVar1 + 4) = param_3;
          return 0;
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < *(unsigned int *)(param_1 + 0x104));
    }
    sStack_40 = param_2;
    uStack_3c = param_3;
    lVar2 = fn_82EE62E8(param_1 + 0x48,CONCAT44(CONCAT22(param_2,uStack_3e),param_3),0);
    uVar1 = -(unsigned __int64)(lVar2 == 0) & 0xffffffff8007000e;
  }
  else {
    uVar1 = 0xffffffffc00d3a9a;
  }
  return uVar1;
}

