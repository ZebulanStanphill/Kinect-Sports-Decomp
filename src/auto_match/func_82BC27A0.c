typedef struct Entry_82BC27A0 {
    unsigned char pad0[7];
    unsigned char kind;
    unsigned char pad8[4];
} Entry_82BC27A0;

typedef struct Obj_82BC27A0 {
    unsigned char pad0[0x50];
    unsigned int index;
} Obj_82BC27A0;

extern Entry_82BC27A0 lbl_820E7F98[];

int fn_82BC27A0(int *param_1, int param_2)
{
    Obj_82BC27A0 *o;
    unsigned int idx;
    unsigned char k;

    o = (Obj_82BC27A0 *)param_1[param_2 + 0x3a];
    if (o != 0) {
        idx = o->index;
    } else {
        idx = (unsigned int)param_1[param_2 + 0x14];
    }
    k = lbl_820E7F98[idx].kind;
    if (k != 1) {
        return k == 2;
    }
    return 2;
}
