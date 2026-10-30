extern unsigned char fn_82FF3AF8();
typedef struct N { struct N *next; } N;
typedef struct L { N *head; N *tail; N *cur; int a,b,count; } L;
int fn_83031220(L *p){ N *n; if (fn_82FF3AF8()) { if (p->tail == 0) p->head = p->cur; else p->tail->next = p->cur; p->tail = p->cur; p->cur = p->tail->next; p->tail->next = 0; p->count++; return (int)p->tail + 4; } return 0; }
