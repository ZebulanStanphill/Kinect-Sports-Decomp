extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82243DA8();
extern int fn_8288B760();
extern int fn_828AC428();
extern int fn_828AC488();
extern unsigned int uStack_68;


void fn_82242A30(int param_1)

{
  int iVar1;
  unsigned __int64 *puVar2;
  char cVar4;
  __int64 lVar3;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  unsigned char auStack_80 [24];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [56];
  
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x19) = 0;
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (cVar4 = fn_8288B760(), cVar4 != '\0')) {
    lVar3 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
    lVar6 = 7;
    puVar2 = &uStack_68;
    do {
      puVar5 = puVar2;
      puVar2 = puVar5 + 1;
      *puVar2 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(unsigned int *)(puVar5 + 2) = 0;
    fn_828AC428(auStack_80);
    fn_82243DA8(lVar3 + 0x48,auStack_60,auStack_80,0);
    fn_828AC488(auStack_80);
  }
  return;
}

