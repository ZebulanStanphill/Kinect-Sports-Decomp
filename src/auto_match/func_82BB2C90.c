typedef struct Obj_82BB2C90 {
    char pad0[0x14];
    int count;
    char pad18[0xe8 - 0x18];
    struct Obj_82BB2C90 *links[1];
} Obj_82BB2C90;

int fn_82BB2C90(Obj_82BB2C90 *self)
{
    Obj_82BB2C90 *found = 0;
    int i;
    for (i = 1; i <= self->count; i++) {
        Obj_82BB2C90 *link = self->links[i];
        if (link != 0 && link != self) {
            if (found == 0) {
                found = link;
            } else if (found != link) {
                return 0;
            }
        }
    }
    return 1;
}
