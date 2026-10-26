extern int *fn_828B3DF8(void *, void *, void *);
typedef struct { char pad[0x54]; int tree; int head; } X;
unsigned char fn_828B4370(X *p, char *k)
{
  int it[4];
  return *fn_828B3DF8(it, &p->tree, k + 0x30) != p->head;
}
