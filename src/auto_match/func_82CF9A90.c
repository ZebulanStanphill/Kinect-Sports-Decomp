extern int fn_82CE5410();
extern unsigned int lbl_8323B4A0;


void fn_82CF9A90(void)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = fn_82CE5410();
  puVar2 = (unsigned int *)(*(int (**)())(**(int **)(iVar1 + 0x14) + 4))(*(int **)(iVar1 + 0x14),0x14);
  KeTlsSetValue(lbl_8323B4A0,puVar2);
  *(unsigned char *)(puVar2 + 4) = 0;
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  return;
}

