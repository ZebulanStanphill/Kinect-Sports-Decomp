typedef struct Obj { char pad[0x80]; int key; int state; } Obj;
typedef struct Vec { Obj **first; Obj **last; } Vec;
extern Vec lbl_832643F4;
extern unsigned int fn_83025190(int *k);

void fn_82FEC738(unsigned int id)
{
    Obj **it;
    for (it = lbl_832643F4.first; it != lbl_832643F4.last; it++) {
        Obj *o = *it;
        if (fn_83025190(&o->key) == id) {
            o->state = 2;
        }
    }
}
