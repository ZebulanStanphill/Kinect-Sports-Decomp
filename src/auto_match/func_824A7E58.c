typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int index);
__vector4 __vmsum3fp(__vector4 first, __vector4 second);

typedef struct Choice_824A7E58 {
    int id;      /* 0x00 */
    float score; /* 0x04 */
} Choice_824A7E58;

typedef struct Node_824A7E58 {
    struct Node_824A7E58 *next; /* 0x00 */
    struct Node_824A7E58 *prev; /* 0x04 */
    Choice_824A7E58 value;      /* 0x08 */
} Node_824A7E58;

typedef struct List_824A7E58 {
    Node_824A7E58 *head; /* 0x00 */
    unsigned int size;   /* 0x04 */
    unsigned char alloc; /* 0x08: the empty allocator object */
} List_824A7E58;

typedef struct Picker_824A7E58 {
    unsigned char pad0[0x48];
    float threshold; /* 0x48 */
    unsigned char pad4c[0x10];
    int choice; /* 0x5c */
} Picker_824A7E58;

extern List_824A7E58 *fn_824A7F80(List_824A7E58 *list);
extern void fn_824A7FF8(List_824A7E58 *list);
extern void fn_824A8070(List_824A7E58 *list, const Choice_824A7E58 *value);
extern void fn_824A8118(List_824A7E58 *list);

void fn_824A7E58(Picker_824A7E58 *self, const __vector4 *direction)
{
    List_824A7E58 choices;
    Choice_824A7E58 choice;
    __vector4 dot;

    fn_824A7F80(&choices);
    choice.id = 3;
    dot = __vmsum3fp(*direction, __VMXGetReg(71));
    choice.score = dot.vector4_f32[0];
    fn_824A8070(&choices, &choice);
    choice.id = 4;
    dot = __vmsum3fp(*direction, __VMXGetReg(68));
    choice.score = dot.vector4_f32[0];
    fn_824A8070(&choices, &choice);
    choice.id = 2;
    dot = __vmsum3fp(*direction, __VMXGetReg(70));
    choice.score = dot.vector4_f32[0];
    fn_824A8070(&choices, &choice);
    choice.id = 1;
    dot = __vmsum3fp(*direction, __VMXGetReg(73));
    choice.score = dot.vector4_f32[0];
    fn_824A8070(&choices, &choice);
    fn_824A8118(&choices);
    choice = choices.head->prev->value;
    if (choice.score > self->threshold) {
        self->choice = choice.id;
    }
    fn_824A7FF8(&choices);
}
