typedef struct Link_82A31620 { struct Link_82A31620 *next; struct Link_82A31620 *prev; } Link_82A31620;
typedef struct { char pad0[0x35]; unsigned char flags; } Item_82A31620;
typedef struct { Item_82A31620 *item; char pad4[0x44]; Link_82A31620 link; } Entry_82A31620;
typedef struct { char pad0[0x80]; Link_82A31620 entries; } Self_82A31620;

extern int fn_82A30700(Self_82A31620 *self, Item_82A31620 *item, int arg);

int fn_82A31620(Self_82A31620 *self)
{
  Link_82A31620 *n = self->entries.next;
  while (n != &self->entries) {
    Item_82A31620 *item = ((Entry_82A31620 *)((char *)n - 0x48))->item;
    n = n->next;
    if (item->flags & 0x10) {
      int hr = fn_82A30700(self, item, 0);
      if (hr < 0)
        return hr;
    }
  }
  return 0;
}
