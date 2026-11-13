extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82C038C8();
extern int memset();


unsigned __int64 fn_82C145D0(unsigned __int64 *param_1,unsigned __int64 param_2)

{
  unsigned short *puVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned char *apbStack_90 [16];

  uVar7 = *param_1;
  apbStack_90[0] = (unsigned char *)0x0;
  uVar6 = 0;
  uVar5 = ((param_2 & 0xffffffff) + uVar7) - 0x18;
  if (*(int *)(param_1 + 0x1a) == 0) {
    puVar2 = (unsigned int *)fn_8265C940(8,0x248c8000);
    *(unsigned int **)(param_1 + 0x1a) = puVar2;
    if (puVar2 == (unsigned int *)0x0) {
      uVar6 = 5;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      if (uVar5 < uVar7 + 2) {
        uVar6 = 6;
      }
      else {
        iVar3 = fn_82C038C8(param_1,uVar7,2,apbStack_90);
        if (iVar3 == 2) {
          lVar4 = (unsigned __int64)apbStack_90[0][1] * 0x100 + (unsigned __int64)*apbStack_90[0];
          *(short *)puVar2 = (short)lVar4;
          lVar4 = lVar4 * 0x10;
          apbStack_90[0] = apbStack_90[0] + 2;
          uVar7 = fn_8265C940(lVar4,0x248c8000);
          puVar2[1] = (int)uVar7;
          if ((uVar7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(uVar7,0,lVar4);
          }
          uVar6 = 5;
        }
        else {
          uVar6 = 3;
        }
      }
    }
    puVar1 = *(unsigned short **)(param_1 + 0x1a);
    if (puVar1 != (unsigned short *)0x0) {
      if (*(int *)(puVar1 + 2) != 0) {
        uVar8 = 0;
        if (*puVar1 != 0) {
          iVar3 = 0;
          do {
            fn_8265C990(*(unsigned int *)(*(int *)(puVar1 + 2) + iVar3 + 0xc),0x248c8000);
            uVar8 = uVar8 + 1;
            iVar3 = iVar3 + 0x10;
          } while (uVar8 < *puVar1);
        }
        fn_8265C990(*(unsigned int *)(puVar1 + 2),0x248c8000);
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      fn_8265C990(*(unsigned int *)(param_1 + 0x1a),0x248c8000);
      *(unsigned int *)(param_1 + 0x1a) = 0;
    }
  }
  *param_1 = uVar5;
  return uVar6;
}
