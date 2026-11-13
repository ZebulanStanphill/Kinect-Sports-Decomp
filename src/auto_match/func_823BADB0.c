#define _iStack00000010 ((*(unsigned __int64*)&iStack00000010))
#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern unsigned int *auStack_1c;
extern int fn_822AF200();
extern int fn_8235A028();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_823BADB0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uVar4;
  int iStack00000010;
  unsigned int uStack00000014;
  int iStack00000018;
  unsigned int uStack0000001c;
  unsigned int *puStack_20;
  unsigned char auStack_1c [4];
  
  iStack00000018 = (int)((unsigned __int64)param_2 >> 0x20);
  uStack0000001c = (unsigned int)param_2;
  if (*(unsigned int *)(iStack00000018 + 8) <= uStack0000001c) {
    uStack0000001c = uStack0000001c - *(unsigned int *)(iStack00000018 + 8);
  }
  iStack00000010 = (int)((unsigned __int64)param_1 >> 0x20);
  uStack00000014 = (unsigned int)param_1;
  if (*(unsigned int *)(iStack00000010 + 8) <= uStack00000014) {
    uStack00000014 = uStack00000014 - *(unsigned int *)(iStack00000010 + 8);
  }
  puVar2 = *(unsigned __int64 **)(*(int *)(iStack00000018 + 4) + uStack0000001c * 4);
  puVar3 = *(unsigned __int64 **)(*(int *)(iStack00000010 + 4) + uStack00000014 * 4);
  uVar4 = *puVar3;
  *puVar3 = *puVar2;
  *puVar2 = uVar4;
  uVar1 = *(unsigned int *)((int)puVar3 + 0xc);
  *(unsigned int *)((int)puVar3 + 0xc) = *(unsigned int *)((int)puVar2 + 0xc);
  *(unsigned int *)((int)puVar2 + 0xc) = uVar1;
  uVar1 = *(unsigned int *)(puVar3 + 1);
  *(unsigned int *)(puVar3 + 1) = *(unsigned int *)(puVar2 + 1);
  *(unsigned int *)(puVar2 + 1) = uVar1;
  _iStack00000010 = param_1;
  _iStack00000018 = param_2;
  fn_8235A028(&puStack_20,puVar3 + 2);
  uVar4 = fn_8235A028(auStack_1c,puVar2 + 2);
  fn_822AF200(puVar3 + 2,uVar4);
  uVar4 = fn_8235A028(auStack_1c,&puStack_20);
  fn_822AF200(puVar2 + 2,uVar4);
  if (puStack_20 != (unsigned int *)0x0) {
    (**(int (***)())*puStack_20)(puStack_20,1);
  }
  return;
}

