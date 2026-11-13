typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7078();
extern int fn_822C8B40();
extern int fn_822EAAC8();
extern int fn_822FAEB8();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern int fn_8265C9E0();
extern unsigned int iStack_6c;
extern unsigned int uStack_64;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_822EA400(int *param_1,int param_2,int param_3,unsigned int param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  char cVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  char in_RESERVE;
  unsigned char bVar12;
  unsigned int auStack_80 [2];
  char *apcStack_78 [2];
  char *pcStack_70;
  int iStack_6c;
  int (**pcStack_68)();
  unsigned int uStack_64;
  unsigned char auStack_50 [4];
  int *piStack_4c;
  
  uVar2 = *(unsigned int *)(param_2 + 0x48);
  uVar3 = *(unsigned int *)(param_2 + 0x44);
  apcStack_78[0] = "idleset_warmup";
  pcStack_70 = "warmup";
  fn_824060E8(auStack_80,param_2 + 0x34);
  fn_822C7078(auStack_50,auStack_80,uVar3,uVar2);
  auStack_80[0] = 0;
  pcStack_68 = fn_822FAEB8;
  uVar2 = *(unsigned int *)(param_2 + 0x80);
  uStack_64 = param_4;
  uVar6 = fn_8265C9E0(0xa8);
  bVar1 = (uVar6 & 0xffffffff) == 0;
  bVar12 = bVar1 << 1;
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_822EAAC8(uVar6,&pcStack_70,auStack_50,uVar2,apcStack_78,auStack_80,&pcStack_68)
    ;
  }
  iVar5 = (int)uVar6;
  iVar7 = fn_82365BD8(&pcStack_70,param_3);
  fn_82376640(uVar6 + 0x40,iVar7);
  if (*(int *)(iVar7 + 4) != 0) {
    fn_822315A0();
  }
  pcStack_70 = (char *)0x0;
  iStack_6c = 0;
  if ((uVar6 & 0xffffffff) != 0) {
    cVar8 = fn_8223AAC0(uVar6);
    bVar12 = (cVar8 == '\0') << 1;
    if (cVar8 != '\0') {
      pcStack_70 = (char *)(iVar5 + 0x10);
      iStack_6c = iVar5;
    }
  }
  fn_822C8B40(param_2,&pcStack_70);
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((uVar6 & 0xffffffff) != 0) {
    cVar8 = fn_8223AAC0(uVar6);
    bVar12 = (cVar8 == '\0') << 1;
    if (cVar8 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar5;
      *param_1 = iVar5 + 0x10;
    }
    fn_822315A0(uVar6);
  }
  if (ZEXT48(piStack_4c) != 0) {
    lVar10 = ZEXT48(piStack_4c) + 8;
    do {
      puVar11 = (unsigned int *)lVar10;
      lVar9 = (unsigned __int64)*puVar11 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar9,0,lVar10);
        *puVar11 = uVar4;
        bVar12 = 2;
      }
    } while (!(bool)(bVar12 >> 1 & 1));
    if ((int)lVar9 == 0) {
      (**(int (***)())(*piStack_4c + 4))();
    }
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

