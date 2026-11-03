typedef struct Owner_828244E8 { char pad[0x3bc]; char ***tab; } Owner_828244E8;
typedef struct S_828244E8 { char pad[0x10]; Owner_828244E8 *owner; unsigned idx; } S_828244E8;
extern int strcmp(const char *, const char *);
int fn_828244E8(S_828244E8 *a, S_828244E8 *b)
{
  if (a->owner != 0 && b->owner != 0) {
    return strcmp((*a->owner->tab)[a->idx], (*b->owner->tab)[b->idx]);
  }
  return 1;
}
