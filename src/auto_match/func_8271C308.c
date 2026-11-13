typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826A70D0();
extern int fn_8271BF18();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8271C308(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int uStack_30;
  unsigned int *apuStack_2c [11];
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    cVar4 = fn_82695468(param_1,0x1b);
    bVar8 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      fn_826954C0(param_1,0xffffffff8200ee50,0,0);
    }
    else {
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
        uVar7 = 0;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_2c,uVar3,uVar1,0xffffffffffffffff,0);
      fn_8268B330(&uStack_30);
      uVar1 = *apuStack_2c[0];
      uVar3 = fn_82693A98(apuStack_2c);
      fn_826A70D0(uVar1,uVar3,&uStack_30);
      lVar5 = uVar7 + 0x10;
      if ((uVar7 & 0xffffffff) == 0) {
        lVar5 = 0;
      }
      fn_8271BF18(*(unsigned int *)(param_1 + 0x18),lVar5,&uStack_30);
      lVar5 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar7 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
          *puVar6 = uVar2;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if (uVar7 == 1) {
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

