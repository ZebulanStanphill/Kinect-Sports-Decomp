extern int fn_82FB1B58();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82160788;


unsigned __int64 fn_82FB0C10(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int iVar6;
  double dVar7;
  
  dVar7 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 4);
  if (lbl_82005710 < dVar7) {
    puVar4 = (unsigned int *)fn_82FB1B58(param_1 + 0x98);
    if (puVar4 == (unsigned int *)0x0) {
      return 2;
    }
    *puVar4 = *param_2;
    dVar3 = lbl_82160788;
    dVar7 = dVar7 * lbl_82160788;
    puVar4[1] = param_2[1];
    puVar4[2] = (int)((*(double *)(param_2 + 2) + *(double *)(param_2 + 4)) * dVar3);
    puVar4[3] = (int)dVar7;
    uVar1 = (unsigned int)(*(double *)(param_2 + 8) * dVar3);
    trapWord(6,(unsigned __int64)uVar1,0);
    puVar4[4] = uVar1;
    uVar2 = (unsigned int)(*(double *)(param_2 + 4) * dVar3);
    lVar5 = (unsigned __int64)uVar2 - (__int64)((int)uVar2 / (int)uVar1) * (__int64)(int)uVar1;
    iVar6 = (int)lVar5;
    puVar4[5] = iVar6;
    trapWord(5,(unsigned __int64)uVar1 &
               ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),0xffff);
    if (lVar5 < 0) {
      puVar4[5] = uVar1 + iVar6;
    }
  }
  return 1;
}

