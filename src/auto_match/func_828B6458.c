typedef struct Object_828B6458 Object_828B6458;
typedef struct Object_828B6458Vtbl {
    void *slot0;
    void *slot1;
    int (*IsReady)(Object_828B6458 *self);
} Object_828B6458Vtbl;
struct Object_828B6458 {
    Object_828B6458Vtbl *vt;
    char pad[0x1c];
    unsigned int state;
};

int fn_828B6458(Object_828B6458 *self)
{
    switch (self->state) {
    case 0:
        return 0;
    case 1:
        return self->vt->IsReady(self);
    case 2:
        return 1;
    case 3:
        return 1;
    }
    return 0;
}
