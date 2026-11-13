typedef unsigned char bool;
extern unsigned int *auStack_3c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82810328();
extern int fn_8286D3A0();
extern int fn_8286D418();
extern unsigned int iStack_40;


int fn_8286CEF8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  bool bVar5;
  int iStack_40;
  unsigned char auStack_3c [1];
  struct { float first; float second; } stack_pair_38;

  float fStack_30;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
    if (uVar2 != 0) {
      if (0x13 < (int)*(unsigned int *)(param_1 + 0x1c)) {
        uVar2 = 0x14;
      }
      lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - 1;
      *(int *)(param_1 + 0xc) = (int)lVar3;
      if ((-1 < lVar3) && (0 < (int)uVar2)) {
        puVar4 = (unsigned int *)(param_1 + 0x18);
        do {
          iVar1 = *(int *)(*(int *)*puVar4 + 8);
          iStack_40 = iVar1;
          fn_8286D418(auStack_3c,puVar4,*(int *)*puVar4);
          fn_8286D3A0(puVar4,*puVar4,&iStack_40);
          if (*(char *)(iVar1 + 4) != '\0') {
            fn_82810328(iVar1 + 0x14,iVar1 + 8,&stack_pair_38.first);
            bVar5 = *(float *)(param_1 + 0x14) <
                    stack_pair_38.first * stack_pair_38.first + fStack_30 * fStack_30 + stack_pair_38.second * stack_pair_38.second;
            *(bool *)(iVar1 + 0x5a) = bVar5;
            if (!bVar5) {
              return iVar1;
            }
          }
          uVar2 = uVar2 - 1;
        } while (0 < (__int64)uVar2);
      }
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return 0;
}

