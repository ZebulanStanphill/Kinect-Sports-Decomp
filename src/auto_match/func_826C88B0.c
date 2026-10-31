// Built with link-time code generation together with its "ltcg_units" (objects.json):
// p stays in volatile r8 across fn_826C5FD0, which LTCG knows leaves it alone.
extern unsigned char fn_826C5FD0(void *, void *);

void fn_826C88B0(char *p, void *item)
{
  if (fn_826C5FD0(*(void **)(p + 8), item)) {
    *(char *)(*(char **)(p + 4) + 0x35) = 1;
  }
}
