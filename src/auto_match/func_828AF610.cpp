// Builds an operation object, initializes its tracking fields, and starts it.
struct Clock_828AF610 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828AF610 *fn_825089A0();
extern "C" {
extern char lbl_82024C08[];
int fn_82CE0678(const void *, int, int *);
int fn_82884898(int *);
void fn_8289FC80(void *, void *, int, int, int, int, int, int);
void *memcpy(void *, const void *, unsigned int);
void fn_8289F6C0(void *, void *);
void fn_828AF208(void *, int);
}
struct State_828AF610 {
    void *vtable; char pad[0x60]; unsigned char data[36];
    int count; float time, value; unsigned char flags[4];
    struct Reset { int a,b,c,d; } reset; int pad0, state; unsigned char flags2[4]; int state2;
    float value2; int pad1; unsigned __int64 timestamp; float value3;
};
extern "C" State_828AF610 *fn_828AF610(State_828AF610 *self, void *owner, int state, int selector, int a, int b, const void *data, int c, int d) {
    struct Result_828AF610 { int value; };
    Result_828AF610 result={};
    int id;
    if (fn_82CE0678(data,selector,&result.value)==0) id=fn_82884898(&result.value);
    else id=-1;
    fn_8289FC80(self,owner,id,a,b,c,d,0);
    self->vtable=lbl_82024C08;
    memcpy(self->data,data,36);
    self->count=0;
    self->flags[0]=0; self->flags[1]=0; self->flags[2]=0;
    float zero=0.0f;
    self->flags[3]=0;
    self->value=zero;
    State_828AF610::Reset *r=&self->reset; r->a=0; r->b=0; r->c=0; r->d=0;
    self->value2=zero; self->value3=zero;
    self->state=0;
    self->flags2[0]=0; self->flags2[1]=0; self->flags2[2]=0; self->flags2[3]=0;
    self->state2=0;
    self->timestamp=0;
    fn_8289F6C0(owner,self);
    self->time=fn_825089A0()->vf08();
    fn_828AF208(self,state);
    return self;
}
