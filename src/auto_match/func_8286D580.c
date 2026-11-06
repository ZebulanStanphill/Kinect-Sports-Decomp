extern float lbl_820215A8;

typedef struct Obj_8286D580 Obj_8286D580;
typedef struct {
    int pad[13];
    void (*fn34)(Obj_8286D580 *self, float f);
} Vt_8286D580;
struct Obj_8286D580 {
    Vt_8286D580 *vt;
};
typedef struct {
    int pad;
    Obj_8286D580 **begin;
    Obj_8286D580 **end;
} List_8286D580;

int fn_8286D580(List_8286D580 *list)
{
    Obj_8286D580 **p = list->begin;
    if (p != list->end) {
        float f = lbl_820215A8;
        do {
            (*p)->vt->fn34(*p, f);
            p++;
        } while (p != list->end);
    }
    return 0x20370000;
}
