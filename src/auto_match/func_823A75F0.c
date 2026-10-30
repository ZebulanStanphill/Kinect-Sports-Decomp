typedef struct Rep_823A75F0 Rep_823A75F0;
typedef struct Node_823A75F0 Node_823A75F0;
struct Node_823A75F0 {
    Node_823A75F0 *next;
    Node_823A75F0 *prev;
    int pad;
    Rep_823A75F0 *rep;
};
typedef struct { int a, b, c, d; } Z_823A75F0;
typedef struct {
    int pad0;
    Node_823A75F0 *head_a;
    int size_a;
    int padc;
    Node_823A75F0 *head_b;
    int size_b;
    int pad18;
    Node_823A75F0 *head_c;
    int size_c;
    char pad24[0x38 - 0x24];
    struct { int z38, z3c, z40, z44; } z;
} Obj_823A75F0;

extern void fn_822315A0(Rep_823A75F0 *);
extern void fn_8265CA20(void *);

#define CLEAR_LIST(HEAD, SIZE) \
    n1 = o->HEAD; \
    n2 = n1->next; \
    n1->next = n1; \
    o->HEAD->prev = o->HEAD; \
    o->SIZE = 0; \
    if (n2 != o->HEAD) { \
        do { \
            n1 = n2->next; \
            if (n2->rep != 0) { \
                fn_822315A0(n2->rep); \
            } \
            fn_8265CA20(n2); \
            n2 = n1; \
        } while (n1 != o->HEAD); \
    }

void fn_823A75F0(Obj_823A75F0 *o)
{
    Node_823A75F0 *n1;
    Node_823A75F0 *n2;

    Z_823A75F0 *z = (Z_823A75F0 *)&o->z;
    z->a = 0;
    z->b = 0;
    z->c = 0;
    z->d = 0;
    CLEAR_LIST(head_a, size_a)
    CLEAR_LIST(head_b, size_b)
    CLEAR_LIST(head_c, size_c)
}
