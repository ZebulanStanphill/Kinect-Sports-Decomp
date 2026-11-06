class PropertySource_82EEBC60 {
public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual int get(const char *,int,unsigned *);
};
struct PropertyOwner_82EEBC60 { char pad[0x3c]; PropertySource_82EEBC60 *source; };
extern "C" char lbl_820ED0B8[];
extern "C" unsigned fn_82EEBC60(PropertyOwner_82EEBC60 *self) {
 unsigned value=0;
 self->source->get(lbl_820ED0B8,0,&value);
 return value;
}
