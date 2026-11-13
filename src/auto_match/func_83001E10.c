extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


unsigned __int64 fn_83001E10(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int *piVar5;
  double dVar6;
  
  if (((*(unsigned char *)(param_1 + 0x3e) & 0x80) == 0) &&
     (piVar5 = *(int **)(param_1 + 0x10), piVar5 != (int *)0x0)) {
    uVar3 = (**(int (***)())(*piVar5 + 0xec))(piVar5);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x28) + 0x3c);
  if ((*(unsigned int *)(param_1 + 0x40) >> 0x1c & 1) == 0) {
    puVar2 = *(unsigned int **)(param_1 + 0x54);
    if (puVar2 != (unsigned int *)0x0) {
      for (puVar4 = (unsigned int *)*puVar2;
          (puVar4 != (unsigned int *)puVar2[1] && ((unsigned __int64)*puVar4 != (param_2 & 0xffffffff)));
          puVar4 = puVar4 + 2) {
      }
      piVar5 = (int *)(-(unsigned int)((unsigned int *)puVar2[1] != puVar4) & (unsigned int)(puVar4 + 1));
      if (piVar5 != (int *)0x0) {
        return (unsigned __int64)(*(unsigned char *)(*piVar5 + 0x3d) >> 4) & 1;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x24) + 0x3d);
    }
    return (unsigned __int64)(bVar1 >> 4) & 1;
  }
  dVar6 = (double)fn_830177C8(lbl_832642FC,param_1,0x1c,param_2);
  return (unsigned __int64)(dVar6 != (double)lbl_821AAD20);
}

