typedef struct Obj_82FEC798 {
    char pad0[0x84];
    int state;                      /* 0x84 */
} Obj_82FEC798;

typedef struct Vec_82FEC798 {
    Obj_82FEC798 **first;
    Obj_82FEC798 **last;
} Vec_82FEC798;

typedef struct Manager_82FEC798 {
    char pad0[0x70];
    int state;                      /* 0x70 */
} Manager_82FEC798;

extern Vec_82FEC798 lbl_832643F4;
extern Manager_82FEC798 *lbl_832643D4;

void fn_82FEC798(void)
{
    Obj_82FEC798 **it;

    for (it = lbl_832643F4.first; it != lbl_832643F4.last; it++)
        (*it)->state = 2;
    lbl_832643D4->state = 2;
}
