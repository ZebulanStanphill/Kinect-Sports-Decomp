extern int fn_8248DBA8();


unsigned char fn_8248BCC0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) != 0)) {
    bVar2 = 0;
  }
  else {
    (**(int (***)())(**(int **)(param_2 + 0xc) + 8))(param_1);
    fn_8248DBA8(param_1,*(unsigned int *)(param_2 + 0x14),param_3,param_4);
    bVar2 = 1;
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x18);
    if (uVar3 != *(unsigned int *)(param_2 + 0x1c)) {
      do {
        lVar1 = fn_8248DBA8(param_1,uVar3,param_3,param_4);
        uVar3 = uVar3 + 0x68;
        bVar2 = -(lVar1 != 0) & bVar2;
      } while ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 0x1c));
    }
  }
  return bVar2;
}

