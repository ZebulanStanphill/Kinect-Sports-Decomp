typedef struct Entry { int v[4]; } Entry;
typedef struct Table { Entry entries[32]; unsigned int count; } Table;
typedef struct Obj { int pad; Table *table; char pad2[0x14]; int src; } Obj;

extern int fn_82CE23E0(int *src, unsigned char *out);

static Entry *Table_get(Table *t, unsigned int idx)
{
    return idx < t->count ? &t->entries[idx] : 0;
}

int fn_82CE2BA0(Obj *o, unsigned int kind, Entry **out, unsigned int *flag)
{
    unsigned char b;
    int hr;

    if (kind <= 1) {
        hr = fn_82CE23E0(&o->src, &b);
        if (hr < 0)
            return hr;
        if (flag != 0)
            *flag = (b >> 5) & 1;
        if ((*out = Table_get(o->table, b & 0x1f)) != 0)
            return hr;
    }
    return 0x80004005;
}
