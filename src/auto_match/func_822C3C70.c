#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822B7900();
extern int fn_822C4A30();
extern int fn_822C5DD0();
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_8235A120();
extern int fn_823B3808();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern unsigned int iStack_78;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_94;


int fn_822C3C70(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned char auStack_a0 [8];
  int (**pcStack_98)();
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [8];
  int iStack_78;
  unsigned int uStack_74;
  unsigned __int64 uStack_70;
  unsigned char auStack_60 [64];
  
  iVar5 = 0;
  uVar2 = fn_8251F720(param_2,0);
  if (uVar2 != 0) {
    uVar3 = fn_8251FBA8(uVar2);
    iVar5 = fn_8265CA60();
    fn_82A1DD38(iVar5,uVar2,uVar3);
  }
  *(unsigned char **)(iVar5 + 0x48) = auStack_90;
  *(unsigned char **)(iVar5 + 0x50) = auStack_a0;
  **(unsigned int **)(iVar5 + 0x48) = *(unsigned int *)(param_1 + 0x20);
  *(unsigned int *)(*(int *)(iVar5 + 0x48) + 4) = *(unsigned int *)(param_1 + 0x118);
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = param_1 + 0x80;
  *(int *)(*(int *)(iVar5 + 0x48) + 0xc) = param_1 + 0xc0;
  **(int **)(iVar5 + 0x50) = param_1;
  uVar3 = fn_8235A120();
  iVar6 = fn_822B7900(uVar3,iVar5);
  if (iVar6 != 0) {
    uStack_94 = 0;
    pcStack_98 = fn_822C4A30;
    iStack_78 = param_1;
    uVar3 = fn_822C5DD0(auStack_80,0x822c4a3000000000,CONCAT44(param_1,uStack_74),uStack_70);
    uVar1 = *(unsigned int *)(iVar6 + 0x3c);
    uVar4 = fn_823B3808(auStack_60,uVar3);
    fn_822C9BF8(uVar1,param_1 + 0x1c0,uVar4);
    fn_822DBD60(uVar3);
  }
  fn_8265CAA0(iVar5);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return iVar6;
}

