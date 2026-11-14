typedef struct Group_82536358 {
  char pad[0x24];
  void **begin;
  void **end;
} Group_82536358;

typedef struct Registry_82536358 {
  Group_82536358 **begin;
  Group_82536358 **end;
} Registry_82536358;

extern Registry_82536358 *lbl_8327F874;

static __forceinline void **Find(void **first, void **last, void *item)
{
  for (; first != last; first++) {
    if (*first == item) {
      break;
    }
  }
  return first;
}

/* Is `item` listed in any group of the registry? */
int fn_82536358(void *item)
{
  Group_82536358 **group;

  for (group = lbl_8327F874->begin; group != lbl_8327F874->end; group++) {
    if (Find((*group)->begin, (*group)->end, item) != (*group)->end) {
      return 1;
    }
  }
  return 0;
}
