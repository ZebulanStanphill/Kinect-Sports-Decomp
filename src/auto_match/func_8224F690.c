typedef struct Node { struct Node *left; } Node;
typedef struct { Node *ptr; } Iter;
typedef struct { int a; Node *head; int size; } Tree;
typedef struct { int vt; Tree t1; int pad; Tree t2; char pad2[0x18]; void *x38; } Obj;
typedef struct { char b[16]; } Tmp;
extern void fn_822315A0(void *p);
extern void fn_8224FF20(Tmp *r, Tree *t, Iter first, Iter last);
extern void fn_8224FE78(Tmp *r, Tree *t, Iter first, Iter last);
extern void fn_8265CA20(void *p);

void fn_8224F690(Obj *p)
{
    Tmp tmp;
    Iter first, last;

    if (p->x38 != 0)
        fn_822315A0(p->x38);
    first.ptr = p->t2.head->left;
    last.ptr = p->t2.head;
    fn_8224FF20(&tmp, &p->t2, first, last);
    fn_8265CA20(p->t2.head);
    first.ptr = p->t1.head->left;
    last.ptr = p->t1.head;
    fn_8224FE78(&tmp, &p->t1, first, last);
    fn_8265CA20(p->t1.head);
}
