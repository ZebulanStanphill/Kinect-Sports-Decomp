void fn_8270ADE8(int param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 8)) {
    fn_8270ADE8(param_1,*(unsigned int *)(param_2 + 4),param_3,param_4);
    uVar1 = -(unsigned __int64)
             ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) ==
             (unsigned __int64)*(unsigned int *)(param_2 + 0xc) + (unsigned __int64)*(unsigned int *)(param_1 + 8)) &
            (unsigned __int64)*(unsigned int *)(param_1 + 8);
    (**(int (***)())(*param_3 + 4))
              (param_3,param_4,0,(*(unsigned int *)(param_2 + 0x10) - uVar1) + 0xfff & 0xfffff000,
               *(unsigned int *)(param_2 + 0x14) + uVar1 & 0xfffff000);
  }
  return;
}

