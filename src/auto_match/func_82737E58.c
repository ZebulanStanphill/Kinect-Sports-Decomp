typedef unsigned char bool;
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82697700();
extern int fn_8269A190();
extern int fn_827558F0();
extern unsigned int iStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82737E58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char bVar10;
  int iStack_40;
  unsigned int auStack_3c;
  
  cVar6 = fn_82695468(param_1,0x29);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar9 = 0;
    }
    if (((uVar9 & 0xffffffff) != 0) && (1 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar4 = fn_82697700(uVar3,uVar1);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      uVar5 = fn_82697700(uVar3,uVar1);
      if (*(int *)(param_1 + 0x1c) < 3) {
        uVar3 = 0;
      }
      else {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        uVar3 = fn_82695608(uVar3,uVar1);
      }
      if ((uVar5 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
        uVar5 = uVar4 + 1;
      }
      fn_827558F0(&auStack_3c,uVar9 + 0x30,uVar4,uVar5,uVar3);
      fn_8269A190(&iStack_40,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &auStack_3c);
      fn_82681838(*(unsigned int *)(param_1 + 4),&iStack_40);
      lVar7 = (unsigned __int64)*(unsigned int *)(iStack_40 + 8) - 1;
      bVar10 = (lVar7 == 0) << 1;
      *(int *)(iStack_40 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      lVar7 = ((unsigned __int64)auStack_3c & 0xfffffffc) + 4;
      do {
        puVar8 = (unsigned int *)lVar7;
        uVar9 = (unsigned __int64)*puVar8;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
          *puVar8 = uVar2;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (uVar9 == 1) {
        fn_8267BE38();
      }
    }
  }
  return;
}

