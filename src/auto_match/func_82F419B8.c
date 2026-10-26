extern void fn_82E4FE40(void *p);

void fn_82F419B8(char *o)
{
  if (*(void **)(o + 0x18) != 0) {
    fn_82E4FE40(*(void **)(o + 0x18));
  }
  *(void **)(o + 0x18) = 0;
  *(unsigned short *)(o + 0x16) = 0;
}
