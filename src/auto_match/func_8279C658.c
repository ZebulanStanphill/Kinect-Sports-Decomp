extern unsigned int *auStack_30;
extern unsigned fn_8267BED0(int,unsigned,void *);
extern int fn_8279C4B8();
extern int fn_8279C5F0();


void fn_8279C658(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int auStack_30 [1];
  
  *(unsigned int *)(param_1 + 0x1c) = param_2;
  *(unsigned int *)(param_1 + 0x20) = param_3;
  if (*(void **)(param_1 + 0x14) == 0) {
    auStack_30[0] = 0x144;
    iVar1 = fn_8267BED0(param_1,0xb0,auStack_30);
    uVar2 = (unsigned)iVar1 != 0 ? fn_8279C4B8(iVar1) : 0;
    *(unsigned int *)(param_1 + 0x14) = uVar2;
  }
  if(param_3<param_2) { uVar4=param_3; param_3=param_2; param_2=uVar4; }
  puVar3 = (unsigned int *)fn_8279C5F0(param_1);
  uVar4 = param_3 - param_2;
  if ((*puVar3 != param_2) || (puVar3[1] != uVar4)) {
    *puVar3 = param_2;
    puVar3[1] = uVar4;
    iVar1 = *(int *)(param_1 + 0x14);
    *(unsigned char *)(iVar1 + 0x18) = 0;
    *(unsigned char *)(iVar1 + 0x19) = 0;
  }
  return;
}

