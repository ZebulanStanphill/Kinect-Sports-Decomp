typedef struct Input_823AA770 Input_823AA770;

typedef struct InputVtbl_823AA770 {
    void *slots00[0x1f];
    int (*GetState)(Input_823AA770 *self, int id); /* 0x7c */
    void *slot80;
    int (*IsValid)(Input_823AA770 *self, int id); /* 0x84 */
    void *slots88[5];
    void (*Report)(Input_823AA770 *self, int source, int released, int reason); /* 0x9c */
} InputVtbl_823AA770;

struct Input_823AA770 {
    InputVtbl_823AA770 *vt; /* 0x00 */
    unsigned char pad04[8];
    int state; /* 0x0c */
    unsigned char pad10[4];
    int time; /* 0x14 */
    unsigned char pad18[8];
    unsigned int count;    /* 0x20 */
    unsigned int maxCount; /* 0x24 */
    unsigned char pad28[8];
    int pending; /* 0x30 */
    int locked;  /* 0x34 */
    unsigned char pad38[0xc];
    int deferredState; /* 0x44 */
    int deferredTime;  /* 0x48 */
};

static __forceinline unsigned int *Max_823AA770(unsigned int *a, unsigned int *b)
{
    return *a < *b ? b : a;
}

int fn_823AA770(Input_823AA770 *self, int source, int id, int state, int time, int force)
{
    if (self->vt->IsValid(self, id) == 0) {
        return 1;
    }
    if (state == self->vt->GetState(self, id) && force != 0) {
        self->vt->Report(self, source, state == 0, 7);
        return 1;
    }
    if (self->count == 0 && self->locked == 0 && force != 0) {
        self->vt->Report(self, source, state, 4);
        return 1;
    }
    if (self->pending == 0 && force != 0) {
        self->vt->Report(self, source, state == 0, 0);
        self->deferredState = state;
        self->deferredTime = time;
        return 1;
    }
    self->state = state;
    self->pending = 0;
    self->time = time;
    self->count++;
    self->maxCount = *Max_823AA770(&self->count, &self->maxCount);
    return 0;
}
