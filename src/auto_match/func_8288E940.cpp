class Unit_8288B2D8 { public: unsigned get(unsigned); };
extern "C" {
unsigned fn_828A12E8(unsigned);
void fn_828B5580(void *,void *);
unsigned fn_828B55F8(void *);
unsigned *fn_8288CD40(void *,unsigned,unsigned *);
void fn_828B55B0(void *);
unsigned char fn_82897BA8(unsigned);
unsigned fn_82897620(unsigned,unsigned);
unsigned char fn_8289AB78(unsigned);
unsigned fn_8288E940(unsigned *p) {
 unsigned a=fn_828A12E8(p[4]), key, tmp;
 unsigned char iter[8];
 fn_828B5580(iter,p+5); key=fn_828B55F8(iter);
 unsigned *it=fn_8288CD40(&tmp,a+0x94,&key);
 Unit_8288B2D8 *data=(Unit_8288B2D8 *)*(unsigned *)(*it+0x40);
 fn_828B55B0(iter);
 unsigned parent=((unsigned (*)(void *))(*(unsigned *)(*p+4)))(p);
 unsigned count=*(unsigned *)((unsigned)data+8);
 unsigned ok=1;
 for(unsigned i=0;i<count;++i) {
  if(!fn_82897BA8(data->get(i))) {
   unsigned item=fn_82897620(parent,i);
   if ((*(unsigned *)(item+0x20) && ((unsigned (*)(void *))(*(unsigned *)(*(unsigned *)*(unsigned *)(item+0x20)+4)))((void *)*(unsigned *)(item+0x20))) ||
       (*(unsigned *)(item+0x20) && ((unsigned (*)(void *))(*(unsigned *)(*(unsigned *)*(unsigned *)(item+0x20)+0x14)))((void *)*(unsigned *)(item+0x20)))) {
    unsigned char value=fn_8289AB78(item);
    ok=(unsigned char)((unsigned char)ok && value);
   }
  }
 }
 return ok;
}
}
