typedef struct Node_82ADD090 { char pad[0x30]; unsigned a:9; unsigned flag:1; unsigned rest:22; char pad2[0x1c]; struct Node_82ADD090 *next; } Node_82ADD090;
Node_82ADD090 *fn_82ADD090(char *p) {
 Node_82ADD090 *n=*(Node_82ADD090 **)(p+0x6c);
 if ((unsigned char)n->flag) {
 do { n=n->next; while(n && (n->rest, (*(unsigned *)((char *)n+0x30)&0x400000))) n=n->next; } while((unsigned char)n->flag);
 *(Node_82ADD090 **)(p+0x6c)=n;
 }
 return *(Node_82ADD090 **)(p+0x6c);
}
