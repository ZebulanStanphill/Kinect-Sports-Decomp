extern void *fn_8265D5A8(void *p);
extern void fn_8265D5B8(void *first, void *last, void *dest);

void fn_8265D478(void *first, void *last, void *dest)
{
  fn_8265D5B8(fn_8265D5A8(first), fn_8265D5A8(last), dest);
}
