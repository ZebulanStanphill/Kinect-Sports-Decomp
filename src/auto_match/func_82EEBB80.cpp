class PropertySource_82EEBB80 {
public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual int get(const char *,int,unsigned *);
};
struct PropertyOwner_82EEBB80 { char pad[0x3c]; PropertySource_82EEBB80 *source; };
extern "C" char lbl_820ED078[];
extern "C" unsigned fn_82EEBB80(PropertyOwner_82EEBB80 *self) {
 unsigned value=0;
 self->source->get(lbl_820ED078,0,&value);
 return value;
}
