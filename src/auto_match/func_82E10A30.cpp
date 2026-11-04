struct Data_82E10A30 { int pad; int size; };
struct Reader_82E10A30 {
virtual void v0();
virtual void v1();
virtual void v2();
virtual void v3();
virtual void v4();
virtual void v5();
virtual void v6();
virtual Data_82E10A30 *getData();
virtual void v8();
virtual void *getAux();
virtual const char *getVersion();
virtual void setVersion(const char *);
};
extern "C" int fn_82CFBBF0(const char *,const char *);
extern "C" int fn_82E108D0(Data_82E10A30 *,void *,unsigned int,const char *,const char *);
extern "C" int fn_82E10A30(Reader_82E10A30 *self, unsigned int arg) {
 const char *version=self->getVersion();
 if(fn_82CFBBF0(version,"Havok-7.0.0-r1")==0) return 0;
 Data_82E10A30 *data=self->getData();
 if(data->size!=0) {
  if(fn_82E108D0(data,self->getAux(),arg,version,"Havok-7.0.0-r1")==0) { self->setVersion("Havok-7.0.0-r1"); return 0; }
 }
 return 1;
}
