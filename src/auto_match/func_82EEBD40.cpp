class PropertySource_82EEBD40 {
public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual int get(const char *,int,unsigned *);
};
struct PropertyOwner_82EEBD40 { char pad[0x3c]; PropertySource_82EEBD40 *source; };
extern "C" char lbl_82154A38[];
extern "C" unsigned fn_82EEBD40(PropertyOwner_82EEBD40 *self) {
 unsigned value=0;
 self->source->get(lbl_82154A38,0,&value);
 return value;
}
