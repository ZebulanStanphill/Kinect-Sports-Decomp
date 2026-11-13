extern int fn_82E1E680();
extern int fn_82E1E818();


unsigned __int64 fn_82E1CE68(int param_1,int param_2)

{
  unsigned char cVar2;
  unsigned __int64 uVar1;
  
  if (((*(char *)(param_1 + 0x18) == '\0') ||
      (cVar2 = fn_82E1E818(*(unsigned int *)(param_1 + 0xc)), cVar2 != '\0')) ||
     (*(char *)(*(int *)(param_1 + 0x1c) + param_2) == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82E1E680(*(unsigned int *)(param_1 + 0xc),
                      *(unsigned int *)(*(int *)(param_1 + 0x20) + param_2 * 4));
    uVar1 = 1;
  }
  return uVar1;
}

