class PropertySource_82EEBAA0 {
public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual int get(const char *,int,unsigned *);
};
struct PropertyOwner_82EEBAA0 { char pad[0x3c]; PropertySource_82EEBAA0 *source; };
extern "C" char lbl_821549A8[];
extern "C" unsigned fn_82EEBAA0(PropertyOwner_82EEBAA0 *self) {
 unsigned value=0;
 self->source->get(lbl_821549A8,0,&value);
 return value;
}
