typedef struct Owner_82BA08F8 { char pad[0x5ac]; void *heap; } Owner_82BA08F8;
typedef struct Obj_82BA08F8 {
  char pad0[0xc];
  Owner_82BA08F8 *owner;
  char pad10[0x88];
  int *data;
} Obj_82BA08F8;
extern void fn_82B7BEB0(void *, void *);
extern int *fn_82B7BD28(void *, unsigned);

void fn_82BA08F8(Obj_82BA08F8 *self, int *src, int n)
{
  int i;
  if (self->data != 0) {
    fn_82B7BEB0(self->owner->heap, self->data);
  }
  self->data = fn_82B7BD28(self->owner->heap, (n + 1) * 4);
  i = n + 1;
  n = 0;
  do {
    self->data[n] = src[n];
    n++;
    i--;
  } while (i != 0);
}
