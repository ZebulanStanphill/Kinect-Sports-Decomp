extern unsigned int *auStack_40;
extern int fn_83016CE8();
extern int fn_83016D40();
extern int fn_83017A30();
extern int fn_830197E8();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_83017C20(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int *puStack_48;
  unsigned int *puStack_44;
  unsigned char auStack_40 [16];
  
  RtlEnterCriticalSection(param_1 + 0x720);
  if ((param_2 & 0xffffffff) == 0) {
    fn_83016D40(param_1 + 4);
  }
  else {
    fn_83016CE8(&iStack_50,param_1 + 4);
    uVar4 = uStack_4c;
joined_r0x83017c6c:
    uStack_4c = uVar4;
    if (puStack_48 != (unsigned int *)0x0) {
      while ((unsigned __int64)(unsigned int)puStack_48[2] != (param_2 & 0xffffffff)) {
        puVar1 = (unsigned int *)*puStack_48;
        puStack_44 = puStack_48;
        while (puStack_48 = puVar1, puStack_48 == (unsigned int *)0x0) {
          uVar4 = uVar4 + 1;
          if (0xc0 < uVar4) goto joined_r0x83017c6c;
          puStack_44 = (unsigned int *)0x0;
          uStack_4c = uVar4;
          puVar1 = *(unsigned int **)(uVar4 * 4 + iStack_50);
        }
      }
      piVar3 = (int *)fn_830197E8(auStack_40,param_1 + 4,&iStack_50);
      iStack_50 = *piVar3;
      uVar4 = piVar3[1];
      puStack_48 = (unsigned int *)piVar3[2];
      puStack_44 = (unsigned int *)piVar3[3];
      goto joined_r0x83017c6c;
    }
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x6a0); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    fn_83017A30(param_1,puVar1 + 1);
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x6e0); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    for (puVar2 = (unsigned int *)puVar1[6]; puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      (**(int (***)())(*(int *)puVar2[1] + 4))((int *)puVar2[1],0,param_2);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

