extern void **fn_8265D5A8(void *);
extern char *fn_82F953A8(void *);

void *fn_82F95A78(void *node)
{
  while (*fn_82F953A8(*fn_8265D5A8(node)) == 0)
    node = *fn_8265D5A8(node);
  return node;
}
