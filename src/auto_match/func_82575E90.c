typedef struct Owner_82575E90 Owner_82575E90;
typedef struct Obj_82575E90 Obj_82575E90;

typedef struct ObjVtbl_82575E90 {
    void (*f0)(Obj_82575E90 *);
    void (*f4)(Obj_82575E90 *);
    void (*f8)(Obj_82575E90 *, Owner_82575E90 *);
} ObjVtbl_82575E90;

struct Obj_82575E90 {
    ObjVtbl_82575E90 *vt;
};

struct Owner_82575E90 {
    unsigned int key;
};

typedef struct Node_82575E90 {
    unsigned int key;                 /* 0x000 */
    char pad004[0x1a3];               /* 0x004 */
    unsigned char c1a7;               /* 0x1a7 */
    unsigned char c1a8;               /* 0x1a8 */
    char pad1a9[3];                   /* 0x1a9 */
    Obj_82575E90 *obj;                /* 0x1ac */
    void *p1b0;                       /* 0x1b0 */
    void *p1b4;                       /* 0x1b4 */
    char pad1b8[0x18];                /* 0x1b8 */
    void *p1d0;                       /* 0x1d0 */
    int w1d4;                         /* 0x1d4 */
    int w1d8;                         /* 0x1d8 */
    void (*cb)(Owner_82575E90 *, int);/* 0x1dc */
    int cbArg;                        /* 0x1e0 */
    struct Node_82575E90 *next;       /* 0x1e4 */
} Node_82575E90;

typedef struct List_82575E90 {
    Node_82575E90 *head;
    Node_82575E90 *tail;
} List_82575E90;

extern void fn_8251FA58(void *p);
extern void fn_82522ED8(void *p);
extern void fn_8265CA20(void *p);

int fn_82575E90(Owner_82575E90 *owner, List_82575E90 *list)
{
    Node_82575E90 *prev = 0;
    Node_82575E90 *n;

    for (n = list->head; n != 0; prev = n, n = n->next) {
        if (n->key == owner->key) {
            if (n->cb != 0) {
                n->cb(owner, n->cbArg);
            }
            if (n->obj != 0) {
                n->obj->vt->f8(n->obj, owner);
            } else if (n->p1d0 != 0) {
                fn_8265CA20(n->p1d0);
                n->p1d0 = 0;
            }
            if (n->p1b4 != 0) {
                if (n->c1a8 == 0) {
                    if (n->c1a7 != 0) {
                        fn_82522ED8(n->p1b4);
                    } else {
                        fn_8251FA58(n->p1b4);
                    }
                }
                n->p1b4 = 0;
            }
            if (n == list->tail) {
                list->tail = prev;
            }
            if (prev != 0) {
                prev->next = n->next;
            } else {
                list->head = n->next;
            }
            fn_82522ED8(n);
            return 1;
        }
    }
    return 0;
}
