typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern int fn_82AA6648();
extern int fn_82F63CA0();
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;


void fn_82B20A98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uStack00000020;
  unsigned int uStack00000024;
  unsigned int uStack00000028;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if ((uVar1 & 1) == 0) {
    while (uVar1 != 0) {
      iVar6 = *(int *)(uVar1 + 8);
      uVar3 = 0;
      if (iVar6 != 0) {
        puVar5 = (unsigned int *)(uVar1 + 0x18);
        do {
          uStack00000020 = (unsigned int)((unsigned __int64)param_2 >> 0x20);
          if ((puVar5[-2] == uStack00000020) &&
             (uStack00000024 = (unsigned int)param_2, puVar5[-1] == uStack00000024)) {
            uStack00000028 = (unsigned int)((unsigned __int64)param_3 >> 0x20);
            bVar2 = true;
            if ((CONCAT44(*puVar5 ^ uStack00000028,*puVar5 ^ uStack00000028) & 0xfffffffffffffffb)
                != 0) goto LAB_82b20b0c;
          }
          else {
LAB_82b20b0c:
            bVar2 = false;
          }
          if (bVar2) {
            iVar4 = iVar6 + -1;
            *(int *)(uVar1 + 8) = iVar4;
            _uStack00000020 = param_2;
            _uStack00000028 = param_3;
            if (iVar4 == 0) {
              puVar5 = (unsigned int *)(uVar1 & 0xfffffffe);
              *(unsigned int *)(puVar5[1] & 0xfffffffe) = *puVar5;
              *(unsigned int *)(*puVar5 & 0xfffffffe) = puVar5[1];
              fn_82AA6648(param_1,uVar1,(unsigned __int64)*(unsigned int *)(uVar1 + 0xc) * 0xc + 0x10);
              return;
            }
            if (iVar6 - 1U <= uVar3) {
              return;
            }
            iVar6 = uVar3 * 0xc + uVar1;
            fn_82F63CA0(iVar6 + 0x10,iVar6 + 0x1c,(iVar4 - uVar3) * 0xc);
            return;
          }
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 3;
        } while (uVar3 < *(unsigned int *)(uVar1 + 8));
      }
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
  }
  return;
}

