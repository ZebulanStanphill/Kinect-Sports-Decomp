extern int fn_82250A18();
extern int fn_825130F8();
extern int fn_8265C9E0();
extern unsigned int lbl_8219793C;
extern unsigned int lbl_832975B0;


unsigned int * fn_8224AAB8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x54);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_825130F8(puVar1,param_2);
    puVar1[0xe] = 0;
    *(unsigned char *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    *(unsigned char *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    *(unsigned char *)(puVar1 + 0x14) = 0;
    *(unsigned char *)((int)puVar1 + 0x51) = 0;
    puVar1[0x13] = 0;
    *puVar1 = &lbl_8219793C;
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    *(unsigned char *)(iVar2 + 4) = 1;
  }
  *param_1 = puVar1;
  return param_1;
}

