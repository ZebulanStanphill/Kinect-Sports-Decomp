extern int fn_82B4BC48();


void fn_82B4BE70(void)

{
  unsigned int *puVar1;
  unsigned int in_r6;
  unsigned int uVar2;
  
  puVar1 = (unsigned int *)fn_82B4BC48();
  if (in_r6 != 0xe4) {
    uVar2 = *puVar1 >> 5 & 0xff;
    *puVar1 = ((((uVar2 >> (in_r6 >> 5 & 6) & 3) << 2 | uVar2 >> (in_r6 >> 3 & 6) & 3) << 2 |
               uVar2 >> (in_r6 >> 1 & 6) & 3) << 2 | uVar2 >> ((in_r6 & 3) << 1) & 3) << 5 |
              *puVar1 & 0xffffe01f;
  }
  return;
}

