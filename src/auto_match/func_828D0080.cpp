// Initializes a record with three byte sequences and the current clock value.
struct Clock_828D0080 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828D0080 *fn_825089A0();
extern "C" { extern char lbl_82026788[]; void *memcpy(void *, const void *, unsigned int); void fn_828AC428(void *); void fn_828CFA88(void *); }
struct State_828D0080 {
    void *vtable; int unknown; unsigned char flag;
    unsigned char first[36], second[8], third[16], pad[3];
    void *firstRef, *secondRef, *thirdRef;
    int count, pad0[2], sub[9], value0, value1;
    unsigned __int64 time;
};
extern "C" State_828D0080 *fn_828D0080(State_828D0080 *self, int value, const void *first, const unsigned char *second, const void *third) {
    self->flag = 0;
    self->vtable = lbl_82026788;
    unsigned char *a = self->first;
    memcpy(a, first, 36);
    unsigned char *b = self->second;
    struct Bytes_828D0080 { unsigned char data[8]; };
    *(Bytes_828D0080 *)b = *(const Bytes_828D0080 *)second;
    unsigned char *c = self->third;
    memcpy(c, third, 16);
    self->count = 0;
    fn_828AC428(self->sub);
    self->value1 = value;
    self->value0 = 0;
    self->time = fn_825089A0()->vf0C();
    self->firstRef = a; self->secondRef = b; self->thirdRef = c;
    fn_828CFA88(self);
    return self;
}
