extern void *fn_8305D3F8(void *list, void *node);
extern unsigned char fn_83068418(void *node);

void *fn_83065998(void *list, void *node)
{
  if (node != 0) {
    do {
      node = fn_8305D3F8(list, node);
      if (node == 0) {
        break;
      }
    } while (!fn_83068418(node));
    return node;
  }
  return 0;
}
