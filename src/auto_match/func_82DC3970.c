typedef struct { char pad[0x12]; unsigned char flags; } Node;
typedef struct { char pad[0x30]; Node *node; } Item;
typedef struct { char pad[0x20]; unsigned int flags; } Owner;

void fn_82DC3970(Owner *o, Item *it, int f)
{
  if (it->node != 0) {
    it->node->flags |= f;
    return;
  }
  o->flags |= f;
}
