typedef struct Node_83063190 {
    int f0;
    struct Node_83063190 *next;     /* 0x04 */
} Node_83063190;

typedef struct Entry_83063190 {
    char pad[0x58];
    Node_83063190 *nodes;           /* 0x58 */
} Entry_83063190;

typedef struct Iter_83063190 Iter_83063190;
typedef struct IterVtbl_83063190 {
    void *f0;
    Entry_83063190 *(*next)(Iter_83063190 *it, Entry_83063190 *cur);
} IterVtbl_83063190;
struct Iter_83063190 {
    IterVtbl_83063190 *vt;
    int f4;
    Entry_83063190 *cur;            /* 0x08 */
};

typedef struct Obj_83063190 {
    char pad[0x2c];
    void *table;                    /* 0x2c */
} Obj_83063190;

extern IterVtbl_83063190 lbl_8217E890;
extern void fn_83065890(Iter_83063190 *it, void *table);
extern void fn_83065C58(Node_83063190 *node);

void fn_83063190(Obj_83063190 *self)
{
    Iter_83063190 it;
    Node_83063190 *n;
    Node_83063190 *next;

    it.cur = 0;
    it.vt = &lbl_8217E890;
    fn_83065890(&it, self->table);
    for (; it.cur != 0; it.cur = it.vt->next(&it, it.cur)) {
        for (n = it.cur->nodes; n != 0; n = next) {
            next = n->next;
            fn_83065C58(n);
        }
    }
}
