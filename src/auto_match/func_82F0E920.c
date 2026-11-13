extern int fn_82BA02A8();
extern int fn_82ED6730();


void fn_82F0E920(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_2 + 0x10c);
  if (*(int *)(param_1 + 0x6d54) == 0) {
    fn_82ED6730(param_1,*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 0x108),uVar1,
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + (unsigned __int64)*(unsigned int *)(param_2 + 0x25c)
                      ,(unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) +
                       (unsigned __int64)*(unsigned int *)(param_2 + 0x260),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + (unsigned __int64)*(unsigned int *)(param_2 + 0x260)
                      ,*(unsigned int *)(param_2 + 0x278));
  }
  else if (*(int *)(param_1 + 0x7b38) == 0) {
    fn_82BA02A8(param_1,*(unsigned int *)(param_2 + 0x108),uVar1,
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + (unsigned __int64)*(unsigned int *)(param_2 + 0x25c),
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + (unsigned __int64)*(unsigned int *)(param_2 + 0x260),
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + (unsigned __int64)*(unsigned int *)(param_2 + 0x260),
                 *(unsigned int *)(param_2 + 0x278),*(unsigned int *)(param_2 + 0x27c));
  }
  else {
    fn_82ED6730(param_1,*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 0x108),uVar1,
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + (unsigned __int64)*(unsigned int *)(param_2 + 0x25c)
                      ,(unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) +
                       (unsigned __int64)*(unsigned int *)(param_2 + 0x260),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + (unsigned __int64)*(unsigned int *)(param_2 + 0x260)
                      ,*(unsigned int *)(param_2 + 0x278));
  }
  return;
}

