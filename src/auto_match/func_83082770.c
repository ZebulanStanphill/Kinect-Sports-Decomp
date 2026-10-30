typedef struct { int key; int val; } Ent;
typedef struct { Ent *data; int pad; int last; } Tbl;
typedef struct { char pad[8]; Tbl t; } Map;
extern int *fn_82CE5410();
extern void fn_82CEA160();
void fn_83082770(char *o, Map *m)
{
    Tbl *s = &m->t;
    int i = 0;
    int j;
    Ent *p;
    if (0 <= s->last) {
        p = s->data;
        do {
            if (p->key != -1)
                break;
            i++;
            p++;
        } while (i <= s->last);
    }
    if (i <= m->t.last) {
        do {
            Ent *e = &s->data[i];
            int val = e->val;
            int key = e->key;
            int *r = fn_82CE5410();
            fn_82CEA160(o + 8, r[4], key, val);
            j = i + 1;
            if (j <= s->last) {
                p = &s->data[j];
                do {
                    if (p->key != -1)
                        break;
                    j++;
                    p++;
                } while (j <= s->last);
            }
            i = j;
        } while (i <= m->t.last);
    }
}
