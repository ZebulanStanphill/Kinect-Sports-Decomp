typedef struct Node {unsigned short kind;char pad[0x12];struct Node *next;} Node;
Node *fn_8309F508(Node *node){do{node=node->next;}while(node->kind>=0x17);return node;}
