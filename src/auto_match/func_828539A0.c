extern int fn_826310E0();


void fn_828539A0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char bVar2;
  int iVar3;
  
  bVar2 = *(unsigned char *)(param_2 + 8);
  if (bVar2 == 0) {
    iVar3 = 0x84;
  }
  else if (bVar2 == 1) {
    iVar3 = 0x88;
  }
  else if (bVar2 < 3) {
    iVar3 = 0x98;
  }
  else if (bVar2 == 3) {
    iVar3 = 0x9c;
  }
  else {
    if (bVar2 < 5) {
      uVar1 = (unsigned int)*(float *)(param_2 + 4);
      fn_826310E0(*(unsigned int *)(param_1 + 4),(unsigned __int64)uVar1,param_1 + 0xa4,
                   (unsigned __int64)*(unsigned char *)(param_2 + 9),
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   (((((unsigned __int64)uVar1 + (unsigned __int64)*(unsigned char *)(param_2 + 9)) - 1 & 0xffffffff) >> 2)
                    - (unsigned __int64)(uVar1 >> 2) & 0x7f)) >> ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      return;
    }
    if (bVar2 != 5) {
      return;
    }
    iVar3 = 0xa0;
  }
  *(int *)(param_1 + iVar3) = (int)*(float *)(param_2 + 4);
  return;
}

