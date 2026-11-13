#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_5c;
extern unsigned int *auStack_7c;
extern int fn_8267C498();
extern int fn_826C6248();
extern int fn_826C8C70();
extern int fn_826E7408();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E7B08();
extern int fn_826E8AF0();
extern int fn_826E8C68();
extern int fn_826E92E8();
extern int fn_826E9330();
extern unsigned int iStack_80;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


__int64 fn_826FA300(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  char cVar7;
  int iVar6;
  unsigned char *puVar8;
  int iVar9;
  __int64 lVar10;
  int iStack_80;
  unsigned char auStack_7c [32];
  unsigned char auStack_5c [12];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  lVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30)) +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
  lVar5 = fn_826E7408();
  cVar7 = fn_826E7438(param_1);
  if (cVar7 != '\0') {
    fn_826C6248(&iStack_80);
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    iVar9 = *(int *)(param_1 + 0x2c) + 2;
    puVar8 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[1];
    uVar2 = *puVar8;
    *(int *)(param_1 + 0x2c) = iVar9;
    *(unsigned char *)(param_1 + 0x15) = 0;
    uStack_3c = (unsigned int)CONCAT11(uVar1,uVar2);
    if (*(int *)(param_1 + 0x30) - iVar9 < 2) {
      fn_826E7800(param_1,2);
    }
    puVar8 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[1];
    uVar2 = *puVar8;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_40 = (unsigned int)CONCAT11(uVar1,uVar2);
    fn_826E8AF0(param_1,auStack_5c);
    fn_826C8C70(param_1,0xffffffff8200dc5c,uStack_3c & 0xffff,uStack_40);
    fn_826E9330(param_1,auStack_5c);
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x34);
    iVar6 = fn_826E7408(param_1);
    if ((iVar9 - iVar3) + iVar4 < iVar6) {
      fn_826E8C68(param_1,auStack_7c);
      fn_826C8C70(param_1,0xffffffff8200dc50);
      fn_826E92E8(param_1,auStack_7c);
    }
    fn_826E7B08(param_1,lVar10);
    if (iStack_80 != 0) {
      fn_8267C498();
    }
  }
  return lVar5 - lVar10;
}

