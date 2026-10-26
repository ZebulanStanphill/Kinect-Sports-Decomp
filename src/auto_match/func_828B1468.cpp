// Forwards an update to the operation inside the child object, then records
// the tick count of the object fn_825089A0 returns. The structures describe
// only the fields this function uses.
struct System_828B1468 {
    virtual void vf00();
    virtual void vf04();
    virtual double vf08();
    virtual unsigned __int64 vf0C();
};

struct Child_828B1468 {
    char pad[0x4c];
    char *object;
};

struct State_828B1468 {
    int pad[2];
    unsigned __int64 stamp;
    int pad2[2];
    Child_828B1468 *child;
};

extern "C" {
System_828B1468 *fn_825089A0();
void fn_828B10F0(void *operation, void *arg, int a, int b);
}

extern "C" void fn_828B1468(State_828B1468 *self, void *arg)
{
    fn_828B10F0(self->child->object + 0x38, arg, 0, 0);
    self->stamp = fn_825089A0()->vf0C();
}
