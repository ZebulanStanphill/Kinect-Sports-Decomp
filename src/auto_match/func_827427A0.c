extern unsigned int *auStack_40;
extern int fn_8268CD40();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82741A50();
extern int fn_82741C18();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827427A0(int param_1)

{
  char cVar2;
  unsigned int *puVar1;
  unsigned __int64 uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [48];
  
  cVar2 = fn_82695468(param_1,0xf);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xffffffff) != 0) {
      puVar1 = (unsigned int *)fn_82741A50(auStack_40,uVar3,*(unsigned int *)(param_1 + 0x18));
      stack_pair_60.first = *puVar1;
      stack_pair_60.second = puVar1[1];
      uStack_58 = puVar1[2];
      uStack_54 = puVar1[3];
      uStack_50 = puVar1[4];
      uStack_4c = puVar1[5];
      fn_8268CD40(puVar1,&stack_pair_60.first);
      fn_82741C18(uVar3,*(unsigned int *)(param_1 + 0x18),puVar1);
    }
  }
  return;
}

