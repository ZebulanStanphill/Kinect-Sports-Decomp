typedef struct View_825604A0 {
    char pad0[0x84];
    char name[1]; /* 0x84 */
} View_825604A0;

typedef struct Node_825604A0 {
    struct Node_825604A0 *next; /* 0x0 */
    struct Node_825604A0 *prev; /* 0x4 */
} Node_825604A0;

typedef struct Slot_825604A0 {
    int id;              /* 0x0 */
    View_825604A0 *view; /* 0x4 */
} Slot_825604A0;

typedef struct Registry_825604A0 {
    Slot_825604A0 slots[2];   /* 0x00 */
    Node_825604A0 *owners[2]; /* 0x10 */
} Registry_825604A0;

typedef struct RenderState_825604A0 {
    char pad0[0xd0];
    View_825604A0 defaultView; /* 0xd0 */
    char padD0[0x250 - 0xd0 - sizeof(View_825604A0)];
    View_825604A0 *view; /* 0x250 */
    char pad254[0xc8];
    int dirty0; /* 0x31c */
    int dirty1; /* 0x320 */
    int dirty2; /* 0x324 */
    int dirty3; /* 0x328 */
    int dirty4; /* 0x32c */
} RenderState_825604A0;

extern Registry_825604A0 lbl_83280B88;
extern RenderState_825604A0 lbl_83296890;

extern int fn_82560690(int type);
extern void fn_825605B0(int index, const char *name);
extern void fn_825611A8(void);

void fn_825604A0(Node_825604A0 *node)
{
    int before;
    int i;
    View_825604A0 *view;

    before = fn_82560690(0);
    if (node->next != 0) {
        node->next->prev = node->prev;
    }
    if (node->prev != 0) {
        node->prev->next = node->next;
    }
    node->next = 0;
    node->prev = 0;
    for (i = 0; i < 2; i++) {
        if (lbl_83280B88.owners[i] == node) {
            view = lbl_83280B88.slots[i].view;
            if (view != 0) {
                fn_825605B0(i, view->name);
                lbl_83296890.view = view;
                lbl_83296890.dirty1 = 1;
                lbl_83296890.dirty2 = 1;
                lbl_83296890.dirty0 = 0;
                lbl_83296890.dirty3 = 1;
                lbl_83296890.dirty4 = 1;
            } else {
                lbl_83296890.view = &lbl_83296890.defaultView;
                lbl_83280B88.owners[i] = 0;
            }
            break;
        }
    }
    if (before != fn_82560690(0)) {
        fn_825611A8();
    }
}
