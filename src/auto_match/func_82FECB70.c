typedef struct Inner_82FECB70 {
    char pad[0x64];
    unsigned int key;
} Inner_82FECB70;

typedef struct Mid_82FECB70 {
    char pad[8];
    Inner_82FECB70 *inner;
} Mid_82FECB70;

typedef struct Obj_82FECB70 {
    char pad[0xfc];
    Mid_82FECB70 *mid;
} Obj_82FECB70;

typedef struct Node_82FECB70 {
    struct Node_82FECB70 *next;
    int pad[4];
    Obj_82FECB70 *obj;
} Node_82FECB70;

typedef struct Param_82FECB70 {
    char pad[0x64];
    unsigned int key;
} Param_82FECB70;

typedef struct Range_82FECB70 {
    Node_82FECB70 ***begin;
    Node_82FECB70 ***end;
} Range_82FECB70;

extern Range_82FECB70 lbl_832643F4;

Node_82FECB70 *fn_82FECB70(Param_82FECB70 *param_1)
{
    unsigned int key;
    Node_82FECB70 ***it;
    Node_82FECB70 *n;

    key = param_1->key;
    if (key != 0) {
        for (it = lbl_832643F4.begin; it != lbl_832643F4.end; it++) {
            for (n = **it; n != 0; n = n->next) {
                if ((n->obj != 0 ? n->obj->mid->inner : 0)->key == key) {
                    return n;
                }
            }
        }
    }
    return 0;
}
