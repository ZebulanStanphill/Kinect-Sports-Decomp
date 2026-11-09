typedef struct Node_82FF6BF0 Node_82FF6BF0;

typedef struct Key_82FF6BF0 { int a; int b; } Key_82FF6BF0;

typedef struct Sub_82FF6BF0 {
    Node_82FF6BF0 *head;
    Node_82FF6BF0 *end;
} Sub_82FF6BF0;

typedef struct Obj_82FF6BF0 {
    char pad[0x3c];
    Sub_82FF6BF0 sub;
} Obj_82FF6BF0;

typedef struct Pair_82FF6BF0 { unsigned int key; Obj_82FF6BF0 *value; } Pair_82FF6BF0;

typedef struct Owner_82FF6BF0 {
    int pad;
    Pair_82FF6BF0 *begin;
    Pair_82FF6BF0 *end;
} Owner_82FF6BF0;

extern void fn_82FF7EB0(Node_82FF6BF0 **out, Sub_82FF6BF0 *s, Key_82FF6BF0 k);
extern void fn_82FF22B8(Node_82FF6BF0 **out, Sub_82FF6BF0 *s, Node_82FF6BF0 **it);
extern void fn_82FF8250(Sub_82FF6BF0 *s, Key_82FF6BF0 k);

static __forceinline int neq(Pair_82FF6BF0 *a, Pair_82FF6BF0 *b) { return a != b; }

static __forceinline Obj_82FF6BF0 **find(Owner_82FF6BF0 *o, unsigned int key)
{
    Pair_82FF6BF0 *it;
    for (it = o->begin; it != o->end; it++) {
        if (it->key == key)
            break;
    }
    return neq(it, o->end) ? &it->value : 0;
}

int fn_82FF6BF0(Owner_82FF6BF0 *o, unsigned int key, int a, int b, unsigned char flag)
{
    Obj_82FF6BF0 **pp;
    Sub_82FF6BF0 *s;
    Node_82FF6BF0 *it;
    Node_82FF6BF0 *tmp;
    Key_82FF6BF0 k;

    pp = find(o, key);
    if (pp != 0) {
        s = &(*pp)->sub;
        k.a = a;
        k.b = b;
        fn_82FF7EB0(&it, s, k);
        if (it != s->end) {
            fn_82FF22B8(&tmp, s, &it);
        }
        if (flag != 0) {
            k.a = b;
            k.b = a;
            fn_82FF8250(&(*pp)->sub, k);
        }
        return 1;
    }
    return 0x14;
}
