typedef struct {
    int f0;
    int handle;
    int pad[9];
} Slot_825F8118;
typedef struct {
    int ids[6];
    int count;
} IdList_825F8118;
typedef struct {
    int f0;
    Slot_825F8118 slots[12];
    IdList_825F8118 listA;
    IdList_825F8118 listB;
    int pad[12];
    int f27c;
    float f280;
    float f284;
} Obj_825F8118;
extern float lbl_821CA45C[];
extern void fn_82536008(int handle);
extern void fn_82536288(int *handle);
extern void fn_825F84F0(Slot_825F8118 *slot);

void fn_825F8118(Obj_825F8118 *self)
{
    int i;
    float scale;

    for (i = 0; i < 12; i++) {
        fn_82536008(self->slots[i].handle);
        fn_82536288(&self->slots[i].handle);
        fn_825F84F0(&self->slots[i]);
    }
    for (i = 0; i < 6; i++) {
        self->listA.ids[i] = -1;
    }
    self->listA.count = 0;
    for (i = 0; i < 6; i++) {
        self->listB.ids[i] = -1;
    }
    self->listB.count = 0;
    self->f27c = 0;
    scale = lbl_821CA45C[1];
    self->f280 = scale;
    self->f284 = scale;
}
