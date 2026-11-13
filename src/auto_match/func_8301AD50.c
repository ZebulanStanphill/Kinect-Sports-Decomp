extern unsigned int *auStack_40;
extern int fn_82FA5190();
extern int fn_83016CE8();
extern int fn_830197E8();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8301AD50(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int *puStack_48;
  unsigned int *puStack_44;
  unsigned char auStack_40 [16];
  
  if (*(int *)(param_1 + 0x24) != -1) {
    fn_83016CE8(&stack_pair_50.first,param_1 + 0x24);
    uVar4 = stack_pair_50.second;
joined_r0x8301ad80:
    stack_pair_50.second = uVar4;
    if (puStack_48 != (unsigned int *)0x0) {
      while (puStack_48[1] == 0) {
        puVar1 = (unsigned int *)*puStack_48;
        puStack_44 = puStack_48;
        while (puStack_48 = puVar1, puStack_48 == (unsigned int *)0x0) {
          uVar4 = uVar4 + 1;
          if (0xc0 < uVar4) goto joined_r0x8301ad80;
          puStack_44 = (unsigned int *)0x0;
          stack_pair_50.second = uVar4;
          puVar1 = *(unsigned int **)(uVar4 * 4 + stack_pair_50.first);
        }
      }
      puVar1 = (unsigned int *)puStack_48[2];
      uVar4 = puVar1[0x17];
      puVar1[0x17] = (int)((unsigned __int64)uVar4 - 1);
      uVar2 = lbl_831BC768;
      if ((__int64)((unsigned __int64)uVar4 - 1) < 1) {
        (**(int (***)())*puVar1)(puVar1,0);
        fn_82FA5190(uVar2,puVar1);
      }
      piVar3 = (int *)fn_830197E8(auStack_40,param_1 + 0x24,&stack_pair_50.first);
      stack_pair_50.first = *piVar3;
      uVar4 = piVar3[1];
      puStack_48 = (unsigned int *)piVar3[2];
      puStack_44 = (unsigned int *)piVar3[3];
      goto joined_r0x8301ad80;
    }
  }
  return;
}

