#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F664B0();
extern int fn_82F6E8D4();
extern int fn_82FE89F8();
extern int fn_82FFA510();
extern unsigned int lbl_832642F0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82FE90B0(__int64 param_1)

{
  __int64 lVar1;
  char cVar2;
  unsigned int *puVar3;
  char *pcVar5;
  unsigned __int64 uVar4;
  char *pcVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  
  puVar3 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar3 = register0x0000000c;
  lVar6 = param_1;
  do {
    pcVar7 = (char *)lVar6;
    lVar6 = lVar6 + 1;
  } while (*pcVar7 != '\0');
  lVar9 = ((lVar6 - param_1) - 1U & 0xffffffff) + 1;
  uVar8 = -lVar9 & 0xfffffff0;
  pcVar5 = (char *)fn_82F6E8D4();
  lVar6 = (ZEXT48(&stack0x00000000) - 0x80) + uVar8;
  *(unsigned int *)lVar6 = *puVar3;
  lVar10 = lVar6 + 0x50;
  pcVar7 = pcVar5;
  do {
    cVar2 = *pcVar7;
    ((char *)lVar10)[(int)pcVar7 - (int)pcVar5] = cVar2;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  cVar2 = *(char *)lVar10;
  lVar1 = lVar10;
  do {
    if (cVar2 == '\0') {
switchD_82f20fb0_default:
      uVar4 = fn_82FE89F8(lVar10);
      uVar8 = -lVar9 & 0xfffffff0;
      fn_82F6E8D4();
      *(unsigned int *)(lVar6 + uVar8) = *(unsigned int *)lVar6;
      lVar6 = lVar6 + uVar8 + 0x50;
      fn_82F664B0(lVar6,lVar9,lVar10);
      fn_82FFA510(lbl_832642F0,uVar4,lVar6);
      return uVar4;
    }
    if (*(char *)lVar1 == '.') {
      *(char *)lVar1 = '\0';
      goto switchD_82f20fb0_default;
    }
    lVar1 = lVar1 + 1;
    cVar2 = *(char *)lVar1;
  } while( true );
}

