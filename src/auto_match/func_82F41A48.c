extern void fn_82E4FE40(void *p);

void fn_82F41A48(char *o)
{
  if (*(void **)(o + 0x28) != 0) {
    fn_82E4FE40(*(void **)(o + 0x28));
  }
  *(void **)(o + 0x28) = 0;
  *(unsigned short *)(o + 0x24) = 0;
}
