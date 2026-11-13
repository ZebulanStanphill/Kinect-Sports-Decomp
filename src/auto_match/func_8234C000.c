extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8234D5A0();
extern int fn_827F0FB8();
extern int fn_827F4818();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_8234C000(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned char auStack_78 [4];
  int iStack_74;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [96];
  
  if (*(int *)(param_1 + 0x118) != 0) {
    fn_827F4818(&stack0x00000000 + -0x60,0);
    puVar2 = (unsigned int *)fn_8234D5A0(&stack0x00000000 + -0x80,&stack0x00000000 + -0x60);
    uVar3 = 0;
    uVar4 = 0;
    if ((unsigned int *)(&stack0x00000000 + -0x70) != puVar2) {
      uVar4 = puVar2[1];
      puVar2[1] = 0;
      uVar3 = *puVar2;
      *puVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 300);
    *(unsigned int *)(param_1 + 300) = uVar4;
    *(unsigned int *)(param_1 + 0x128) = uVar3;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_7c != 0) {
      fn_822315A0();
    }
    fn_827F4818(&stack0x00000000 + -0x60,0,*(unsigned int *)(param_1 + 0x128),
                 *(unsigned int *)(param_1 + 0x144));
    puVar2 = (unsigned int *)fn_8234D5A0(&stack0x00000000 + -0x78,&stack0x00000000 + -0x60);
    uVar3 = 0;
    uVar4 = 0;
    if ((unsigned int *)(&stack0x00000000 + -0x70) != puVar2) {
      uVar4 = puVar2[1];
      puVar2[1] = 0;
      uVar3 = *puVar2;
      *puVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x158);
    *(unsigned int *)(param_1 + 0x158) = uVar4;
    *(unsigned int *)(param_1 + 0x154) = uVar3;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_74 != 0) {
      fn_822315A0();
    }
    fn_827F0FB8(param_2,*(unsigned int *)(param_1 + 0x118),0);
    fn_827F0FB8(param_2,*(unsigned int *)(param_1 + 0x128),0);
    fn_827F0FB8(param_2,*(unsigned int *)(param_1 + 0x144),0);
    fn_827F0FB8(param_2,*(unsigned int *)(param_1 + 0x154),1);
    param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x154);
  }
  return param_3;
}

