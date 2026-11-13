typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_82D8B6C8();


void fn_8253ED48(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  bool bVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  iVar1 = *(int *)(param_1 + 0x7c0);
  if (iVar1 != 0) {
    uVar5 = (unsigned int)*(unsigned char *)(iVar1 + 0xe8);
    if (*(int *)(param_1 + 0x7d8) == 0) {
      iVar2 = *(int *)(param_1 + 0x7e0);
      if ((iVar2 == 4) || (bVar4 = true, iVar2 == 0)) {
        bVar4 = false;
      }
      if ((uVar5 == 4) && (bVar4)) {
        fn_82D8B6C8(iVar1,iVar2,1,0);
      }
    }
    else if ((uVar5 != 5) && (uVar5 != 4)) {
      *(unsigned int *)(param_1 + 0x7e0) = uVar5;
      fn_82D8B6C8(iVar1,4,1,0);
      puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_822E83E0(iVar1,auStack_30);
      puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_8240DEC0(iVar1,auStack_20);
    }
  }
  return;
}

