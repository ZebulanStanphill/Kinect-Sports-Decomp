extern unsigned int *auStack_430;
extern int memcpy();


void fn_822AEB40(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5,
                  int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *in_stack_00000054;
  unsigned char auStack_430 [976];
  
  iVar2 = (int)param_1;
  uVar1 = *(unsigned int *)((int)((param_2 + 0x236d & 0xffffffff) << 2) + iVar2);
  uVar4 = (unsigned __int64)uVar1;
  if (uVar1 == 0xffffffff) {
    uVar4 = param_2;
  }
  memcpy(auStack_430,uVar4 * 1000 + param_1 + 0x128,1000);
  memcpy(param_3,auStack_430,1000);
  *param_4 = (int)((uVar4 + 0x2278 & 0xffffffff) << 2) + iVar2;
  *param_5 = (int)((uVar4 + 0x229b & 0xffffffff) << 2) + iVar2;
  *param_6 = (int)((uVar4 + 0x22be & 0xffffffff) << 2) + iVar2;
  if (*(int *)((int)((uVar4 + 0x22e1 & 0xffffffff) << 2) + iVar2) != 0) {
    uVar3 = 0;
    if (*(int *)((int)((uVar4 + 0x2304 & 0xffffffff) << 2) + iVar2) == 0) goto code_r0x822aec08;
  }
  uVar3 = 1;
code_r0x822aec08:
  *param_7 = uVar3;
  *param_8 = *(unsigned int *)((int)((uVar4 + 8999 & 0xffffffff) << 2) + iVar2);
  *in_stack_00000054 = *(unsigned int *)((int)((uVar4 + 0x234a & 0xffffffff) << 2) + iVar2);
  return;
}

