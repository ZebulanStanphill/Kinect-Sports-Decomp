extern void *memcpy(void *, const void *, unsigned);
typedef struct Buf_826C6638 { char pad[8]; } Buf_826C6638;
typedef struct Inner_826C6638 { char pad0[0x14]; void *h; } Inner_826C6638;
typedef struct Item_826C6638 { char pad0[8]; char data[0x48]; int *ptr; int n; unsigned char flags; } Item_826C6638;
typedef struct Obj_826C6638 {
  char pad0[0xa0]; Inner_826C6638 *in; char pad1[0xa4]; char x148[0x80]; Item_826C6638 *item;
} Obj_826C6638;
extern unsigned fn_8267B890(void *, int, int);
extern Item_826C6638 *fn_826C5118(unsigned, void *);
void fn_826C6638(Obj_826C6638 *o, void *src, int n)
{
  unsigned t;
  Item_826C6638 *r;
  if (o->item == 0) {
    t = fn_8267B890(o->in->h, 0x5c, 0);
    if (t != 0) r = fn_826C5118(t, o->x148);
    else r = 0;
    o->item = r;
  }
  o->item->flags = o->item->flags | 3;
  memcpy(o->item->data - 0 , src, n << 2);
  o->item->ptr = (int *)(o->item->data);
  o->item->n = n;
}
