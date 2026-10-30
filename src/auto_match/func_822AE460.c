extern unsigned char fn_8288B760(unsigned int);
extern unsigned char fn_8288D868(unsigned int);
extern void fn_82381BC0(void *);

typedef struct Elem_822AE460 {
    unsigned int pad[0x168 / 4];
    unsigned int f168;
} Elem_822AE460;

typedef struct LNode_822AE460 {
    struct LNode_822AE460 *next;
    struct LNode_822AE460 *prev;
    int pad[2];
    Elem_822AE460 *val;
} LNode_822AE460;

typedef struct Slot_822AE460 {
    int pad[1];
    LNode_822AE460 *list;
} Slot_822AE460;

typedef struct Table_822AE460 {
    Slot_822AE460 **slots;
    char pad[0x10 - 4];
    int index;
} Table_822AE460;

typedef struct Vec_822AE460 {
    Table_822AE460 **begin;
    Table_822AE460 **end;
} Vec_822AE460;

int fn_822AE460(Vec_822AE460 *v)
{
    Table_822AE460 **p;
    int result = 1;
    for (p = v->begin; p < v->end; p++) {
        int ok = 1;
        LNode_822AE460 *head = (*p)->slots[(*p)->index]->list;
        LNode_822AE460 *it = head->next;
        while (it != head) {
            Elem_822AE460 *e = it->val;
            if (e->f168 == 0 || (fn_8288B760(e->f168) != 0 && fn_8288D868(e->f168) == 0)) {
                ok = 0;
                break;
            }
            fn_82381BC0(&it);
        }
        result = ok & result;
    }
    return result;
}
