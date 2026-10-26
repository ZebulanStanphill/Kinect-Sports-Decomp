extern void fn_8265CA20(void *p);

void fn_82E21B50(char *o)
{
  if (*(void **)(o + 0x4) != 0) {
    fn_8265CA20(*(void **)(o + 0x4));
    *(void **)(o + 0x4) = 0;
  }
}
