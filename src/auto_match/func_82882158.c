struct Entry {unsigned int a,b,value;};
extern struct Entry *fn_82881B18(int);
unsigned __int64 fn_82882158(int index) {struct Entry *entry;if(index>=0 && (entry=fn_82881B18(index))!=0) return entry->value;return 0xffffffffffffffff;}
