class PropertySource_82EEB9C0 {
public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual int get(const char *,int,unsigned *);
};
struct PropertyOwner_82EEB9C0 { char pad[0x3c]; PropertySource_82EEB9C0 *source; };
extern "C" char lbl_82154998[];
extern "C" unsigned fn_82EEB9C0(PropertyOwner_82EEB9C0 *self) {
 unsigned value=0;
 self->source->get(lbl_82154998,0,&value);
 return value;
}
