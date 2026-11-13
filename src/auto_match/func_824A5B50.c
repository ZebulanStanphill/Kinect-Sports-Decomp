unsigned __int64 fn_824A5B50(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x40);
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xb0);
  uVar2 = -(unsigned __int64)*(unsigned int *)(iVar1 + 0xf0) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0xf0) & 0xffffffff &
          -uVar3 & ~uVar3 & 0xffffffff &
          -(unsigned __int64)*(unsigned int *)(iVar1 + 0x2b0) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x2b0) & 0xffffffff &
          -(unsigned __int64)*(unsigned int *)(iVar1 + 0x1b0) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x1b0) & 0xffffffff;
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = -uVar3 & ~uVar3 & 0xffffffff &
            -(unsigned __int64)*(unsigned int *)(iVar1 + 0x230) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x230) & 0xffffffff
            & -(unsigned __int64)*(unsigned int *)(iVar1 + 0x130) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x130) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x430) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x430) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x330) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x330) &
              0xffffffff & uVar2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = -(unsigned __int64)*(unsigned int *)(iVar1 + 0x470) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x470) & 0xffffffff
            & -(unsigned __int64)*(unsigned int *)(iVar1 + 0x370) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x370) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x430) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x430) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x330) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x330) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x4b0) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x4b0) &
              0xffffffff &
              -(unsigned __int64)*(unsigned int *)(iVar1 + 0x3b0) & ~(unsigned __int64)*(unsigned int *)(iVar1 + 0x3b0) &
              0xffffffff & uVar2;
  }
  return uVar2 >> 0x1f;
}

