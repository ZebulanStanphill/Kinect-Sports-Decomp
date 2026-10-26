extern void fn_82A1E658(void *p);

void fn_82D00760(char *o)
{
  if (*(void **)(o + 0x0) != 0) {
    fn_82A1E658(*(void **)(o + 0x0));
    *(void **)(o + 0x0) = 0;
  }
}
