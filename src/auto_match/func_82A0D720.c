extern void fn_82A0F008(void *p);

void fn_82A0D720(char *o)
{
  if (*(void **)(o + 0x0) != 0) {
    fn_82A0F008(*(void **)(o + 0x0));
    *(void **)(o + 0x0) = 0;
  }
}
