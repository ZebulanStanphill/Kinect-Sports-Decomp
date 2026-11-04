typedef struct Item_82AD0098 { char pad[8]; unsigned int type; } Item_82AD0098;
typedef struct Node_82AD0098 { int flags; int pad; struct Node_82AD0098 *next; int pad2; Item_82AD0098 *item; } Node_82AD0098;
typedef struct { int pad; Node_82AD0098 *head; } Obj_82AD0098;
static __forceinline int alive(Node_82AD0098 *n) {if(n)return 1;return 0;}
Item_82AD0098 *fn_82AD0098(Obj_82AD0098 *o) {Node_82AD0098 *n=o->head;Item_82AD0098 *item;while(alive(n)){ item=n->item;if(item && (item->type&0x3f80)==0x3700 && (n->flags & 0xe000000u))return item;n=n->next;}return 0;}