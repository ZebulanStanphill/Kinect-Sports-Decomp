typedef unsigned int uint;
typedef int (*code)();
typedef struct Item { int key; int data[3]; } Item;
typedef struct List { Item *data; int size; int capacity; } List;
extern void fn_82E1AF88(List *, int, int *);
extern int *fn_82CE5410(void);
extern void fn_82CEA4B8(int *, int);
extern void fn_82BA02A8(int *);

void fn_82E1BB60(List *o) {
 int i; int *allocator; int *manager;
 for (i=0;i<o->size;++i) fn_82E1AF88(o,o->data[i].key,o->data[i].data);
 manager=fn_82CE5410(); { int n = o->size; Item *d = o->data; allocator=(int *)manager[4];
 for (i = 0; i < n; i++) { manager = fn_82CE5410(); fn_82CEA4B8(d[i].data, manager[4]); fn_82BA02A8(d[i].data); } }
 o->size=0;
 if ((o->capacity & (int)0x80000000)==0)
   (*(code *)(*allocator+16))(allocator,o->data,o->capacity & 0x3fffffff,16);
 o->data=0; o->capacity=0x80000000;
}
