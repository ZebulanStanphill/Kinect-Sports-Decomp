typedef struct { unsigned key; unsigned __int64 value; } Dummy_82FFE5B8;
typedef struct { unsigned words[3]; } Entry_82FFE5B8;
typedef struct { Entry_82FFE5B8 *begin, *end; int capacity; } Table_82FFE5B8;
extern Entry_82FFE5B8 *fn_8301B248(Table_82FFE5B8 *);
static __forceinline unsigned __int64 *find_82FFE5B8(Table_82FFE5B8 *t,unsigned key) {
 Entry_82FFE5B8 *p;
 for(p=t->begin;p!=t->end && p->words[0]!=key;p++) {}
 { unsigned char found=p!=t->end; return found ? (unsigned __int64 *)&p->words[1] : 0; }
}
unsigned __int64 *fn_82FFE5B8(Table_82FFE5B8 *t,unsigned key,unsigned __int64 value) {
 unsigned __int64 *p=find_82FFE5B8(t,key);
 if(p) *p=value;
 else {
 Entry_82FFE5B8 *e=fn_8301B248(t);
 if(e) { p=(unsigned __int64 *)&e->words[1]; e->words[0]=key; *(unsigned __int64 *)&e->words[1]=value; }
 }
 return p;
}
