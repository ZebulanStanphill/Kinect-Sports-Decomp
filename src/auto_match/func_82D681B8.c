void fn_82D681B8(unsigned int *self,unsigned __int64 param_2)

{
  unsigned short *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)((int)self + 0x31) != '\0') {
    puVar1 = (unsigned short *)((int)self + 0xe);
    do {
      puVar1 = puVar1 + 2;
      (*(int (**)())(*(int *)self[2] + 0x14))((int *)self[2],*puVar1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(unsigned int)*(unsigned char *)((int)self + 0x31));
  }
  (*(int (**)())*self)(self,1);
  return;
}

