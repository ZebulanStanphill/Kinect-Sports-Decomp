extern int fn_82AD1978();
typedef struct { unsigned value,tag; } Argument_82B4C710;
extern unsigned fn_82B4BAA8(int,Argument_82B4C710 *);
extern int fn_82B841E8();
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;


unsigned int fn_82B4C710(int param_1,Argument_82B4C710 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  unsigned uVar3;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uStack00000018;
  

  uVar4 = fn_82B841E8(param_1,*(unsigned int *)(param_1 + 0x234),0,0x3c,1,1);
  uVar3 = fn_82B4BAA8(param_1,&param_2);
  uVar5 = fn_82AD1978(uVar4,uVar3);
  *(unsigned int *)(uVar4 + 0x2c) = uVar5;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar6 = (unsigned int *)(iVar1 + 0x18);
  uVar2 = uVar4 & 0xfffffffe;
  puVar6 = (unsigned int *)(iVar1 + 0x18);
  { unsigned int *node = (unsigned int *)(uVar2 + 0x24);
  *node = *puVar6;
  *(unsigned int *)(*puVar6 & 0xfffffffe) = (unsigned int)node - 0x24;
  node[1] = (unsigned int)puVar6 - 0x24U | 1;
  *puVar6 = (unsigned int)(node + 1); }
  return uVar4;
}

