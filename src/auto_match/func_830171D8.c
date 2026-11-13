extern unsigned int *auStack_40;
extern int fn_83016CE8();
extern int fn_83016D40();
extern int fn_830197E8();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830171D8(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int *puStack_48;
  unsigned int *puStack_44;
  unsigned char auStack_40 [16];
  
  RtlEnterCriticalSection(param_1 + 0x720);
  if ((param_2 & 0xffffffff) == 0) {
    fn_83016D40(param_1 + 0x310);
  }
  else {
    fn_83016CE8(&iStack_50,param_1 + 0x310);
    uVar3 = uStack_4c;
joined_r0x83017224:
    uStack_4c = uVar3;
    if (puStack_48 != (unsigned int *)0x0) {
      while ((unsigned __int64)(unsigned int)puStack_48[2] != (param_2 & 0xffffffff)) {
        puVar1 = (unsigned int *)*puStack_48;
        puStack_44 = puStack_48;
        while (puStack_48 = puVar1, puStack_48 == (unsigned int *)0x0) {
          uVar3 = uVar3 + 1;
          if (0xc0 < uVar3) goto joined_r0x83017224;
          puStack_44 = (unsigned int *)0x0;
          uStack_4c = uVar3;
          puVar1 = *(unsigned int **)(uVar3 * 4 + iStack_50);
        }
      }
      piVar2 = (int *)fn_830197E8(auStack_40,param_1 + 0x310,&iStack_50);
      iStack_50 = *piVar2;
      uVar3 = piVar2[1];
      puStack_48 = (unsigned int *)piVar2[2];
      puStack_44 = (unsigned int *)piVar2[3];
      goto joined_r0x83017224;
    }
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x6c0); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    (**(int (***)())(*(int *)puVar1[1] + 4))((int *)puVar1[1],0,param_2);
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

