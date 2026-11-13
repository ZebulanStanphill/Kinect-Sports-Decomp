extern int fn_82297DB0();
extern int fn_822A3128();
extern unsigned int lbl_831D1328;


/* WARNING: Removing unreachable block (ram,0x822a1c04) */

void fn_822A1BC8(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  
  iVar2 = lbl_831D1328;
  iVar3 = lbl_831D1328 + 8;
  uVar1 = *(unsigned int *)(lbl_831D1328 + 8);
  uVar4 = (unsigned __int64)uVar1;
  if (uVar4 != *(unsigned int *)(lbl_831D1328 + 0xc)) {
    uVar6 = *(unsigned int *)(lbl_831D1328 + 0xc);
    if (uVar4 != uVar6) {
      do {
        fn_82297DB0(uVar4,1,0);
        uVar4 = uVar4 + 0x1c;
      } while ((uVar4 & 0xffffffff) != (unsigned __int64)uVar6);
    }
    *(unsigned int *)(iVar2 + 0xc) = uVar1;
  }
  uVar1 = *param_1;
  uVar6 = 0;
  if ((int)(param_1[1] - uVar1) / 0x1c != 0) {
    lVar5 = 0;
    do {
      fn_822A3128(iVar3,lVar5 + (unsigned __int64)uVar1);
      uVar1 = *param_1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (uVar6 < (unsigned int)((int)(param_1[1] - uVar1) / 0x1c));
  }
  return;
}

