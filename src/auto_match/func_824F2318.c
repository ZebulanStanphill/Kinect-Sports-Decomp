typedef struct Obj_824F2318 Obj_824F2318;
typedef struct ObjVt_824F2318 {
    void *slots[3];
    void (*destroy)(Obj_824F2318 *self, int flags);
} ObjVt_824F2318;
struct Obj_824F2318 {
    ObjVt_824F2318 *vt;
};

typedef struct Node_824F2318 Node_824F2318;
struct Node_824F2318 {
    Obj_824F2318 *obj;
    Node_824F2318 *next;
};

typedef struct Res_824F2318 {
    unsigned int unk0 : 28;
    unsigned int type : 4;
} Res_824F2318;

typedef struct Mgr_824F2318 {
    char pad0[0x2ed8];
    Res_824F2318 *res5;
    char pad2edc[0x268];
    Res_824F2318 *res2;
    Res_824F2318 *res4a;
    char pad314c[0xc];
    Res_824F2318 *res4b;
    Res_824F2318 *res1[16];
    char pad319c[0x14];
    Res_824F2318 *res3[26];
    char pad3218[0x2c];
    Res_824F2318 *res7;
    Res_824F2318 *res6;
} Mgr_824F2318;

typedef struct Self_824F2318 {
    void *vtable;
    int unk4[2];
    Node_824F2318 *listA;
    Node_824F2318 *listB;
    void *h14;
    void *h18;
    void *h1c;
    void *h20;
    void *h24;
    void *h28;
    void *h2c;
    void *h30;
    void *h34;
    Res_824F2318 *res;
    void *p3c;
    void *p40;
    void *p44;
    void *p48;
    void *p4c;
} Self_824F2318;

extern char lbl_821C1E18[];
extern char lbl_821C1424[];
extern Mgr_824F2318 *lbl_8320A898;
extern void fn_82522ED8(Node_824F2318 *node);
extern void fn_82545950(void **h);
extern void fn_82545A90(void **h);
extern void fn_8263A1B8(Mgr_824F2318 *mgr, int a, int b);
extern void fn_82645838(Res_824F2318 *res);
extern void fn_8262FEC8(Res_824F2318 *res);
extern void fn_8251FA58(void *p);

void fn_824F2318(Self_824F2318 *self)
{
    Node_824F2318 *node;
    Node_824F2318 *cur;

    self->vtable = lbl_821C1E18;
    node = self->listA;
    while (node != 0) {
        if (node->obj != 0) {
            node->obj->vt->destroy(node->obj, 1);
            node->obj = 0;
        }
        cur = node;
        node = node->next;
        fn_82522ED8(cur);
    }
    self->listA = 0;
    node = self->listB;
    while (node != 0) {
        if (node->obj != 0) {
            node->obj->vt->destroy(node->obj, 1);
            node->obj = 0;
        }
        cur = node;
        node = node->next;
        fn_82522ED8(cur);
    }
    self->listB = 0;
    if (self->h14 != 0) {
        fn_82545950(&self->h14);
    }
    if (self->h18 != 0) {
        fn_82545A90(&self->h18);
    }
    if (self->h1c != 0) {
        fn_82545950(&self->h1c);
    }
    if (self->h20 != 0) {
        fn_82545A90(&self->h20);
    }
    if (self->h24 != 0) {
        fn_82545950(&self->h24);
    }
    if (self->h28 != 0) {
        fn_82545A90(&self->h28);
    }
    if (self->h2c != 0) {
        fn_82545950(&self->h2c);
    }
    if (self->h30 != 0) {
        fn_82545A90(&self->h30);
    }
    if (self->h34 != 0) {
        fn_82545A90(&self->h34);
    }
    if (self->res != 0) {
        Res_824F2318 *res = self->res;
        Mgr_824F2318 *mgr = lbl_8320A898;
        int found = 0;
        int i;

        switch (res->type) {
        case 1:
            for (i = 0; i < 16; i++) {
                if (mgr->res1[i] == res) {
                    found = 1;
                }
            }
            break;
        case 3:
            for (i = 0; i < 26; i++) {
                if (mgr->res3[i] == res) {
                    found = 1;
                }
            }
            break;
        case 2:
            if (mgr->res2 == res) {
                found = 1;
            }
            break;
        case 4:
            if (mgr->res4a == res) {
                found = 1;
            }
            if (mgr->res4b == res) {
                found = 1;
            }
            break;
        case 5:
            found = mgr->res5 == res;
            break;
        case 6:
            found = mgr->res6 == res;
            break;
        case 7:
            found = mgr->res7 == res;
            break;
        case 8:
        case 9:
            found = 0;
            break;
        }
        if (found) {
            fn_8263A1B8(mgr, 0, 0);
        }
        fn_82645838(self->res);
        fn_8262FEC8(self->res);
        self->res = 0;
    }
    if (self->p3c != 0) {
        fn_8251FA58(self->p3c);
        self->p3c = 0;
    }
    if (self->p40 != 0) {
        fn_8251FA58(self->p40);
        self->p40 = 0;
    }
    if (self->p44 != 0) {
        fn_8251FA58(self->p44);
        self->p44 = 0;
    }
    if (self->p48 != 0) {
        fn_8251FA58(self->p48);
        self->p48 = 0;
    }
    if (self->p4c != 0) {
        fn_8251FA58(self->p4c);
        self->p4c = 0;
    }
    self->vtable = lbl_821C1424;
}
