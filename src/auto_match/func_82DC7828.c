extern int fn_82D9FEB8();
extern int fn_82DA0080();
extern int fn_82DA0290();
extern int fn_82DA0450();


void fn_82DC7828(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  
  puVar2 = *(unsigned short **)(*(int *)(param_1 + 0x24) + 0x10);
  if (puVar2 != (unsigned short *)0x0) {
    uVar1 = *puVar2;
    while (uVar3 = (unsigned int)uVar1, 0x16 < uVar3) {
      if (uVar3 - 0x17 < 6) {
        if (uVar3 == 0x17) {
          fn_82DA0450(puVar2,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar3 == 0x18) {
          fn_82D9FEB8(puVar2,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar3 != 0x19) {
          if (uVar3 == 0x1a) {
            fn_82DA0080(puVar2,param_2,param_3,param_4,param_5,param_6);
          }
          else if (uVar3 != 0x1b) {
            fn_82DA0290(puVar2,param_2,param_3,param_4,param_5,param_6);
          }
        }
      }
      puVar2 = *(unsigned short **)(puVar2 + 10);
      uVar1 = *puVar2;
    }
  }
  return;
}

