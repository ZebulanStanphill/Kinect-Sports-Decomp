typedef struct Ent_827AECE8 { unsigned int start; unsigned int len; char pad[0x20]; } Ent_827AECE8;
typedef struct Tab_827AECE8 { Ent_827AECE8 *data; unsigned int count; } Tab_827AECE8;

int fn_827AECE8(Tab_827AECE8 *t, unsigned int a, unsigned int b)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
    unsigned int s = t->data[i].start;
    if (s <= a) { if (a < s + t->data[i].len) return 1; if (s >= a && s < b) return 1; }
    else if (s < b) return 1;
}

    return 0;
}
