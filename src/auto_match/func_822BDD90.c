#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822B7900();
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
extern int fn_82D7E470();
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_822BDD90(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  unsigned int auStack_a0 [4];
  unsigned char auStack_90 [8];
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [8];
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned char auStack_50 [80];
  
  iVar4 = 0;
  uVar2 = fn_8251F720(param_2,0);
  if (uVar2 != 0) {
    uVar3 = fn_8251FBA8(uVar2);
    iVar4 = fn_8265CA60();
    fn_82A1DD38(iVar4,uVar2,uVar3);
  }
  *(unsigned int **)(iVar4 + 0x48) = auStack_a0;
  auStack_a0[0] = *(unsigned int *)(param_1 + 0x20);
  *(unsigned int *)(*(int *)(iVar4 + 0x48) + 4) = *(unsigned int *)(param_1 + 0x118);
  *(int *)(*(int *)(iVar4 + 0x48) + 8) = param_1 + 0x80;
  *(int *)(*(int *)(iVar4 + 0x48) + 0xc) = param_1 + 0xc0;
  *(unsigned int *)(iVar4 + 0x4c) = *(unsigned int *)(param_1 + 0x24c);
  *(int *)(iVar4 + 0x50) = param_1;
  uVar3 = fn_8235A120();
  iVar5 = fn_822B7900(uVar3,iVar4);
  uStack_88 = CONCAT44(param_1,(((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF));
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  cVar6 = fn_82D7E470(auStack_70);
  if (cVar6 == '\0') {
    uStack_80 = uStack_68;
    uStack_78 = uStack_60;
  }
  uVar1 = *(unsigned int *)(iVar5 + 0x3c);
  uVar3 = fn_823B3808(auStack_50,auStack_90);
  fn_822C9BF8(uVar1,param_1 + 0x748,uVar3);
  fn_822DBD60(auStack_90);
  fn_8265CAA0(iVar4);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return iVar5;
}

