extern int fn_83018588();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642FC;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Obj_83034B08 {
    char *vt;
    int refs;
    struct Obj_83034B08 *next;
    unsigned int key;
} Obj_83034B08;

typedef struct Node_83034B08 {
    struct Node_83034B08 *next;
    unsigned int key;
} Node_83034B08;

static __forceinline Obj_83034B08 *Find_83034B08(unsigned int key)
{
    int cs;
    Obj_83034B08 *p;

    cs = lbl_832642E0 + 4;
    RtlEnterCriticalSection((void *)cs);
    for (p = *(Obj_83034B08 **)((key % 0xc1 + 7) * 4 + cs); p != 0; p = p->next) {
        if (p->key == key) {
            p->refs = p->refs + 1;
            RtlLeaveCriticalSection((void *)cs);
            return p;
        }
    }
    RtlLeaveCriticalSection((void *)cs);
    return 0;
}

void fn_83034B08(int param_1)
{
    Node_83034B08 **head;
    Node_83034B08 *n;
    Obj_83034B08 *p;

    head = *(Node_83034B08 ***)(param_1 + 4);
    if (head != 0) {
        for (n = *head; n != 0; n = n->next) {
            p = Find_83034B08(n->key);
            if (p != 0) {
                (*(int (**)())(p->vt + 0x60))(p, param_1);
                (*(int (**)())(p->vt + 8))(p);
            }
        }
    }
    fn_83018588(lbl_832642FC, param_1);
}
