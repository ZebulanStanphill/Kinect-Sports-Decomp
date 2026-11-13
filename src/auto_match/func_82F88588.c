extern unsigned int lbl_8329F620;


unsigned __int64 fn_82F88588(unsigned int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_1 & 0x1f) * 0x48;
  iVar3 = (&lbl_8329F620)[(int)param_1 >> 5] + iVar2;
  bVar1 = *(unsigned char *)(iVar3 + 4);
  if (param_2 == 0x4000) {
    *(unsigned char *)(iVar3 + 4) = *(unsigned char *)(iVar3 + 4) | 0x80;
    iVar2 = (&lbl_8329F620)[(int)param_1 >> 5] + iVar2;
    *(unsigned char *)(iVar2 + 0x28) = *(unsigned char *)(iVar2 + 0x28) & 1;
  }
  else if (param_2 == 0x8000) {
    *(unsigned char *)(iVar3 + 4) = *(unsigned char *)(iVar3 + 4) & 0x7f;
  }
  if ((bVar1 & 0x80) == 0) {
    return 0x8000;
  }
  return 0x4000;
}

