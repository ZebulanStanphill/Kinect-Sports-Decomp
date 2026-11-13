extern int fn_8284A458();
extern unsigned int iStack00000014;


unsigned int * fn_8284A5D8(int param_1)

{
  unsigned int *puVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  puVar1 = (unsigned int *)fn_8284A458(1,0);
  *puVar1 = *(unsigned int *)(iStack00000014 + 4);
  puVar1[1] = *(unsigned int *)(iStack00000014 + 4);
  puVar1[2] = *(unsigned int *)(iStack00000014 + 4);
  *(unsigned char *)(puVar1 + 0xb) = 0;
  *(unsigned char *)((int)puVar1 + 0x2d) = 0;
  return puVar1;
}

