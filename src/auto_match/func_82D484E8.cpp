class Item_82D484E8 {public: virtual void f0();virtual void f4();virtual void f8();virtual void fc();virtual void f10();virtual void f14();virtual void f18();virtual void f1c();virtual void f20();virtual void f24();virtual void f28();virtual unsigned size();virtual void copy(char *);};
struct Group_82D484E8 {char pad[68];Item_82D484E8 **items;int count;};
extern "C" char *fn_82D484E8(Group_82D484E8 *s,char *out) {char *p=out;int i=0; if(s->count>0) {int off=0;do {Item_82D484E8 *v=*(Item_82D484E8 **)((char *)s->items+off);v->copy(p);p+=v->size()*16;i++;off+=4;}while(i<s->count);}return out;}
