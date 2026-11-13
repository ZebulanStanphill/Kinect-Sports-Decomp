#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_40 ((*(unsigned __int64*)&uStack_40))
extern int fn_8287D518();
extern int fn_8287FD98();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int lbl_82022F88;
extern unsigned int lbl_82022FD8;
extern unsigned int lbl_82022FDC;
extern unsigned int lbl_82022FE0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828871B0(int *param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar3;
  char cVar4;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned int *puVar6;
  double dVar7;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  uVar3 = (**(int (***)())(*param_1 + 0x38))();
  iVar1 = param_1[6];
  cVar4 = fn_828821A0(iVar1);
  cVar5 = fn_82882218(iVar1);
  if ((cVar4 == '\0') && (cVar5 == '\0')) {
    uVar2 = fn_8287FD98();
    dVar7 = (double)fn_8287D518(uVar2,iVar1);
    uStack_3c = (unsigned int)(__int64)(dVar7 * (double)lbl_82022FD8);
    _uStack_40 = CONCAT44(uStack_3c,uStack_3c);
    if (uStack_3c < 0xfa) {
      puVar6 = &lbl_82022FDC;
    }
    else {
      puVar6 = &uStack_40;
    }
    if (3000 < *puVar6) {
      puVar6 = &lbl_82022FE0;
    }
    if ((int)uVar3 < (int)*puVar6) {
      uVar3 = *puVar6;
    }
    if ((int)uVar3 < 0) {
      uVar3 = lbl_82022F88;
    }
  }
  *(__int64 *)(param_1[0xe] + 8) = (int)uVar3 + param_2;
  iVar1 = param_1[0xe];
  if ((-1 < *(int *)(iVar1 + 0x10)) && (*(__int64 *)(iVar1 + 0x18) < 0)) {
    *(__int64 *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x10) + param_2;
  }
  return;
}

