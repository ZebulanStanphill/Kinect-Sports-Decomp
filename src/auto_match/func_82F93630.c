extern void **fn_82F953B8(void *);
extern char *fn_82F919B8(void *);

void *fn_82F93630(void *node)
{
  while (*fn_82F919B8(*fn_82F953B8(node)) == 0)
    node = *fn_82F953B8(node);
  return node;
}
