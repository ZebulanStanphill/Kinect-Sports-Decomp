typedef struct Selection_8240C068 Selection_8240C068;

typedef struct SelectionVtable_8240C068 {
    void *pad0;
    int (*first)(Selection_8240C068 *);
    int (*second)(Selection_8240C068 *);
} SelectionVtable_8240C068;

struct Selection_8240C068 {
    SelectionVtable_8240C068 *vtable;
    int reserved;
    int count;
};

typedef struct Detector_8240C068 Detector_8240C068;

typedef struct DetectorVtable_8240C068 {
    void *pad0[15];
    unsigned char (*test)(Detector_8240C068 *);
} DetectorVtable_8240C068;

struct Detector_8240C068 {
    DetectorVtable_8240C068 *vtable;
};

typedef struct Source_8240C068 Source_8240C068;

typedef struct SourceVtable_8240C068 {
    void *pad0;
    struct State_8240C068 *(*get)(Source_8240C068 *);
} SourceVtable_8240C068;

struct Source_8240C068 {
    SourceVtable_8240C068 *vtable;
};

typedef struct State_8240C068 {
    char pad0[0x2e0];
    Detector_8240C068 detector;
} State_8240C068;

typedef struct Owner_8240C068 {
    char pad0[0x84];
    Source_8240C068 *source;
} Owner_8240C068;

typedef struct Player_8240C068 {
    int unused;
    Owner_8240C068 *owner;
    char pad8[0x3c];
    Selection_8240C068 selection;
    char pad50[0x14];
    int previous;
} Player_8240C068;

extern void fn_8240BCE8(Player_8240C068 *, int, int, int);
extern unsigned int lbl_83265A28;

void fn_8240C068(Player_8240C068 *self)
{
    int count = self->selection.count;
    Selection_8240C068 *selection;
    int first;
    int second;
    int (*choose)(Selection_8240C068 *);

    if (count > self->previous) {
        selection = &self->selection;
        first = selection->vtable->second(selection);
        fn_8240BCE8(self, 1, selection->vtable->first(selection), first);
        return;
    } else if (count < self->previous) {
        selection = &self->selection;
        first = selection->vtable->first(selection);
        fn_8240BCE8(self, 1, selection->vtable->second(selection), first);
        return;
    } else if (count > 0) {
        Source_8240C068 *source = self->owner->source;
        int preferSecond;
        if (source != 0) {
            Detector_8240C068 *detector = &source->vtable->get(source)->detector;
            preferSecond = detector->vtable->test(detector) != 0;
        } else {
            lbl_83265A28 = lbl_83265A28 * 1664525u + 1013904223u;
            preferSecond = (int)lbl_83265A28 > 0;
        }

        choose = preferSecond ? self->selection.vtable->second : self->selection.vtable->first;
        selection = &self->selection;
        first = choose(selection);
        if (preferSecond)
            second = selection->vtable->first(selection);
        else
            second = selection->vtable->second(selection);
        fn_8240BCE8(self, 1, second, first);
    } else {
        fn_8240BCE8(self, 5, 0, 0);
    }
}
