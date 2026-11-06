typedef struct Node_82ABDCB0 { char pad[0x30]; unsigned a:9; unsigned flag:1; unsigned rest:22; char pad2[0x1c]; struct Node_82ABDCB0 *next; } Node_82ABDCB0;
Node_82ABDCB0 *fn_82ABDCB0(char *p) {
 Node_82ABDCB0 *n=*(Node_82ABDCB0 **)(p+0x70);
 if ((unsigned char)n->flag) {
 do { n=n->next; while(n && (n->rest, (*(unsigned *)((char *)n+0x30)&0x400000))) n=n->next; } while((unsigned char)n->flag);
 *(Node_82ABDCB0 **)(p+0x70)=n;
 }
 return *(Node_82ABDCB0 **)(p+0x70);
}
