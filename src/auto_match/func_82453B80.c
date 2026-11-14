typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

typedef struct Entry_82453B80 {
    int unused, a, key, c;
    __vector4 vector;
    float value;
    unsigned char flag;
    char pad[11];
} Entry_82453B80;

typedef struct Table_82453B80 {
    char pad[0x6c];
    Entry_82453B80 *begin, *end;
} Table_82453B80;

typedef struct State_82453B80 {
    char pad[0x44];
    Table_82453B80 *table;
} State_82453B80;

extern void fn_82454710(void *, void *, Entry_82453B80 *);

int fn_82453B80(State_82453B80 *self, int key, Entry_82453B80 *out)
{
    Entry_82453B80 *it = self->table->begin;
    Entry_82453B80 *end = self->table->end;
    int result;
    while (it != end) {
        if (it->key == key) {
            out->a = it->a;
            out->key = it->key;
            out->c = it->c;
            out->vector = it->vector;
            out->value = it->value;
            out->flag = it->flag;
            fn_82454710(&result, &self->table->begin, it);
            return 1;
        }
        ++it;
    }
    return 0;
}
