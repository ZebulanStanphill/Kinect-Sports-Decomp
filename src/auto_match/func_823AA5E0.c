typedef struct Input_823AA5E0 Input_823AA5E0;

typedef struct InputVtbl_823AA5E0 {
    void *slots00[0x1f];
    int (*GetState)(Input_823AA5E0 *self, int id); /* 0x7c */
    void *slot80;
    int (*IsValid)(Input_823AA5E0 *self, int id); /* 0x84 */
    void *slots88[5];
    void (*Report)(Input_823AA5E0 *self, int source, int released, int reason); /* 0x9c */
} InputVtbl_823AA5E0;

struct Input_823AA5E0 {
    InputVtbl_823AA5E0 *vt; /* 0x00 */
    int mode;               /* 0x04 */
    unsigned char pad08[0x18];
    unsigned int count; /* 0x20 */
    unsigned char pad24[0xc];
    int pending;  /* 0x30 */
    int locked;   /* 0x34 */
    int released; /* 0x38 */
};

int fn_823AA5E0(Input_823AA5E0 *self, int source, int id, int state)
{
    int current;

    if (self->vt->IsValid(self, id) == 0) {
        return 1;
    }
    if (self->mode != 1) {
        return 0;
    }
    if (state == self->vt->GetState(self, id)) {
        if (self->count == 0) {
            if (self->locked != 0) {
                current = self->vt->GetState(self, id);
                self->vt->Report(self, source, current == 0, 2);
                return 1;
            }
            self->locked = 1;
            return 0;
        }
        current = self->vt->GetState(self, id);
        self->vt->Report(self, source, current == 0, 5);
        return 1;
    }
    if (self->count == 0 && self->locked == 0) {
        current = self->vt->GetState(self, id);
        self->vt->Report(self, source, current == 0, 4);
        return 1;
    }
    if (self->count == 0 && self->released != 0) {
        self->mode = 2;
        return 0;
    }
    if (self->pending != 0) {
        self->vt->Report(self, source, self->vt->GetState(self, id), 3);
        return 1;
    }
    self->pending = 1;
    return 0;
}
