#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_827664B0(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar2 = *param_1;
  bVar1 = *(unsigned char *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) + (param_2 & 0xfff)
                   );
  uVar5 = (unsigned int)(bVar1 >> 2);
  if ((bVar1 & 3) == 0) {
    uVar3 = 1;
  }
  else {
    if ((bVar1 & 3) == 1) {
      uVar3 = 2;
      uVar4 = (unsigned int)*(unsigned char *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                             (param_2 + 1 & 0xfff)) << 6;
    }
    else {
      if ((bVar1 & 3) < 3) {
        uVar3 = 3;
        uVar4 = (unsigned int)CONCAT11(*(unsigned char *)
                                (*(int *)((param_2 + 2 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                                (param_2 + 2 & 0xfff)),
                               *(unsigned char *)
                                (*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                                (param_2 + 1 & 0xfff)));
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
        uVar3 = 4;
        uVar4 = (unsigned int)CONCAT21(CONCAT11(*(unsigned char *)
                                         (*(int *)((param_2 + 3 >> 10 & 0x3ffffc) + iVar2) +
                                         (param_2 + 3 & 0xfff)),
                                        *(unsigned char *)
                                         (*(int *)((param_2 + 2 >> 10 & 0x3ffffc) + iVar2) +
                                         (param_2 + 2 & 0xfff))),
                               *(unsigned char *)
                                (*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + iVar2) +
                                (param_2 + 1 & 0xfff)));
      }
      uVar4 = uVar4 << 6;
    }
    uVar5 = uVar4 | uVar5;
  }
  *param_3 = uVar5;
  return uVar3;
}

