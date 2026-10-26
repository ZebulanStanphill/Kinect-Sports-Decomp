extern void fn_82E4FE40(void *p);

void fn_82F41A00(char *o)
{
  if (*(void **)(o + 0x20) != 0) {
    fn_82E4FE40(*(void **)(o + 0x20));
  }
  *(void **)(o + 0x20) = 0;
  *(unsigned short *)(o + 0x1c) = 0;
}
