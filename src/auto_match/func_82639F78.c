#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_40;


void fn_82639F78(int param_1,__int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  unsigned int uStack_40;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x1c);
    uVar6 = *(int *)(param_3 + 0x18) + param_4;
    *(unsigned int *)((int)((-param_2 + 0xefU & 0xffffffff) << 3) + param_1) =
         ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
    *(int *)((int)((-param_2 + 0x11U & 0xffffffff) << 3) + param_1 + 0x6f4) = iVar1 - param_4;
    *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | param_6;
  }
  iVar1 = (int)((param_2 + 0xc57U & 0xffffffff) << 2);
  puVar2 = *(unsigned int **)(iVar1 + param_1);
  if (puVar2 != (unsigned int *)0x0) {
    if (*(unsigned int *)(param_1 + 0x2a9c) == 0) {
      if ((*(unsigned int *)(param_1 + 0x2aa0) & *puVar2) != 0) {
        puVar5 = *(unsigned __int64 **)(param_1 + 0x35a8);
        if (*(unsigned __int64 **)(param_1 + 0x35ac) <= puVar5) {
          puVar5 = (unsigned __int64 *)fn_8264B4A0(param_1);
        }
        *puVar5 = CONCAT44((unsigned int)puVar2 >> 2 | uStack_40 & 0x80000000,0xffffffff);
        *(unsigned __int64 **)(param_1 + 0x35a8) = puVar5 + 1;
      }
    }
    else {
      puVar2[2] = *(unsigned int *)(param_1 + 0x2a9c);
    }
  }
  iVar4 = param_1 + (int)param_2;
  *(int *)(iVar1 + param_1) = param_3;
  uVar3 = (param_5 & 0xffffffff) >> 2;
  *(char *)(iVar4 + 0x31a0) = (char)((param_5 & 0xffffffff) >> 2);
  if ((uVar3 != 0) && (uVar3 != *(unsigned char *)(iVar4 + 0x2ee8))) {
    *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x80000;
  }
  return;
}

