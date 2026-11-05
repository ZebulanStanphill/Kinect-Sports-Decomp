typedef struct Link_8288D868 { struct Link_8288D868 *next; int pad; int pad2; int pad3; int val; } Link_8288D868;
typedef struct List_8288D868 { char pad[0x230]; Link_8288D868 *head; } List_8288D868;
typedef struct Obj_8288D868 { char pad[0x10]; List_8288D868 *list; char pad2[0x3c - 0x14]; unsigned *bits; char pad3[0x4c - 0x40]; unsigned size; } Obj_8288D868;
typedef struct Ref_8288D868 { unsigned *word; unsigned bit; } Ref_8288D868;
typedef struct Pos_8288D868 { unsigned *word; unsigned bit; } Pos_8288D868;
extern void fn_82381BC0(Link_8288D868 **);
extern unsigned fn_8240D928(int);
extern Ref_8288D868 *fn_8288BE40(void *, Pos_8288D868 *, unsigned);
extern int fn_82A4AAA8(int);
extern __declspec(noreturn) void fn_82F622E0(const char *);

unsigned char fn_8288D868(Obj_8288D868 *o)
{
  unsigned char ok = 1;
  Link_8288D868 *head = o->list->head;
  Link_8288D868 *it = head->next;
  if (it != head) {
    do {
      int v = it->val;
      int t;
      if (ok == 0 || fn_82A4AAA8(v) != 1) {
        t = 0;
      } else {
        unsigned idx = fn_8240D928(v);
        Pos_8288D868 pos;
        Ref_8288D868 *r;
        char tmp[8];
        if (o->size <= idx)
          fn_82F622E0("invalid vector<bool> subscript");
        pos.word = o->bits;
        pos.bit = 0;
        r = fn_8288BE40(tmp, &pos, idx);
        t = 1;
        if ((1u << r->bit & *r->word) == 0)
          t = 0;
      }
      ok = t;
      fn_82381BC0(&it);
    } while (it != o->list->head);
  }
  return ok;
}
