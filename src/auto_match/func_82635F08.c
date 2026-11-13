#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82637300();
extern int fn_82F65390();
extern int fn_82F68CC0();
extern unsigned int uStack_40;


void fn_82635F08(int param_1,unsigned int param_2,__int64 param_3)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  char *pcVar5;
  unsigned __int64 uVar4;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uStack_40;
  
  iVar3 = fn_82F65390(param_3,0xffffffff821cc068,0xe);
  lVar6 = param_3;
  if (iVar3 == 0) {
    param_3 = param_3 + 10;
    lVar6 = param_3;
  }
  do {
    pcVar5 = (char *)param_3;
    param_3 = param_3 + 1;
  } while (*pcVar5 != '\0');
  uVar4 = (param_3 - lVar6) - 1;
  uVar2 = uVar4 & 0xffffffff;
  uStack_40 = CONCAT44(param_2,(int)uVar4);
  lVar7 = ((uVar2 + 3 & 0xffffffff) >> 2) + 2;
  fn_82637300((int *)(param_1 + 0x4dd0),lVar7,param_1 + 0x4dbc);
  if (-1 < *(int *)(param_1 + 0x4dbc)) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x4dd0);
    *(unsigned int *)((int)puVar1 + (int)lVar7 * 4 + -4) = 0;
    *puVar1 = uStack_40;
    fn_82F68CC0(puVar1 + 1,lVar6,uVar2);
  }
  return;
}

