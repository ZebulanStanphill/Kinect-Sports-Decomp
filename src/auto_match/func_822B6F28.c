struct Obj_822B6F28;
typedef struct VT_822B6F28 {
    int pad[0x24 / 4];
    void (*f24)(struct Obj_822B6F28 *, void *);
} VT_822B6F28;
typedef struct Dev_822B6F28 {
    char pad[0x90];
    unsigned int flag;
} Dev_822B6F28;
typedef struct Owner_822B6F28 {
    char pad[0x8c0];
    Dev_822B6F28 *dev;
} Owner_822B6F28;
typedef struct Arr_822B6F28 {
    int *data;
    int pad[3];
    int idx;
} Arr_822B6F28;
typedef struct Obj_822B6F28 {
    VT_822B6F28 *vt;
    char pad0[0x14 - 4];
    Owner_822B6F28 *owner;
    int pad18;
    Arr_822B6F28 *arr;
    int pad20;
    void *cur;
} Obj_822B6F28;
typedef struct Frame_822B6F28 {
    void *vt;
    Obj_822B6F28 *obj;
    void *cur;
} Frame_822B6F28;
extern char lbl_821AC9EC[];
extern void fn_822ABBF0(int, Frame_822B6F28 *);

void fn_822B6F28(Obj_822B6F28 *self, char *param_2, int param_3)
{
    Frame_822B6F28 f;
    if (param_3 != 0 || (param_2 != 0 && param_2[0xe0] != 0)) {
        f.vt = lbl_821AC9EC;
        f.obj = self;
        f.cur = param_2;
        fn_822ABBF0(self->arr->data[self->arr->idx], &f);
        if (self->cur != param_2) {
            self->cur = param_2;
            if (param_2 != 0)
                self->owner->dev->flag = 1;
            else
                self->owner->dev->flag = 0;
            self->vt->f24(self, param_2);
        }
    }
}
