extern void fn_82E73470(void *p);

void fn_82E751C0(char *o)
{
  if (*(void **)(o + 0x74) != 0) {
    fn_82E73470(*(void **)(o + 0x74));
    *(void **)(o + 0x74) = 0;
  }
}
