typedef struct Range_82C295B0 { int pad0; unsigned int size; unsigned __int64 start; } Range_82C295B0;
typedef struct Node_82C295B0 { Range_82C295B0 *r; int hits; struct Node_82C295B0 *next; } Node_82C295B0;
typedef struct List_82C295B0 { int pad[2]; Node_82C295B0 *first; } List_82C295B0;
typedef struct Mid_82C295B0 { int pad[4]; List_82C295B0 *list; } Mid_82C295B0;
typedef struct Obj_82C295B0 { char pad[0x2c]; Mid_82C295B0 *mid; } Obj_82C295B0;

int fn_82C295B0(Obj_82C295B0 *o, unsigned __int64 a, unsigned int len)
{
  Node_82C295B0 *n;
  Node_82C295B0 *first;
  unsigned int size;
  unsigned __int64 start;

  first = o->mid->list->first;
  if (first == 0) return 0;
  n = first;
  do {
    size = n->r->size;
    start = n->r->start;
    if (size != 0) {
      if (start >= a) {
        if (start < len + a) goto hit;
      } else if (size + start > a) {
hit:
        n->hits = n->hits + 1;
      }
    }
    if (size + start < a) {
      return 0;
    }
    n = n->next;
  } while (n != 0);
  return 0;
}
