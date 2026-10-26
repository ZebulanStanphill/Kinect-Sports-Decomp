extern void fn_82E4FE40(void *p);

void fn_82F41A90(char *o)
{
  if (*(void **)(o + 0x30) != 0) {
    fn_82E4FE40(*(void **)(o + 0x30));
  }
  *(void **)(o + 0x30) = 0;
  *(unsigned short *)(o + 0x2c) = 0;
}
