#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_827EF888();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827EFC90(int param_1,unsigned short param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 *puVar7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  unsigned short *puVar10;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_50 [80];
  
  iVar2 = *(int *)(param_1 + 0x114);
  uStack_60 = 0;
  *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
  uVar4 = fn_82811438(auStack_50,&uStack_60,0x10);
  puVar5 = (unsigned int *)
           fn_82811080(0xffffffff8320a3e0,(unsigned __int64)*(unsigned short *)(param_1 + 0x124) * 0xe + 2,
                             uVar4);
  puVar10 = *(unsigned short **)(param_1 + 0x11c);
  puVar6 = *(unsigned int **)(param_1 + 0x120);
  *(unsigned int **)(param_1 + 0x114) = puVar5;
  puVar9 = (unsigned short *)(puVar5 + *(unsigned short *)(param_1 + 0x124));
  *(unsigned short **)(param_1 + 0x11c) = puVar9;
  puVar8 = puVar9 + *(unsigned short *)(param_1 + 0x124) + 1;
  *(unsigned short **)(param_1 + 0x120) = puVar8;
  if (puVar10 != (unsigned short *)0x0) {
    uVar1 = *puVar10;
    while (uVar1 < param_2) {
      *puVar5 = fn_827EF888;
      puVar5 = puVar5 + 1;
      *puVar9 = *puVar10;
      puVar9 = puVar9 + 1;
      *(unsigned int *)puVar8 = *puVar6;
      puVar3 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      *(unsigned int *)(puVar8 + 2) = *puVar3;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 1;
      uVar1 = *puVar10;
    }
  }
  *puVar5 = fn_827EF888;
  *puVar9 = param_2;
  puVar9 = puVar9 + 1;
  *(unsigned __int64 *)puVar8 = CONCAT44(param_3,param_4);
  if ((puVar10 != (unsigned short *)0x0) && (*puVar10 != 0xffff)) {
    puVar7 = (unsigned __int64 *)(puVar6 + -2);
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = fn_827EF888;
      *puVar9 = *puVar10;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 4;
      *(unsigned __int64 *)puVar8 = *puVar7;
      puVar10 = puVar10 + 1;
    } while (*puVar10 != 0xffff);
  }
  *puVar9 = 0xffff;
  if (iVar2 != 0) {
    uStack_60 = 3;
    uStack_5c = param_4;
    uVar4 = fn_82811438(auStack_50,&uStack_60,0x10);
    fn_82811238(0xffffffff8320a3e0,iVar2,uVar4);
  }
  return;
}

