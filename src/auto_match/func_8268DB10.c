typedef struct { unsigned short *data; char pad[8]; unsigned short index[256]; } Table;
void *fn_8268DB10(Table *t, unsigned int key) { unsigned int a,b; if (key >= 0x1000) return 0; a=t->index[key>>4]; if (a==0xffff) return 0; b=t->data[a*4+(key&15)]; if (b==0xffff) return 0; return (char *)t->data+b*8; }
