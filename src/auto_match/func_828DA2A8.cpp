// Creates and submits an object when the selected service's cooldown expires.
// The placeholder types preserve the observed service, item, pair, and object
// layouts. The system object's time method occupies virtual slot 0x08. The
// temporary pair's shared ownership is released after the object is submitted.

struct SystemClock_828DA2A8 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" SystemClock_828DA2A8 *fn_825089A0();
struct Item_828DA2A8 {
    char pad[0x7c];
    int kind,state;
};
struct Pair_828DA2A8 {
    Item_828DA2A8 *first;
    void *second;
};
struct Object_828DA2A8 {
    char pad[0x94];
    unsigned value;
};
struct Service_828DA2A8 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void *vf0c();
};
extern "C" {
    Service_828DA2A8 *fn_8289F2E0(void *,int);
    float fn_828AECA8(void *);
    void fn_828AECB0(void *,float);
    void *fn_8265C9E0(unsigned);
    Object_828DA2A8 *fn_828D9D58(void *,bool);
    void fn_828DA230(Object_828DA2A8 *,void *);
    void *fn_828A17A0();
    void fn_828D0D98(Pair_828DA2A8 *,void *);
    int fn_828D0148(Item_828DA2A8 *);
    unsigned fn_828D8A98(int);
    void fn_82886518(Object_828DA2A8 *,int,int);
    void fn_828BE158(void *,Object_828DA2A8 *,int,bool);
    void fn_822315A0(void *);
    extern void *lbl_83213FC8;
    extern float lbl_82026E10;
}
static __forceinline bool eligible(Item_828DA2A8 *item) {
    switch(item->kind) {
        case 1: case 2: case 3: case 5: return false;
        case 4: return item->state==1;
        default: return false;
    }
}
extern "C" bool fn_828DA2A8(void *self,int index) {
    bool result=true;
    bool first=true;
    float now=fn_825089A0()->vf08();
    void *key=fn_8289F2E0(self,index)->vf0c();
    float last=fn_828AECA8(key);
    if(last!=0.0f) {
        first=false;
        if(now-last<lbl_82026E10) result=false;
    }
    if(result) {
        fn_828AECB0(key,now);
        void *mem=fn_8265C9E0(0x98);
        Object_828DA2A8 *obj=mem?fn_828D9D58(mem,true):0;
        fn_828DA230(obj,self);
        void *context=lbl_83213FC8;
        if(!context) context=fn_828A17A0();
        Pair_828DA2A8 pair;
        fn_828D0D98(&pair,context);
        int value=pair.first && eligible(pair.first)?fn_828D0148(pair.first):0x20000;
        unsigned amount=fn_828D8A98(value);
        unsigned *field=&obj->value;
        *field=amount;
        if(*field>127) *field=127;
        if(first) fn_82886518(obj,-1,-1);
        fn_828BE158(self,obj,index,!first);
        if(pair.second) fn_822315A0(pair.second);
    }
    return result;
}
