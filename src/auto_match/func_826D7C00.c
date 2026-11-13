extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F30F0();


int fn_826D7C00(int *param_1,int param_2)

{
  int iVar1;
  int aiStack_20 [4];
  
  if (*param_1 == 0) {
    iVar1 = param_1[1];
  }
  else {
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    if ((*(char *)(param_2 + 0x28) == '\0') || (*(unsigned int *)(param_2 + 4) <= (unsigned int)param_1[1])) {
      fn_826F30F0(param_2,aiStack_20);
    }
    else {
      fn_82687F98(aiStack_20,
                        (unsigned __int64)*(unsigned int *)(param_2 + 8) +
                        ((unsigned __int64)(unsigned int)param_1[1] & 0x1fffffff) * 8);
    }
    iVar1 = aiStack_20[0];
    if (aiStack_20[0] != 0) {
      fn_82687270();
    }
  }
  return iVar1;
}

