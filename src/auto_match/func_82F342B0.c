extern int fn_82F33C28();
extern int fn_82F33CC8();
extern int fn_82F33DD0();
extern int fn_82F33F20();
extern int fn_82F33FE0();
extern int memcpy();


__int64 fn_82F342B0(unsigned short *param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned short *puVar4;
  unsigned short * apuStack_30;
  
  apuStack_30 = (unsigned short *)0x0;
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (param_1 == (unsigned short *)0x0) {
    return 0;
  }
  uVar1 = param_1[1];
  if ((uVar1 & 0xe0) == 0) {
    lVar3 = fn_82F33C28(*param_1,&apuStack_30);
  }
  else {
    if ((uVar1 & 0x20) != 0) {
      lVar3 = fn_82F33CC8(0x24,*param_1,&apuStack_30);
      puVar4 = apuStack_30;
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      iVar2 = *(int *)(param_1 + -2);
      *(int *)(apuStack_30 + -2) = iVar2;
      if (iVar2 != 0) {
        (**(int (***)())(**(int **)(apuStack_30 + -2) + 4))();
      }
      goto LAB_82f343ac;
    }
    if ((uVar1 & 0x40) != 0) {
      lVar3 = fn_82F33CC8(0xd,*param_1,&apuStack_30);
      puVar4 = apuStack_30;
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      memcpy(apuStack_30 + -8,param_1 + -8,0x10);
      goto LAB_82f343ac;
    }
    puVar4 = (unsigned short *)0x0;
    if ((uVar1 & 0x80) == 0) goto LAB_82f343ac;
    lVar3 = fn_82F33CC8(*(unsigned int *)(param_1 + -2) & 0xffff,*param_1,&apuStack_30);
  }
  puVar4 = apuStack_30;
  if ((int)lVar3 < 0) {
    return lVar3;
  }
LAB_82f343ac:
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = *param_1;
  puVar4[1] = param_1[1] & 0xefe8;
  *(unsigned int *)(puVar4 + 2) = *(unsigned int *)(param_1 + 2);
  memcpy(puVar4 + 8,param_1 + 8,(unsigned __int64)*param_1 << 3);
  lVar3 = fn_82F33DD0(puVar4);
  if ((-1 < lVar3) && (lVar3 = fn_82F33FE0(param_1,puVar4), -1 < lVar3)) {
    *param_2 = puVar4;
    return 0;
  }
  fn_82F33F20(puVar4,1);
  return lVar3;
}

