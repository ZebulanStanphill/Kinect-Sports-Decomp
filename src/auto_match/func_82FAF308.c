typedef struct Child_82FAF308 Child_82FAF308;
typedef struct ChildVt_82FAF308 { char pad[0x70]; int (*visit)(Child_82FAF308 *self, unsigned int *limit, int out, unsigned int *count, int depth); } ChildVt_82FAF308;
struct Child_82FAF308 { ChildVt_82FAF308 *vt; };
typedef struct Info_82FAF308 { char pad[0xc]; int id; } Info_82FAF308;
typedef struct Inner_82FAF308 { char pad[0x10]; Info_82FAF308 *info; } Inner_82FAF308;
typedef struct Slot_82FAF308 { int key; Child_82FAF308 *child; } Slot_82FAF308;
typedef struct Out_82FAF308 { int key; int id; int depth; } Out_82FAF308;
typedef struct Owner_82FAF308 {
  char pad[0x7c];
  Slot_82FAF308 *begin;
  Slot_82FAF308 *end;
} Owner_82FAF308;

int fn_82FAF308(Owner_82FAF308 *param_1, unsigned int *param_2, Out_82FAF308 *param_3, unsigned int *param_4, int param_5)
{
  Slot_82FAF308 *s = param_1->begin;
  int r = 1;

  if (s != param_1->end) {
    do {
      if (*param_2 != 0) {
        param_3[*param_4].key = s->key;
        param_3[*param_4].id = ((Inner_82FAF308 *)s->child)->info->id;
        param_3[*param_4].depth = param_5;
      }
      *param_4 = *param_4 + 1;
      if (*param_2 != 0 && *param_4 >= *param_2)
        break;
      param_5 = param_5 + 1;
      r = s->child->vt->visit(s->child, param_2, (int)param_3, param_4, param_5);
      if (r != 1)
        break;
      s++;
    } while (s != param_1->end);
  }
  return r;
}
