#include <string>
extern "C" void *fn_82865C68(void *,unsigned short *,unsigned short *);
extern "C" void fn_82230300(void *,unsigned char,unsigned);
template <> std::string &std::string::replace(unsigned,unsigned,const std::string &,unsigned,unsigned);
extern "C" std::string *fn_82865D68(std::string *self,char *first,char *last,unsigned short *b,unsigned short *e) {
 char storage[32]; fn_82865C68(storage,b,e);
 self->replace(std::string::const_iterator(first,0),std::string::const_iterator(last,0),*(std::string *)storage);
 fn_82230300(storage,1,0);return self;
}
