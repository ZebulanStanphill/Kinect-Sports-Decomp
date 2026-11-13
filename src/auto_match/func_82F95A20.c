extern void **fn_82F953B8(void *);
extern char *fn_82F953A8(void *);

void *fn_82F95A20(void *node)
{
  while (*fn_82F953A8(*fn_82F953B8(node)) == 0)
    node = *fn_82F953B8(node);
  return node;
}
