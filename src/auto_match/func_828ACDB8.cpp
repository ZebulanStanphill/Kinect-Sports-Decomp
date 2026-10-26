// Records a new state and its time, then reports a state transition.
struct Clock_828ACDB8 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828ACDB8 *fn_825089A0();
struct State_828ACDB8 {
 virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C();
 virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1C(int,int);
 int pad[45]; int state; float time;
};
extern "C" __declspec(noinline) int fn_828ACD28(State_828ACDB8 *self) {
 int state=self->state;
 if (state==0) return 0;
 if (state==2 || state==3 || state==1 || state==4) return 1;
 if (state==5) return 2;
 return (!(state==7 || state==6))+3;
}
extern "C" void fn_828ACDB8(State_828ACDB8 *self, int state) {
    int before = fn_828ACD28(self);
    self->state = state;
    self->time = fn_825089A0()->vf08();
    int after = fn_828ACD28(self);
    if (before != after) self->vf1C(before, after);
}
