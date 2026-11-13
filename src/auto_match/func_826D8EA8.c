#define __lwsync() __emit(0x7C2004AC)
typedef struct Node_826D8EA8 {
  unsigned key;
  int value;
  int pad;
  struct Node_826D8EA8 *next;
} Node_826D8EA8;
typedef struct { char pad[0x98]; Node_826D8EA8 *head; } Obj_826D8EA8;
int fn_826D8EA8(Obj_826D8EA8 *self, unsigned *key)
{
  Node_826D8EA8 *n;
  for (n = self->head; __lwsync(), n != 0; n = n->next) {
    if (n->key == *key) return n->value;
  }
  return 0;
}
