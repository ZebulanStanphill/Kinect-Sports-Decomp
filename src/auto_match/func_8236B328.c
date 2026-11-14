typedef struct List_8236B328 {
    void **begin;
    void **end;
} List_8236B328;

typedef struct Record_8236B328 {
    float threshold;
    float limit;
    unsigned int count;
    char pad[0x12c - 0xc];
} Record_8236B328;

typedef struct Game_8236B328 {
    char pad0[0x20];
    List_8236B328 **lists;
    char pad24[0x550 - 0x24];
    Record_8236B328 records[8];
    char pad[0x1378 - 0x550 - 8 * 0x12c];
    unsigned int count;
    float value;
} Game_8236B328;

typedef struct Settings_8236B328 {
    char pad[4];
    unsigned char disabled;
} Settings_8236B328;

extern Settings_8236B328 *lbl_832975B0;
extern char lbl_83265A28[];
extern Settings_8236B328 *fn_82250A18(void);
extern int fn_823CC7A0(void);
extern int fn_82520780(void *clock, float time);

int fn_8236B328(Game_8236B328 *self, int which)
{
    List_8236B328 *list = self->lists[which == 0];
    if (list->end - list->begin == 0) {
        Record_8236B328 *r = &self->records[fn_823CC7A0()];
        if (self->count < r->count && self->value > r->limit) {
            Settings_8236B328 *s = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
            if (s->disabled != 0)
                return 1;
            return fn_82520780(lbl_83265A28, r->threshold);
        }
    }
    return 0;
}
