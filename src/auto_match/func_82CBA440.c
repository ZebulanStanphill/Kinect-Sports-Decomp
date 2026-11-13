void fn_82CBA440(int param_1,int param_2,int param_3,unsigned __int64 *param_4,int param_5,unsigned int param_6,
                  unsigned int param_7,int param_8)

{
  int (**pcVar1)();
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  
  puVar2 = (unsigned __int64 *)(((int)param_7 >> 2) * param_3 + ((int)param_6 >> 2) + param_2);
  if (((param_6 & 3) == 0) && ((param_7 & 3) == 0)) {
    puVar3 = (unsigned __int64 *)((int)param_4 + param_5 * 2);
    *param_4 = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    *(unsigned __int64 *)((int)param_4 + param_5) = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    *puVar3 = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    puVar3 = (unsigned __int64 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    puVar3 = (unsigned __int64 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    puVar3 = (unsigned __int64 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (unsigned __int64 *)((int)puVar2 + param_3);
    puVar3 = (unsigned __int64 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    *(unsigned __int64 *)((int)puVar3 + param_5) = *(unsigned __int64 *)((int)puVar2 + param_3);
    return;
  }
  if (param_8 == 1) {
    pcVar1 = *(int (***)())(param_1 + 0xc68);
  }
  else {
    pcVar1 = *(int (***)())(param_1 + 0xc6c);
  }
  (*pcVar1)();
  return;
}

