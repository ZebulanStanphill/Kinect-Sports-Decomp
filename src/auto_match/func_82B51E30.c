#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA66A8();
extern int fn_82B50418();
extern unsigned int uStack_60;


void fn_82B51E30(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
                  int param_6,char param_7)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uStack_60;
  
  iVar1 = (int)param_3 * 0x28;
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar1 + 4);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  if ((param_7 != '\0') && ((uVar3 & 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar3 = param_5 + param_6;
  if (param_5 < uVar3) {
    puVar4 = (unsigned __int64 *)(param_5 * 8 + param_4);
    do {
      if ((param_4 == 0) || (*(int *)puVar4 == 0)) {
        uStack_60 = CONCAT44((((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF),
                             (param_5 & 0x3fff) << 2 |
                             (unsigned int)((param_3 & 0xffffffff) << 0x11) | (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) & 0x10000) |
                    0x100000000;
      }
      else if (param_7 == '\0') {
        uStack_60 = *puVar4;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc) + iVar1;
        uStack_60 = CONCAT44(puVar4,(int)(((unsigned __int64)param_5 & 0x3fff | (param_3 & 0x1ffff) << 0xf)
                                         << 2)) | 3;
        *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar2 + 4) | 2;
      }
      fn_82B50418(param_2,uStack_60);
      param_5 = param_5 + 1;
      puVar4 = puVar4 + 1;
    } while (param_5 < uVar3);
  }
  return;
}

