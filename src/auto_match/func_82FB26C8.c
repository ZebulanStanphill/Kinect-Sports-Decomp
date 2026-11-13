extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB2380();
extern int fn_82FB6A10();
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64 fn_82FB26C8(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  
  puStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar5 = fn_82FB6A10(param_1,&stack0x0000001c,&stack0x00000024,0);
  uVar3 = puStack0000001c[1];
  uVar4 = puStack0000001c[2];
  cVar2 = *(char *)(puStack0000001c + 3);
  *(unsigned int *)(param_1 + 0xcc) = *puStack0000001c;
  *(unsigned int *)(param_1 + 0xc4) = uVar3;
  *(unsigned int *)(param_1 + 200) = uVar4;
  *(char *)(param_1 + 0xd0) = '\x01' - (cVar2 == '\0');
  puVar1 = (unsigned int *)((int)puStack0000001c + 0xd);
  uVar9 = (unsigned __int64)*puVar1;
  puStack0000001c = (unsigned int *)((int)puStack0000001c + 0x11);
  if (uVar9 != 0) {
    iVar6 = fn_82FA5060(lbl_831BC768,*puVar1 << 3);
    if (iVar6 == 0) {
      uVar5 = 2;
    }
    else {
      if (uVar9 != 0) {
        puVar8 = (unsigned int *)(iVar6 + -4);
        uVar10 = uVar9;
        do {
          puVar7 = puStack0000001c + 1;
          puVar8[1] = *puStack0000001c;
          puStack0000001c = puStack0000001c + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = *puVar7;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      fn_82FB2380(param_1,uVar9,iVar6);
      fn_82FA5190(lbl_831BC768,iVar6);
    }
  }
  return uVar5;
}

