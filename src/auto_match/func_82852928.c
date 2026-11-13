extern int fn_82639F78();


void fn_82852928(int param_1,int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  if (*(short *)(param_2 + 0xc) != 0) {
    do {
      puVar1 = (unsigned int *)
               ((unsigned int)*(unsigned char *)(*(int *)(param_2 + 4) + (int)lVar2) * 0x10 + *(int *)(param_2 + 8));
      fn_82639F78(*(unsigned int *)(param_1 + 4),lVar2,puVar1[1],0,*puVar1,
                        0x8000000000000000 >>
                        ((((0x5f - lVar2) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < (int)(unsigned int)*(unsigned short *)(param_2 + 0xc));
  }
  return;
}

