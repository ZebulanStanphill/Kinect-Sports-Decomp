typedef struct Rec_82A59858 { char pad[0x30]; int key; } Rec_82A59858;
typedef struct Node_82A59858 { Rec_82A59858 *val; struct Node_82A59858 *next; } Node_82A59858;
typedef struct Bucket_82A59858 { char pad[8]; char sub[0x18]; Node_82A59858 *head; char pad2[4]; } Bucket_82A59858;
typedef struct Obj_82A59858 { Bucket_82A59858 b[13]; char pad[0x210 - 13 * 0x28]; int count; } Obj_82A59858;
extern void fn_82A47B28(void *, Node_82A59858 *);
extern void fn_82A76400(Rec_82A59858 *);

void fn_82A59858(Obj_82A59858 *o, int key)
{
  Bucket_82A59858 *bk;
  Node_82A59858 *n;
  Node_82A59858 *p;
  Rec_82A59858 *v;
  Node_82A59858 *q;

  bk = &o->b[key % 13];
  n = bk->head;
  do {
    p = n;
    q = p;
    if (q != 0) {
      n = q->next;
      v = q->val;
    } else {
      v = 0;
    }
  } while (v->key != key);
  fn_82A47B28(bk->sub, p);
  fn_82A76400(v);
  o->count = o->count - 1;
}
