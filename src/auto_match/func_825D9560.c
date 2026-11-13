typedef struct Target_825D9560 { char pad[0x54]; unsigned char flag; } Target_825D9560;
typedef struct Node_825D9560 {
    int pad0;
    Target_825D9560 *target;
    struct Node_825D9560 *next;
} Node_825D9560;
typedef struct Obj_825D9560 {
    char pad0[0x828];
    float value;
    char pad82C[0x94];
    Node_825D9560 *head;
} Obj_825D9560;

extern int fn_82544528(void);
extern void fn_8263CBB0(unsigned int a, int b, int c, int d);
extern void fn_825D8490(Target_825D9560 *t, float v, int b, int c);
extern unsigned int lbl_8320A898;

void fn_825D9560(Obj_825D9560 *o, int b)
{
    float v = o->value;
    Node_825D9560 *n = o->head;
    int r = fn_82544528();
    fn_8263CBB0(lbl_8320A898, 1, r, 0x40000000);
    for (; n != 0; n = n->next) {
        n->target->flag = 0;
        fn_825D8490(n->target, v, b, 1);
    }
}
