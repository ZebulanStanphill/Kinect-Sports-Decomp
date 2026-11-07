typedef struct Obj_82577330 Obj_82577330;

typedef struct Vtbl_82577330 {
    void *slots[9];
    void (*setValue)(Obj_82577330 *self, float v); /* 0x24 */
} Vtbl_82577330;

struct Obj_82577330 {
    Vtbl_82577330 *vt;
};

typedef struct Node_82577330 {
    Obj_82577330 *obj;
    struct Node_82577330 *next;
} Node_82577330;

typedef struct Self_82577330 {
    char pad0[0x14];
    Node_82577330 *list14;
    Node_82577330 *list18;
    Node_82577330 *list1c;
    Node_82577330 *list20;
    Node_82577330 *list24;
    char pad28[0x80 - 0x28];
    Obj_82577330 *obj80;
    Obj_82577330 *obj84;
    int field88;
    Obj_82577330 *obj8c;
    char pad90[0xb0 - 0x90];
    float valueB0;
} Self_82577330;

void fn_82577330(Self_82577330 *self, float v)
{
    Node_82577330 *n;

    self->valueB0 = v;
    if (self->obj80 != 0) {
        self->obj80->vt->setValue(self->obj80, v);
    }
    if (self->obj8c != 0) {
        self->obj8c->vt->setValue(self->obj8c, v);
    }
    if (self->obj84 != 0) {
        self->obj84->vt->setValue(self->obj84, v);
    }
    for (n = self->list14; n != 0; n = n->next) {
        if (n->obj != 0) {
            n->obj->vt->setValue(n->obj, v);
        }
    }
    for (n = self->list18; n != 0; n = n->next) {
        if (n->obj != 0) {
            n->obj->vt->setValue(n->obj, v);
        }
    }
    for (n = self->list1c; n != 0; n = n->next) {
        if (n->obj != 0) {
            n->obj->vt->setValue(n->obj, v);
        }
    }
    for (n = self->list20; n != 0; n = n->next) {
        if (n->obj != 0) {
            n->obj->vt->setValue(n->obj, v);
        }
    }
    for (n = self->list24; n != 0; n = n->next) {
        if (n->obj != 0) {
            n->obj->vt->setValue(n->obj, v);
        }
    }
}
