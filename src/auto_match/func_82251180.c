extern void fn_822315A0(void *rep);
extern void fn_82359C18(void *p);
extern void fn_828E32A0(void *p);

void fn_82251180(char *p)
{
  if (*(void **)(p + 0x74) != 0) {
    fn_822315A0(*(void **)(p + 0x74));
  }
  if (*(void **)(p + 0x6c) != 0) {
    fn_822315A0(*(void **)(p + 0x6c));
  }
  fn_82359C18(p + 0x50);
  fn_82359C18(p + 0x38);
  fn_828E32A0(p);
}
