typedef struct Ring_824AEAA0 { unsigned begin, end, cur, pad, count; } Ring_824AEAA0;
typedef struct Owner_824AEAA0 { int pad[0xf]; char *obj; } Owner_824AEAA0;
int fn_824AEAA0(Owner_824AEAA0 *param_1)
{
  Ring_824AEAA0 *r = (Ring_824AEAA0 *)(param_1->obj + 4);
  unsigned i;
  i = 0;
  while (i < r->count) {
    unsigned *pc = &r->cur;
    i++;
    *pc = *pc + 0xf0;
    if (*pc == r->end) *pc = r->begin;
  }
  r->count = 0;
  *(int *)(param_1->obj + 0x30) = 0;
  *(int *)(param_1->obj + 0x70) = 0;
  return 0;
}
