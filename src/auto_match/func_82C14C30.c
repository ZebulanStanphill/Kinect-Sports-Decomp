extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82C038C8();
extern int memset();


unsigned __int64 fn_82C14C30(__int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned char *apbStack_9c [23];

  lVar7 = (param_3 & 0xffffffff) + *param_1;
  apbStack_9c[0] = (unsigned char *)0x0;
  lVar6 = lVar7 + 0x18;
  if (*(int *)(param_1 + 0x1d) == 0) {
    if (((param_2 & 0xffffffff) + lVar6) - 0x18 < lVar7 + 0x1aU) {
      uVar8 = 6;
    }
    else {
      iVar3 = fn_82C038C8(param_1,lVar6,2,apbStack_9c);
      if (iVar3 == 2) {
        lVar6 = (unsigned __int64)apbStack_9c[0][1] * 0x100 + (unsigned __int64)*apbStack_9c[0];
        if (lVar6 == 0) goto LAB_82c15144;
        apbStack_9c[0] = apbStack_9c[0] + 2;
        puVar4 = (unsigned short *)fn_8265C940(8,0x248c8000);
        *(unsigned short **)(param_1 + 0x1d) = puVar4;
        if (puVar4 == (unsigned short *)0x0) {
          uVar8 = 5;
        }
        else {
          *puVar4 = (short)lVar6;
          uVar5 = fn_8265C940(lVar6 * 0x14,0x248c8000);
          *(unsigned int *)(*(int *)(param_1 + 0x1d) + 4) = uVar5;
          if (*(int *)(*(int *)(param_1 + 0x1d) + 4) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(*(int *)(*(int *)(param_1 + 0x1d) + 4),0,lVar6 * 0x14);
          }
          uVar8 = 5;
        }
      }
      else {
        uVar8 = 3;
      }
    }
    psVar1 = *(short **)(param_1 + 0x1d);
    if (psVar1 != (short *)0x0) {
      iVar3 = *(int *)(psVar1 + 2);
      if (iVar3 != 0) {
        if (*psVar1 != 0) {
          uVar9 = 0;
          do {
            iVar2 = uVar9 * 0x14 + iVar3;
            fn_8265C990(*(unsigned int *)(iVar2 + 0xc),0x248c8000);
            fn_8265C990(*(unsigned int *)(iVar2 + 0x10),0x248c8000);
            uVar9 = uVar9 + 1 & 0xffff;
          } while (uVar9 < **(unsigned short **)(param_1 + 0x1d));
        }
        fn_8265C990(*(unsigned int *)(*(int *)(param_1 + 0x1d) + 4),0x248c8000);
      }
      fn_8265C990(*(unsigned int *)(param_1 + 0x1d),0x248c8000);
      *(unsigned int *)(param_1 + 0x1d) = 0;
    }
  }
  else {
LAB_82c15144:
    uVar8 = 0;
  }
  return uVar8;
}
