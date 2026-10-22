typedef struct Node Node;
typedef struct Iter { Node *node; } Iter;
typedef struct Tree { Node *unk0; Node *head; } Tree;
typedef struct Obj { int unk0; int unk4; Tree tree; } Obj;
typedef struct Key { char data[40]; } Key;

extern void *fn_82230110(Key *k);
extern void fn_82230300(Key *k, int a, int b);
extern Iter *fn_8258E3A8(Iter *out, Tree *t, void *key);
extern Iter *fn_8258DF98(Iter *out, Tree *t, Iter it);

void fn_822B7A78(Obj *o)
{
    Key k;
    Iter it;
    fn_8258E3A8(&it, &o->tree, fn_82230110(&k));
    fn_82230300(&k, 1, 0);
    if (it.node != o->tree.head) {
        fn_8258DF98(&it, &o->tree, it);
    }
}
