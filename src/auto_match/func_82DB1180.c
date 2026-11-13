extern unsigned int *auStack_50;
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA2F0();


void fn_82DB1180(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_50 [16];
  
  if (*(char *)(param_1 + 8) != '\0') {
    iVar3 = 0;
    *(unsigned char *)(param_1 + 0x4c) = 0;
    iVar2 = 0;
    *(unsigned char *)(param_1 + 0x4d) = 1;
    if (0 < *(int *)(param_2 + 0x4c)) {
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0x48) + iVar3);
        iVar4 = iVar1 + 0x10;
        if (*(char *)(iVar1 + 0x28) == '\x01') {
          iVar1 = fn_82CEA2F0(param_1 + 0x34,iVar4,auStack_50);
          if (iVar1 != 0) {
            iVar1 = fn_82CE5410();
            fn_82CEA160(param_1 + 0x34,*(unsigned int *)(iVar1 + 0x10),iVar4,0xffffffffffffffff)
            ;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_2 + 0x4c));
    }
  }
  return;
}

