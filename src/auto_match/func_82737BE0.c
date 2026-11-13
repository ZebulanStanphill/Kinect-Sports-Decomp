typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268C6A8();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82697700();
extern int fn_8269A1F0();
extern int fn_82755698();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82737BE0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int uStack_30;
  unsigned int *apuStack_2c [11];
  
  cVar5 = fn_82695468(param_1,0x29);
  bVar9 = (cVar5 == '\0') << 1;
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar8 = 0;
    }
    if (((uVar8 & 0xffffffff) != 0) && (2 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar3 = fn_82697700(uVar3,uVar1);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      fn_82696D38(apuStack_2c,uVar4,uVar1,0xffffffffffffffff,0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,2);
      uVar4 = fn_82695608(uVar4,uVar1);
      fn_8268C6A8(&uStack_30,*apuStack_2c[0],apuStack_2c[0][4]);
      uVar3 = fn_82755698(uVar8 + 0x30,uVar3,((unsigned __int64)uStack_30 & 0xfffffffc) + 8,uVar4);
      fn_8269A1F0(*(unsigned int *)(param_1 + 4),uVar3);
      lVar6 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
      do {
        puVar7 = (unsigned int *)lVar6;
        uVar8 = (unsigned __int64)*puVar7;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar8 == 1) {
        fn_8267BE38();
      }
      uVar2 = apuStack_2c[0][2];
      apuStack_2c[0][2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_2c[0]);
      }
    }
  }
  return;
}

