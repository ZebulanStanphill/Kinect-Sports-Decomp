typedef unsigned int U;
typedef struct Tagged { U text; } Tagged;
typedef struct Item { U pad[5]; Tagged name; } Item;
typedef struct Entry { Tagged name; U pad[3]; } Entry;
extern int fn_82CFBC28();
typedef struct Object { U pad[2]; Entry *items; int count; } Object;
static char *get(Tagged *p) {return (char *)(p->text & ~1u);}
static int valid(Tagged *p) {return get(p)!=0;}
void *fn_82E046E8(Object *p, U key) {
 int i;
 if(key && (i=0,p->count>0)) {do { Entry *e=p->items+i; U text=e->name.text;
 if(get(&e->name)!=0 && fn_82CFBC28(get(&e->name),key)==0) return e;
 ++i;
 } while(i<p->count);}
 return 0;
}
