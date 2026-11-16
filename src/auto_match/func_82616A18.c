typedef struct Target_82616A18 {
    char pad[0x54];
    unsigned char flag; /* 0x54 */
} Target_82616A18;

typedef struct State_82616A18 {
    char pad[0x34];
    Target_82616A18 *first;  /* 0x34 */
    Target_82616A18 *second; /* 0x38 */
    Target_82616A18 *third;  /* 0x3c */
    void *last;              /* 0x40 */
} State_82616A18;

extern int fn_82544528(void);
extern void fn_8263CBB0(unsigned int, int, int, unsigned int);
extern unsigned int lbl_8320A898;
extern void fn_825F2FB8(void *, float, int);
extern void fn_825D8490(Target_82616A18 *, float, int, int);

void fn_82616A18(State_82616A18 *self, float delta, int index)
{
    int result = fn_82544528();
    fn_8263CBB0(lbl_8320A898, 1, result, 0x40000000);
    if (self->last != 0) {
        fn_825F2FB8(self->last, delta, index);
    }
    if (self->first != 0) {
        Target_82616A18 *target = self->first;
        target->flag = 0;
        fn_825D8490(self->first, delta, index, 1);
    }
    if (self->second != 0) {
        Target_82616A18 *target = self->second;
        target->flag = 0;
        fn_825D8490(self->second, delta, index, 1);
    }
    if (self->third != 0) {
        Target_82616A18 *target = self->third;
        target->flag = 0;
        fn_825D8490(self->third, delta, index, 1);
    }
}
