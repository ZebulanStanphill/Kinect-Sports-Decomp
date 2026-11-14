typedef struct Iface_8302C908 Iface_8302C908;

typedef struct IfaceVtbl_8302C908 {
    void *slot0;
    void *slot4;
    void *slot8;
    unsigned int (*GetCount)(Iface_8302C908 *self);
    unsigned int (*GetId)(Iface_8302C908 *self, unsigned short index);
    void *slot14;
    void *slot18;
    void *slot1c;
    void *slot20;
    void *slot24;
    unsigned char (*GetFlag)(Iface_8302C908 *self, unsigned short index);
} IfaceVtbl_8302C908;

struct Iface_8302C908 {
    IfaceVtbl_8302C908 *vt;
};

typedef struct Owner_8302C908 {
    unsigned char pad[0x88];
    Iface_8302C908 *iface;
} Owner_8302C908;

int fn_8302C908(Owner_8302C908 *self, unsigned short *data)
{
    unsigned short count;
    unsigned short i;
    unsigned char *p;
    unsigned int id;
    unsigned char flag;

    count = *data;
    p = (unsigned char *)(data + 1);
    if (count != self->iface->vt->GetCount(self->iface)) {
        return 1;
    }
    for (i = 0; i < count; i++) {
        id = *(unsigned int *)p;
        p += 4;
        flag = *p;
        p++;
        if (self->iface->vt->GetId(self->iface, i) != id ||
            self->iface->vt->GetFlag(self->iface, i) != flag) {
            return 1;
        }
    }
    return 0;
}
