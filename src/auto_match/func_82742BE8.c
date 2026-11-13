extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_82741A50();
extern int fn_82741C18();
extern int fn_82742B70();


void fn_82742BE8(int param_1)

{
  unsigned char *puVar1;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_40 [32];
  
  cVar4 = fn_82695468(param_1,0xf);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar6 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 & 0xffffffff) == 0) {
      puVar1 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 0;
    }
    else {
      uVar2 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x30,0);
      if ((uVar2 & 0xffffffff) != 0) {
        uVar6 = fn_82742B70(uVar2,*(unsigned int *)(param_1 + 0x18));
      }
      uVar3 = fn_82741A50(auStack_40,uVar5,*(unsigned int *)(param_1 + 0x18));
      fn_82741C18(uVar6,*(unsigned int *)(param_1 + 0x18),uVar3);
      fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar6);
      if ((uVar6 & 0xffffffff) != 0) {
        fn_826824B0(uVar6);
      }
    }
  }
  return;
}

