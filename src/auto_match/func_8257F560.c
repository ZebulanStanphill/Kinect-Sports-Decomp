typedef struct Node_8257F560 Node_8257F560;
typedef struct Arr_8257F560 { Node_8257F560 *data; int count; } Arr_8257F560;
typedef struct Owner_8257F560 { char pad[0x98]; Arr_8257F560 children; } Owner_8257F560;
struct Node_8257F560 { Owner_8257F560 *owner; int pad[8]; unsigned int flags; char rest[0x1a0 - 0x28]; };

void fn_8257F560(Node_8257F560 *node)
{
  Owner_8257F560 *o = node->owner;
  node->flags |= 0x80000000;
  if (o != 0) {
    Arr_8257F560 *arr = &o->children;
    if (arr != 0) {
      int i;
      int n = arr->count;
      for (i = 0; i < n; i++) {
        fn_8257F560(&arr->data[i]);
      }
    }
  }
}
