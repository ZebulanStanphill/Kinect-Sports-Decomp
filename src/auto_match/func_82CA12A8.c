void fn_82CA12A8(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) != 0)) {
    param_2 = -(unsigned int)(*(int *)(param_1 + 0x50c8) != 0) & param_2;
    (**(int (***)())(param_1 + 0x3e30))
              (0,(__int64)(*(int *)(param_1 + 0xcc) >> 1) * (__int64)(int)param_2 +
                 (unsigned __int64)*(unsigned int *)(param_1 + 0xec0),0,*(unsigned int *)(param_1 + 0xac),
               *(unsigned int *)(param_1 + 0xdc),1,1,*(unsigned int *)(param_1 + 0xa4));
    lVar1 = (__int64)(*(int *)(param_1 + 0xd0) >> 1) * (__int64)(int)param_2;
    (**(int (***)())(param_1 + 0x3e2c))
              (0,(unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + lVar1,
               (unsigned __int64)*(unsigned int *)(param_1 + 0xec8) + lVar1,0,*(unsigned int *)(param_1 + 0xb0),
               *(unsigned int *)(param_1 + 0xe0),1,1);
  }
  else if (*(unsigned int *)(param_1 + 0x3b0c) == *(unsigned int *)(param_1 + 0xcc)) {
    (**(int (***)())(param_1 + 0x3e30))
              (0,(unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec0),0,
               *(int *)(param_1 + 0xac) >> 1,*(unsigned int *)(param_1 + 0xdc),1,1,
               *(unsigned int *)(param_1 + 0xa4));
    (**(int (***)())(param_1 + 0x3e2c))
              (0,(unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec4),
               (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec8),0,
               *(int *)(param_1 + 0xb0) >> 1,*(unsigned int *)(param_1 + 0xe0),1,1);
    (**(int (***)())(param_1 + 0x3e30))
              (0,*(unsigned int *)(param_1 + 0xec0),0,*(int *)(param_1 + 0xac) >> 1,
               *(unsigned int *)(param_1 + 0xdc),1,1,*(unsigned int *)(param_1 + 0xa4));
    (**(int (***)())(param_1 + 0x3e2c))
              (0,*(unsigned int *)(param_1 + 0xec4),*(unsigned int *)(param_1 + 0xec8),0,
               *(int *)(param_1 + 0xb0) >> 1,*(unsigned int *)(param_1 + 0xe0),1,1);
  }
  return;
}

