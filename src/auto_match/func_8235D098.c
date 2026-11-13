extern unsigned int *auStack_3c;
extern int fn_822315A0();
extern int fn_82361DD0();
extern int fn_8241C900();
extern int fn_8265C9E0();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_8235D098(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int auStack_3c [15];
  
  *(unsigned int *)(param_1 + 0x174) = 3;
  if ((*(unsigned int *)(param_1 + 0x15d4) != 0 && (*(unsigned int *)(param_1 + 0x15d4) & 0xff000000) < 0x7a000000)
     && ((iVar3 = *(int *)(param_1 + 0xa0), iVar3 == 0 ||
         ((*(int *)(iVar3 + 0x40) != 1 && ((iVar3 == 0 || (*(int *)(iVar3 + 0x40) != 2)))))))) {
    iVar3 = *(int *)(param_1 + 400);
    *(unsigned int *)(param_1 + 400) = 0;
    *(unsigned int *)(param_1 + 0x18c) = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    uStack_40 = *(unsigned int *)(param_1 + 0x9c);
    auStack_3c[0] = *(unsigned int *)(param_1 + 0x98);
    uStack_4c = 1;
    uStack_48 = 1;
    uStack_44 = 1;
    uVar2 = fn_8265C9E0(0x2010);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82361DD0(uVar2,0xffffffff821abfe4,param_1 + 0x15d4,auStack_3c,&uStack_40,
                                &uStack_44,&uStack_48,&uStack_4c);
    }
    iVar1 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar3;
    *(int *)(param_1 + 0x18c) = iVar3 + 0x10;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    fn_8241C900(*(unsigned int *)(param_1 + 0x2b20),(int *)(param_1 + 0x18c),0);
  }
  return;
}

