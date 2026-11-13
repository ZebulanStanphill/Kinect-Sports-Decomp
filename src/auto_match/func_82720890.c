extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696AD0();
extern int fn_8271FB80();
extern int fn_8271FCF8();


void fn_82720890(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0x1c) >= 1) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    uVar3 = fn_82696AD0(uVar3,uVar1);
    puVar2 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 0;
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78;
    fn_8271FB80(lVar4,uVar3);
    fn_8271FCF8(lVar4,uVar3);
  }
  return;
}

